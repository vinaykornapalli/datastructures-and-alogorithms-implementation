
#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>

struct node
    {
        int data;
        struct node *next;
    };

//printing the data of the list!!
void printlist(struct node *n)
{
    while(n!=NULL)
    {
        printf("%d\n",n->data);
        n = n->next;
    }
}


//push node at the beginning

 void push( struct node **ref_head , int new_data)
{
    struct node *new_node;
    new_node = (struct node*)malloc(sizeof(struct node));

    new_node->data = new_data;
    //dereferencing ref_head to access the address of head
    new_node->next = (*ref_head);

    (*ref_head) = new_node;



}
int main()
{



    // a simple linked list with three nodes


    struct node* head = NULL;
    struct node* second = NULL;
    struct node* third = NULL;

    //allocating space in heap

    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));


    head->data = 45;
    head->next = second;


    second->data = 44;
    second->next = third;

    third->data = 39;
    third->next = NULL;


   printlist(head);


   //adding new node at the first

   struct node *newi;

   newi = (struct node*)malloc(sizeof(struct node));

   newi->data = 374;
   newi->next = head;
   //checking the insertion
   printlist(newi);



   //insertion at the end


   struct node *endi;

   endi = (struct node*)malloc(sizeof(struct node));
   endi->data  =4175;
   third->next = endi;
   endi->next = NULL;

   //checking the insertion

   printlist(newi);


   //checking push function


   push(&head, 416);

   printlist(newi);




    return 0;

}
