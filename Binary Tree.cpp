#include <stdio.h>
int i=-1;
class NODE
{
  public:
        NODE(int data)
        {
          left=NULL;
          right=NULL;
          this->data=data;        
                  }     
        int data;
        NODE *left;
        NODE *right;         
};
NODE *root;

void free(NODE *node){
     node->left=NULL;
     node->right=NULL;
} 
bool addnode(NODE **currentnode,int data)
{
     if(*currentnode==NULL)
     {
        *currentnode=new NODE(data);
        printf("Create new node %d\n",data);
        return true;
     }
     else 
     {
          if(data <(*currentnode)->data)
          {
          printf("Add %d to the left of %d\n",data,(*currentnode)->data);
          addnode(&((*currentnode)->left),data);
          }
          else if(data>(*currentnode)->data)
          {
          printf("Add %d to the right of %d\n",data,(*currentnode)->data);
          addnode(&((*currentnode)->right),data);
          }
     }
     return true;     
}
NODE *deletenode(NODE *node,int what) {
    NODE *temp;
    if(node == NULL)

    printf("\nElement not found");
    else
    {

       if(what < node->data) 
       node->left = deletenode(node->left,what); 
       else if(what > node->data) 
       node->right = deletenode(node->right,what);
       else{
         if(node->left && node->right) {
        temp = node->right;
        while(temp->left!=NULL)
        {
              temp=node->left;
        }
         node->data = temp->data;
         node->right = deletenode(node->right,node->data);
         }
         else if(node->left == NULL) 
         node=node->right; 
         else node=node->left; 
         } 
         }
      return node;
    }



void preorder(NODE *node)
{
     if(node!=NULL)
     {
         printf("%d ",node->data);
         preorder(node->left);
         preorder(node->right);
     }
}

void inorder(NODE *node)
{
     if(node!=NULL)
     {
         inorder(node->left);
         printf("%d ",node->data);
         inorder(node->right);
     }
}

void postorder(NODE *node)
{
     if(node!=NULL)
     {
         postorder(node->left);
         postorder(node->right);
         printf("%d ",node->data);
     }
}

void findnode(NODE *node,int what)
{     
     i++;
     if(node!=NULL)
     {
      if(what>node->data)
        findnode(node->right,what);
      else if(what<node->data) 
        findnode(node->left,what);
      else if(what==node->data)
      printf("Found %d in level %d\n",node->data,i);            
     }
     else 
      printf("No Data");    
}

int main()
{
    int n,data,what;
    root=NULL;
    while(n<=6){              
    printf("\n----------------\n|Enter Number  |\n|1Add Node     |\n|2Delete Node  |\n|3preorder     |\n|4inorder      |\n|5postorder    |\n|6Search       |\n|7Exit         |\n----------------\n");
    scanf("%d",&n);
    if (n==1){
        printf("Input Data : ");
        scanf("%d",&data);      
        addnode(&root,data);       
    }
    else if(n==2){
         printf("\nDelete : ");
         scanf("%d",&what);
         deletenode(root,what);
    }
    else if(n==3){
         printf("\nPREORDER = ");
         preorder(root);
         printf("\n");
    }
    else if(n==4){
         printf("\nINORDER = ");
         inorder(root);
         printf("\n");
    }
    else if(n==5){
         printf("\nPOSTORDER = ");
         postorder(root);
         printf("\n");
    }
    else if(n==6){
         printf("\nWhat do you want to find ");
         scanf("%d",&what);
         i=-1;
         findnode(root,what);
    }
}
}
