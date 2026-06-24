#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next;
    struct node *prev;
};
struct node *head=NULL;

void beginInsert(){
    int item;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if(ptr==NULL){
        printf("Overflow!");
    }
    else{
        printf("Enter Element: ");
        scanf("%d", &item);
        if(head==NULL){
            ptr->next=NULL;
            ptr->prev= NULL;
            ptr->data=item;
            head=ptr;
        }
        else{
            ptr->data= item;
            ptr-> prev=NULL;
            ptr-> next= head;
            head->prev=ptr;
            head=ptr;
            
        }
        printf("\n Node Inserted!");
    }
}

void display(){

    struct node *ptr;
    ptr=head;
    if(ptr==NULL){
        printf("Nothing to Print");
    }
    else{
        printf("Printing Values: \n");
        while(ptr!=NULL){
            printf("\n%d", ptr->data);
            ptr=ptr->next;
        }
    }
}
int main(){
    int choice=0;
    while(choice!=4){
        printf("\n\n*...Choose one option of the following...* \n1. Insert 2. Show 3. Exit");
        printf("\nEnter Your Choice(1/2/3): ");

        scanf("%d",&choice);

        switch(choice){
            case 1:
                beginInsert();
                break;
            case 2:
                display();
                break;
            case 3:
                return 0;
            default:
                printf("Invalid Input!!");
        }
    }
    return 0;
}