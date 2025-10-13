#include <stdio.h>
int main(){
    //a[size]=10,20,45,36,73
    int a[50],size,i,max,min;
    printf("Enter the size of array:");//we can take the size as per our choice but the max size is 100 in line 4
    scanf("%d",&size);
    printf("Enter the elements of array:");// write the element of the array
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];//max element which is written in a[0]
    for(i=0;i<size;i++) //i=0
    {
        if(a[i]>max) //checking a[1]>max
        {
            max=a[i];// if the condition is true then the max value stored in a[1] for example the loop again execute
        }
    }
    for(i=0;i<size;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    printf("Maximum Element of Array:%d\n",max);
    printf("Minimum Element of Array:%d",min);
    return 0;
}