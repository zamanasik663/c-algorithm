#include<stdio.h>

//function to the search the element in the array
int search(int arr[], int length, int x);
//admission result function
int admission_result(int admission_arr[],int length, int search_data);

int main(){
   
    // int arr[] = { 2, 3, 4, 10, 40 };
    // int length = sizeof(arr)/sizeof(arr[0]);
    // printf("Enter the element to be searched: ");
    // int x;
    // scanf("%d", &x);
    // //calling the soting function
    // int result = search(arr, length, x);
    // //ternary operation to check if the element is present or not
    // (result == -1) ? printf("Element is not present in the array\n")
    //                : printf("Element is present at index %d\n", result);


    int admission_arr[] = {10,15,12,18,17,19,20,25,23,65,45,58};
    int n = sizeof(admission_arr) / sizeof(admission_arr[0]);

    int search_data;
    printf("Enter your Admission Roll: ");
    scanf("%d",&search_data);
    //calling the admission result function
    int merit_result = admission_result(admission_arr,n, search_data);
    (merit_result == -1) ? printf("Sorry! you are not selected.\n") : printf("Congratulation you have selected.your merit position is %d\n",merit_result + 1);
   
    return 0;
}

int search(int arr[],int length,int x)
{
    for(int i = 0 ; i < length ; i ++){
     if(arr[i] == x){
        return i;
     }
     
    }
    return -1;
}

//admission result function
int admission_result(int admission_arr[],int n, int search_data)
{
    for(int i = 0 ; i < n ; i++){
       if(admission_arr[i] == search_data){
           return i;
       }
    }
    return -1;
}

