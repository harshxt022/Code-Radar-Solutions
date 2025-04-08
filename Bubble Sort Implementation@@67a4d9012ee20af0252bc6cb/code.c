
#include <stdio.h>

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int k=0;k<n;k++){
        scanf("%d",&a[k]);
    }
    int arr[5]={3,2,1,5,4};
    for(int i=0;i<n-1;i++){
        for(int j=i;j<n-i+1;j++){
            if(arr[i]>arr[j]){
                int temp;
                temp=arr[i];
                arr[j]=arr[i];
                arr[j]=temp;
            }
        }   
    }
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}