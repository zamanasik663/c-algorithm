#include<stdio.h>

//bubble sort function
void bubble_sort(int arr[], int n);

int main(){

    // int result[] = {50,52,45,64,85,75,95,60,65,87,95,110.115,14,19,18};
    
    // int length = sizeof(result) / sizeof(result[0]);
    // int temp;

    // //sorting algorithm

    // for(int i = 0 ; i < length ; i++){
    //     for(int j = 0 ; j < length ; j++){
    //       if(result[i] < result[j]){
    //         temp = result[i];
    //         result[i] = result[j]; 
    //         result[j] = temp;
    //       }
    //     }
    //  }
 
    //  for(int i = 0 ; i < length ; i++){
    //    printf("%d  ",result[i]);
    //  }
    //  printf("\n");


      // int a = 20;
    // int b = 10;
    // int temp = a;
    // a = b;
    // b = temp;
    // printf("A is %d and B is %d\n",a,b);


    


     int arr[] = {22,14,12,18,9,10,4,8,14,17,16,8,20,34,11}; 
     int n = sizeof(arr) / sizeof(arr[0]);
     bubble_sort(arr,n);

    //print the sorted array

    for( int i = 0 ; i < n ; i++){
      printf("%d ",arr[i]);
   
     }
     printf("\n");



    return 0;
}

void bubble_sort(int arr[], int n)
{
  int temp,i,j;
  for(i = 0 ; i < n-1 ; i++){
     for(j = 0 ; j < n-1-i ; j++){
       if(arr[j] > arr[j+1]){
          temp = arr[j];
          arr[j] = arr[j+1];
          arr[j+1] = temp;
       }
     }
  }

  
}