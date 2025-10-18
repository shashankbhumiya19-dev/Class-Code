#include <stdio.h>
int main(){
    
    int a[50],n;
    int k;
    int i;
    int j;
    int temp;

    printf("Enter the size of array: ");//we can take the size as per our choice but the max size is 100 in line 4
    scanf("%d",&n);
    printf("Enter the elements of array:\n");// write the element of the array
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the kTh term : ");
    scanf("%d",&k);
    // Sorting the Array
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++){
        
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[i];
                a[i]=temp;
            }
        }
    }

    printf("Sorted Array is : ");
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    }
printf("\n");
if(k>n){
    printf("%d th term is not present in array !!",k);
}
else{
    printf("%d th maximum element is :%d",k,a[n-k]);
    printf("\n%dth minimum element is :%d",k,a[k-1]);

} return 0;
    }

