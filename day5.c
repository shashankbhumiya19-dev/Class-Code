#include<stdio.h>
         int main(){
    int a[50],size,i,j,temp;
            printf("Enter the size of an array : ");
            scanf("%d",&size);
            printf("Enter the element of an array : ");


    for(i=0; i<size;i++)
   {
    scanf("%d",&a[i]);
   }
i=0;
j=size - 1 ;
while(i<j)
{
   if(a[i]<0)
   i++;
else if(a[j]>=0)
j--;
else{
// swapping the element
       temp=a[i];
       a[i]=a[j];
       a[j]=temp;
     i++;
     j--;
   }
}
 printf("The rearranged array is : \n");
 for(i=0;i<size;i++)
 {
    printf(" %d ",a[i]);

 }
   return 0;
}
