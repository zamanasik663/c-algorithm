#include<stdio.h>
#include<stdbool.h>


//swapped function
void swap(int *xp, int *yp);
//sorting function
void bubble_sort(int arr[],int n);
//print array function
void print_array(int arr[],int n);

int main(){

    int arr[] = {15,16,30,35,25,26,22,18,69,65,68,75,42,58,59};
    int n = sizeof(arr) / sizeof(arr[0]);
    bubble_sort(arr,n);
    printf("Sorting Array: \n");
    print_array(arr,n);


    return 0;
}

//swapped function
void swap(int *xp, int *yp){
   int temp = *xp;
   *xp = *yp;
   *yp = temp;
}

//sorting function
void bubble_sort(int arr[],int n){
    int i,j;
    bool swapped;
    
    for(i = 0 ; i < n - 1 ; i++){
       swapped = false;
   
       for(j = 0 ; j < n - 1 - i ; j++){
          if(arr[j] > arr[j+1]){
             swap(&arr[j] , &arr[j+1]);
             swapped = true;
            
          }
       }

        // If no two elements were swapped by inner loop,
        // then break
       if(swapped == false)
    
       break;
    }
}

//print array function
void print_array(int arr[],int n){
    int i;
    for(i = 0 ; i < n ; i++){
       printf("%d ",arr[i]);
    }
}

