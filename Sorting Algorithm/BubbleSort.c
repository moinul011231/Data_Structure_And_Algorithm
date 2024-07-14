#include <stdio.h>

BubbleSort(int arr[], int n){
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n-i-1; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}


int  main()
{
    int n;
    printf("Enter arr number");
    scanf("%d",&n);
    int arr[n];

    for(int i=0;i<n; i++)
    {
        printf("Enter the value of array %d == ",i);
        scanf("%d",&arr[i]);
    }

    BubbleSort(arr,n);

    for(int i=0; i<n; i++){
        printf("%d ",arr[i]);
    }
}