#include<stdio.h>
#include<stdlib.h>


struct Stack
{
 int top;
 unsigned int capacity;
 int *arr ;

};

struct Stack *createStack(unsigned int capacity)
{
  struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));

  stack->capacity = capacity;
  stack->top = -1;
  stack->arr = (int *)malloc(stack->capacity*sizeof(int));

  return stack;

}

int isFull(struct Stack* stack)
{
 return stack->top ==stack->capacity;
}

int isEmpty(struct Stack* stack)
{
 return stack->top == -1;
}

void push( struct Stack* stack , int item)
{
  if(isFull(stack))
  {
   printf("stack over flow");
  }
  else
  {
   stack->arr[++stack->top] = item;
   printf(" %d item is pushed\n ",item);

  }

}

int pop( struct Stack* stack)
{
  if(isEmpty(stack))
  {
   printf("stack under flow");
  }
  else
  {
    return stack->arr[stack->top--];


  }

}

int main()
{
  struct Stack* vin = createStack(10);

  push(vin ,50);
  push(vin ,100);

  printf("this item is popped : %d\n" , pop(vin));

return 0;
}
