
#include <stdio.h>
void bubbleSort(int n,int arr[n]){
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
}
void printArray(int n,int arr[n]){
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
}