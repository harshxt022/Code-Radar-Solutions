
void bubbleSort(int n,int arr[n]){
    for(int k=0;k<n-1;k++){
        for(int j=k;j<n-k+1;j++){
            if(arr[k]>arr[j]){
                int temp;
                temp=arr[k];
                arr[j]=arr[k];
                arr[j]=temp;
            }
        }   
    }
}
void printArray(int n,int arr[n]){
    for(int q=0;q<n;q++){
        printf("%d",arr[q]);
    }
}