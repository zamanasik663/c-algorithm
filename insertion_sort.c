#include<stdio.h>

//insertion sort function
void insertion_sorrt(int arr[],int n);
//print Array function
void printArray(int arr[], int n);
int main(){

    int arr[] = {89,12,45,65,87,84,36,15,49,41,55,57,94,96};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    insertion_sorrt(arr,n);
    printf("sorting array: \n");
    printArray(arr,n);
    printf("\n");


    return 0;
}

//insertion sort function
void insertion_sorrt(int arr[],int n)
{   int i,j,temp;
    for(i = 1 ; i < n ; i++){
       temp = arr[i];
       j = i - 1;

       while(j >= 0 && arr[j] > temp){
          arr[j+1] = arr[j];
          j--;
       }
       arr[j+1] = temp;
    }

   

}

//print Array function
void printArray(int arr[], int n){
    int i;
   for(i = 0 ; i < n ; i++){
      printf("%d  ",arr[i]);
   }

}




