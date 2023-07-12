This program implements stack using two queues  

//Stack is linear data structure for pushing and popping elements through one end called as top 

//Queue is linear data structure for inserting elements from rear end and deleting elements from front end  

//Here for implementing one stack using two queues so we need to decide which data structure we are using to represent queue 

//We are using linked list for queue representation here  

 

//Header Files  

#include<stdio.h> 

#include<stdlib.h> 

 

//Structure of node in linked list for Queue 1 

struct node_qu1  

{ 

   struct node_qu1 *next1; 

   int data1; 

}; 

//f1 is node from which deletion will be done 

//r1 is node from which insertion will be done 

//before any operation,f1 and r1 will set to NULL 

struct node_qu1 *f1 = NULL, *r1 = NULL, *q1 = NULL; 

 

//Structure of node in linked list for Queue 2 

struct node_qu2 

{ 

   struct node_qu2 *next2; 

   int data2; 

}; 

//f2 is node from which deletion will be done 

//r2 is node from which insertion will be done 

//before any operation,f2 and r2 will set to NULL 

 

struct node_qu2 *f2 = NULL, *r2 = NULL, *q2 = NULL; 

 

//function definition for inserting i.e enqueue into Queue 1 

void enqueue1(int a)  

{ 

 

   //Three steps for insertion 1.Declare node 2.Allocate dynamic memory 3.Set node pointers  

   struct node_qu1 *np1; //declared new node as np1 

   np1=(struct node_qu1 *)malloc(sizeof(struct node_qu1));//allocate dynamic memory to np1 

   np1->data1 = a;//set pointer of np1 

   np1->next1 = NULL;//set pointer of np1 

   if (f1 == NULL) //if f1 is NULL means Queue 1 is empty so new node will become f1 and r1 

   { 

      r1 = np1; //new node is np1,make it as r1 

      f1 = r1;//make r1 as f1 

   }//end of if  

   else //f1 is not NULL means elements are there in Queue 1  

   { 

      r1->next1 = np1;//make np1 as r1->next1  

      r1 = np1;//make np1 as r1 

   }//end of else  

}//end of enqueue1 

 

//function definition for deleting i.e dequeue from Queue 1 

int dequeue1()  

{ 

   int a; 

   if(f1 == NULL) //check if f1 is NULL. If condtion true, Queue 1 is empty  

   {	 

      printf("No elements present in queue\n"); 

   }  

   else //Queue 1 is not empty  

   { 

      q1 = f1; //choose which node to be deleted i.e f1,store it to q1 

      f1 = f1->next1;//f1 will change to next node  

      a = q1->data1; //node deleted will be q1 so data part of q1 is store into a 

  free(q1);//release memory  

      return a;//return a where dequeue1() function is called  

   }//end of else 

}//end of dequeue1() 

 

//function definition for inserting i.e enqueue into Queue 2 

void enqueue2(int a)  

{ 

   //function definition for inserting i.e enqueue into Queue 2 

   struct node_qu2 *np2;//declared new node as np2 

   np2=(struct node_qu2 *)malloc(sizeof(struct node_qu2));//allocate dynamic memory to np2 

   //np2 = new qu2; 

   np2->data2 = a;//set pointer of np2 

   np2->next2 = NULL;////set pointer of np2 

   if (f2 == NULL) //if f2 is NULL means Queue 2 is empty so new node will become f2 and r2 

   { 

      r2 = np2;//new node is np2,make it as r2 

      f2 = r2;//make r2 as f2 

   }//end of if  

   else  

   { 

      r2->next2 = np2; 

      r2 = np2; 

   }//end of else  

}//end of enqueue2() 

 

int dequeue2()  

{ 

   int a; 

   if (f2 == NULL) //check if f2 is NULL. If condtion true, Queue 2 is empty  

   { 

   	printf("\nQueues is empty"); 

   }  

   else //Queue 2 is not empty  

   { 

      q2 = f2;//choose which node to be deleted i.e f2,store it to q2  

      f2 = f2->next2;//f2 will change to next node  

      a = q2->data2;//node deleted will be q2 so data part of q2 is store into a 

   free(q2);//release memory 

   return a;//return a where dequeue2() function is called  

   }//end of else 

}//end of dequeue2() 

 

 

int main()  

{ 

   int n, a, i = 0; 

   printf("\n Enter the number of elements to be entered into stack\n"); 

   scanf("%d",&n);//inputting number of elements in stack  

   while (i < n) //till all elements are not finished i.e till n,repeat 

   { 

      printf("Enter the element to be entered\n"); 

      scanf("%d",&a);//input value and 

      enqueue1(a);//insert that value a into queue 1  

      i++;//for reaching to next value  

   } 

   printf("\n\nElements popped\n\n"); 

   while (f1 != NULL || f2 != NULL)// till both queues are not null  

   { 

      if (f2 == NULL)// if queue 2 is null  

  { 

         while (f1->next1 != NULL) //till first queue is not empty  

 { 

            enqueue2(dequeue1());//insert value into queue 2 which is deleted from queue 1 

         }//end of while 

         printf("\n%d",dequeue1());//print that deleted value from queue 1 

      }//end of if  

  else //if queue 1 is NUUL 

  { 

   	           while (f2->next2 != NULL) //till second queue is not empty 

  { 

            enqueue1(dequeue2());//insert value into queue 1 which is deleted from queue 2  

         }//end of while 

         printf("\n%d",dequeue2());//print that deleted value from queue 2 

      }//end of else 

   }//end of outer while 

}//end of main() 