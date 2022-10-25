#include <stdio.h>
#include <stdlib.h>

#define MAX 100

//Declaring global variables
int stack[MAX], i, top_of_stack, value_in_stack;

//Function Prototyping
void push_into_stack(int);
void pop_stack(int);
int peek_ofThe_stack();
void display_stack(int);

int main(){
   int size_of_stack, choice_option;
   
   top_of_stack = -1;
   
   printf("\nEnter the size of the stack (max -> 100): ");
   scanf("%d", &size_of_stack);
   
   printf("\t~~~STACK IMPLEMENTATION USING ARRAY~~~\n");
   printf("\t\t     OPERATIONS: \n");
   printf("\t\t      1. PUSH\n\t\t      2. POP\n\t\t      3. PEEK\n\t\t      4. DISPLAY\n\t\t      5. EXIT");
   
   do{
      
      printf("\nEnter your choice: ");
      scanf("%d", &choice_option);

      switch(choice_option){

         case 1:

            push_into_stack(size_of_stack);
            break;

         case 2:

            pop_stack(size_of_stack);
            break;

         case 3:

            printf("\nThe peek of the stack is: %d", peek_ofThe_stack());
            break;

         case 4:

            display_stack(size_of_stack);
            break;

         case 5:

            printf("\nProgram exited\n");
            exit(0);
            break;

         default:

            printf("Wrong choice entered! Please enter anything between (1 to 5)\n");
            break;
      }
   }
   while(choice_option != 5);

   return 0;
}

void push_into_stack(int size_of_array){
   if(top_of_stack >= size_of_array - 1){
      printf("\nStack Overflow");
   }
   else {
      printf("Enter the value to be pushed: ");
      scanf("%d", &value_in_stack);

      top_of_stack++;

      stack[top_of_stack] = value_in_stack;
   }
}

void pop_stack(int size_of_array){
   if(top_of_stack <= -1){
      printf("\nStack Underflow");
   }
   else {
      printf("\nThe popped element is : %d", stack[top_of_stack]);
      
      top_of_stack--;
   }
}

int peek_ofThe_stack(){
   if(top_of_stack == -1){
      return -1;
   }
   return stack[top_of_stack];
}

void display_stack(int size_of_array){
   if(top_of_stack >= 0){
      printf("\nThe stack is: ");
      
      for(i = top_of_stack; i >= 0; i--){
         printf("\n%d", stack[i]);
      }

   } 
   else {
      printf("\nStack is Empty\n");
   }
}