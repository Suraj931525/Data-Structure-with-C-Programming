#include<stdio.h>
int stack[5];
int top=-1;

void push(int value){

    if(top==5 -1){
        printf("stack overflow! cannot push %d\n",value);
    }
    else{
        top++;
        stack[top]=value;
        printf("%d pushed to stack\n",value);
    }

}
//function to display the stack 
void display(){
    if(top==-1){
        printf("Stack is empty .\n");
    }
    else{
        printf("Stack elements are: ");
        for(int i=0;i<=top;i++){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}


//pop creation

void pop(){
    if(top ==-1){
        printf("stack underflow! cannot pop.\n");
    }
    else{
        int value=stack[top];
        top--;
        printf("%d popped from stack\n",value);
    }
}

int main(){
    push(10);
    push(20);
    push(30);
    display();

    pop(10);
    pop(20);
    display();

    return 0;
}