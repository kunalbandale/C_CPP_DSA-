//Following is the program for postfix expression using stack  

//Postfix expression is simplest and fast form for evaluating arithmetic expression  

//For example,ab+,56+,89+8* 

//Here stack is representated using array so top is index position of current element in stack 

 

//Header Files  

#include<stdio.h> 

int stack[20];//array of size 20  

int top = -1;//initialize top to -1 to indicate stack is empty  

 

//function defintion  

void push(int x) 

{ 

        top=top+1; //increment top by 1  

        stack[top]=x;//make new element x as stack of top  

} 

//function definition  

int pop() 

{ 

        int x; 

        x=stack[top];//choose element to be deleted from stack  

        top=top-1;//decrement top by 1 

        return x;//return deleted element  

} 

 

void main() 

{ 

        char exp[20];//character array  

        char *e;//character pointer  

        int n1,n2,n3,num; 

        printf("Enter the expression :: "); 

        scanf("%s",exp);//inputting the string  

        e = exp; //store exp to e  

        while(*e != '\0')//scanning each character in e till '\0' which is considered as string terminator  

        { 

                if(isdigit(*e))//check whether inputted character is digit 

                { 

                        /* 

As we have stated, the character '0' is not the integer, 0,  

'1' is not 1, etc. So it becomes necessary to convert digit characters to their  

numeric equivalent values, and vice versa. As we have seen, the digit values are contiguous and increasing;  

the value of '0' is 48, '1' is 49, and so forth.  

If we subtract the base value of '0', i.e. 48, from the digit character,  

we can convert the digit character to its numeric equivalent;  

e.g. '0' - '0' is 0; '1' - '0' is 1; and so forth. Thus, if ch is a digit character,  

then its numeric equivalent is ch - '0'. Conversely,  

suppose n is a positive integer less than 10, (0, 1, 2, ..., 9). Then the corresponding digit character is n + '0'.*/ 

num = *e - 48; //finding digit value of the character and storing it to num 

                        push(num);//inserting num into stack 

                } 

                else 

                { 

                        n1 = pop();//popping top element from stack and storing it to n1 

                        n2 = pop();//popping top element from stack and storint it to n2   

                        switch(*e)//character switch case 

                        { 

                                case '+': 

                                 

                                        n3 = n1 + n2; 

                                        break; 

                                 

                                case '-': 

                                 

                                        n3 = n2 - n1; 

                                        break; 

                                 

                                case '*': 

                                 

                                        n3 = n1 * n2; 

                                        break; 

                                 

                                case '/': 

                                 

                                        n3 = n2 / n1; 

                                        break; 

                                 

                        }//end of switch 

                        push(n3); //result is stroed in n3 for all cases so push n3 into stack  

                }//end of else 

                e++;//for reaching to next character in stack,e is incremented by 1 

        }//end of while  

        printf("\nThe result of expression %s  =  %d\n\n",exp,pop()); 

        return 0; 

}//end of main() 