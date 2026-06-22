#include<stdio.h>
int main(){
    int arr[]={10,20,30,40,50};
int size=5;
int lr=0,up=4,mid,element,f=0;
printf("enter the searching element: ");
scanf("%d", &element);

while(lr <= up)
{
    mid = (lr + up) / 2;
    if(arr[mid] == element)
    {
        printf("Element found at index %d\n", mid);
        f = 1;
        break;
    }
    else if(arr[mid] < element)
    {
        lr = mid + 1;
    }
    else
    {
        up = mid - 1;
    }
}
if(f == 0)
{
    printf("Element not found\n");
}
}

