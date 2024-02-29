static void Display(Queue<int> t)
       {
           Console.Write("Queue Count: " + t.Count);
           Console.Write("\tElement: ");
           foreach (int temp in t)
               Console.Write(temp + " ");
           Console.WriteLine();
       }
 
       static void Main(string[] args)
       {
           Queue<int> q = new Queue<int>();
 
           //??????????????????? Queue
           q.Enqueue(10);
           q.Enqueue(20);
           q.Enqueue(30);
           q.Enqueue(40);
           q.Enqueue(30);
 
           Display(q);
 
           //Peek ????? Object ??????????????????????
           //??? Queue ????????????????????????????? Queue
           Console.Write("Peek: " + q.Peek()+" ");
           Display(q);
 
 
           //??????????????????
           q.Dequeue();
           Display(q);
 
 
           q.Enqueue(50);
           Display(q);
 
           Console.ReadLine();
       }