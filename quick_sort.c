#include<stdio.h>

//partition function
int partitions(int arr[],int l ,int h);
//quick sort function
void quicksort(int arr[], int  l, int h);
//swap function
void swap(int *xp, int *yp);
//print Array function
void printArray(int arr[],int n);

//driver code
int main(){
    

    int arr[] = {10,12,4,5,8,15,17,6,3,45,65,19,20,21,16,9};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("Original array:\n");
    printArray(arr,n);
    printf("\n");
    printf("Sorted Array: \n");
    quicksort(arr,0,n-1);
    printArray(arr,n);
    printf("\n");
    return 0;
}

//partition function
int partitions(int arr[],int l ,int h)
{
    int pivot = arr[l];
    int i = l;
    int j = h;

    while(i < j){
        while(arr[i] <= pivot){
            i++;
         }
         while(arr[j] > pivot){
           j--;
         }
         if(i < j){
             swap(&arr[i], &arr[j]);
         }
    }
    swap(&arr[l],&arr[j]);

    return j;
}

//quick sort function
void quicksort(int arr[], int  l, int h)
{
    if(l < h){
        int j = partitions(arr,l,h);

        quicksort(arr,l,j-1);
        quicksort(arr,j+1,h);
    }
}

//swap function
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

//print Array function
void printArray(int arr[],int n)
{
    int i;
    for(i = 0 ; i < n ; i++){
      printf("%d ",arr[i]);

    }
}