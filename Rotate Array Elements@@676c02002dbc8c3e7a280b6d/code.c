#include <stdio.h>
void reverse(int arr[], int start , int end){
    while(start < end){
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void rotate(int arr[],int n,int k){
    k = k%n;
    if(k==0) return;
    reverse(arr,0,n-1);
    reverse(arr,0,k-1);
    reverse(arr,k,n-1);
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int j=0;j<n;j++){
        scanf("%d",arr[j]);
    }
    int start=0; int end=n-1 ;
    int k;
    scanf("d",&k);
    rotate(arr,n,k);
    for(int i = 0;i<5;i++){
        printf("%d\n",arr[i]);
    }
    return 0;
}