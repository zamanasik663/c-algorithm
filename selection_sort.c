#include<stdio.h>
//sortring function
void selection_sort(int arr[] , int n);
//selection print Array function
void printArray(int arr[] , int n);

int main(){

    int arr[] = {12,14,8,9,7,25,24,23,21,18,13,19,20,27};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr,n);
    printf("sorting array: \n");
    printArray(arr,n);
    printf("\n");

    return 0;
}

//sortring function
void selection_sort(int arr[] , int n)
{
    int i,j,min,temp;

    for(i = 0 ; i < n - 1 ; i++){
       min = i;
       for(j = i + 1 ; j < n ; j ++){
         if(arr[j] < arr[min]){
           min = j;
         }

       }

       if(min != 0){
          temp = arr[i];
          arr[i] = arr[min];
          arr[min] = temp;
       }
    }
}

//selection print Array function
void printArray(int arr[] , int n)
{
    int i ;
    for(i = 0 ; i < n ; i++){
      printf("%d  ",arr[i]);
    }
}
