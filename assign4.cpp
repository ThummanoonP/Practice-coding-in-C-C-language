#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#define INF 2147483647

using namespace std;

unsigned long shortestMatrix[5][5] = {{INF,INF,INF,INF,INF},
		{INF,INF,INF,INF,INF},{INF,INF,INF,INF,INF},{INF,INF,INF,INF,INF},
		{INF,INF,INF,INF,INF},
		};
unsigned long pathMatrix[5][5];
short next[5][5] = {0};
string pathToWalk[5][5];
bool exited = false;
char map[5] = {' ','A','B','C','D'};

void findShortestPath(unsigned long matrix[5][5]) {
	for(int M=1; M<=4; M++)
		for(int I=1; I<=4; I++)
			for(int K=1; K<=4; K++)
				if(matrix[I][M]+matrix[M][K] < matrix[I][K]) {
					next[I][K] = M;
					matrix[I][K] = matrix[I][M] + matrix[M][K];
				}
}

void showMatrix(unsigned long matrix[5][5]) {
	printf("\ncolm  |    A    B    C    D\n");
	printf("====================================\n");
	for(int I=1; I<=4; I++) {
		printf("row %c |", map[I]);
		for(int K=1; K<=4; K++) {
			if(matrix[I][K]==INF)
				printf("  INF");
			else
				printf("%5lu", matrix[I][K]);
		} printf("\n");
	} printf("\n");
}

void setMatrix() {
	int weight;
	printf("Please input initial weight matrix by row separated by space.\n\n");
	printf("         To: A B C D\n");
	for(int I=1; I<=4; I++) {
		printf("Input row %d: ",I);
		for(int K=1; K<=4; K++) {
			scanf("%d", &weight);
			pathMatrix[I][K] = weight;
			if(weight != 0)
				shortestMatrix[I][K] = weight;
		}
	}
	printf("\nData inserted\n\n");
}

void showString(string matrix[5][5]) {
	printf("\n  TO  |    A    B    C    D\n");
	printf("====================================\n");
	
	for(int I=1; I<=4; I++) {
		printf("row %c |", map[I]);
		for(int K=1; K<=4; K++) {
			cout.width(5);
			cout << matrix[I][K];
		} printf("\n");
	} printf("\n");
}

string getPath(int I, int K) {
	if(shortestMatrix[I][K] == INF)
		return " ";
	int toGo = next[I][K];
	if(toGo != 0)
		return getPath(I,toGo) + map[toGo] + getPath(toGo, K);
	return "";
}

void findPath() {
	for(int I=1; I<=4; I++)
		for(int K=1; K<=4; K++) {
			pathToWalk[I][K] = getPath(I,K);
			if(shortestMatrix[I][K]!=INF)
				pathToWalk[I][K] += map[K];
		}
}

void showMenu() {
	int option = 0;
	system("cls");
	printf("Warshall's algorithm.\n");
	printf("============================\n");
	printf("1. Set initial matrix\n");
	printf("2. Find Path Matrix\n");
	printf("3. Find Shortest Path\n");
	printf("4. Exit Program\n\n");
	
	printf("Tell me what to do (1-4): ");
	scanf("%d", &option);
	switch(option) {
		int from, to;
		case 1:
			setMatrix();
			break;
		case 2:
			findShortestPath(shortestMatrix);
			findPath();
			showString(pathToWalk);;
			break;
		case 3:
			findShortestPath(shortestMatrix);
			showMatrix(shortestMatrix);
			break;
		case 4:
			printf("\nGood Bye :-)\n");
			exited = true;
			break;
		default:
			printf("Invalid command\n");
	}
}

int main(void) {
	while(!exited) {
		showMenu();
		system("pause");
	}
	return 0;
}
