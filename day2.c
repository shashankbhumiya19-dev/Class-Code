#include<stdio.h>


int main(){
   int arr[50], size,i;
   int temp;
   printf("Enter the size of array: ");

scanf("%d",&size);

    printf("Enter the elements of array: ");
 for(i=0;i<size;i++)
{
    scanf("%d",&arr[i]);
} 
int start=0;
int end=size - 1;

while(start < end)
{
     temp=arr[start];
     arr[start]=arr[end];
     arr[end]=temp;

       start++;
       end--;
}
        printf("Reversed Array: ");
        for(int i=0;i<size;i++){
        printf("%d\t",arr[i]);
        }
return 0;
}