#include<stdio.h>

//merge sort Algorithm
void MS(int arr[],int l,int h);
//merge function
void merge(int arr[],int l , int h , int mid);
//printArray function
void printArray(int arr[],int n);

int main()
{

   int arr[] = {45,40,42,46,50,54,49,48,36,35,20,24,21,65};
   int n = sizeof(arr) / sizeof(arr[0]);

   printf("Original unsorted array: \n");
   printArray(arr,n);
   printf("Sorted Array: \n");
   MS(arr,0,n-1);
   printArray(arr,n);

    return 0;
}

//merge sort Algorithm
void MS(int arr[],int l,int h)
{
    if(l < h){
      int mid = (l+h) / 2;

      MS(arr,l,mid);
      MS(arr,mid+1,h);
      merge(arr,l,h,mid);
    }
}
//merge function
void merge(int arr[],int l , int h , int mid)
{
    int i,j,k;
    int b[h - l + 1];
    i = l;
    j = mid + 1;
    k = 0;

    while(i <= mid && j <= h){
        if(arr[i] < arr[j]){
            b[k] = arr[i];
            i++;
            k++;
          }else{
              b[k] = arr[j];
              j++;
              k++;
          }
    }

    if(i > mid){
      while(j <=h ){
        b[k] = arr[j];
        j++;
        k++;
      }
    }else{
        while(i <= mid){
           b[k] = arr[i];
           i++;
           k++;
        }
    }

    //copy the temporary array back to the original array
    for(i = l, k = 0; i <= h ; i++,k++){
        arr[i] = b[k];
    }

    

}
//printArray function
void printArray(int arr[],int n)
{
    int i;
    for(i = 0; i < n ; i++){
      printf("%d ",arr[i]);
    }
    printf("\n");
}