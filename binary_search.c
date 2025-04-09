#include<stdio.h>

//function to the binary search the element in the array
int binary_search(int arr[],int length,int data);

//function to the binary search the element with the exam result
int final_result(int exam_result[], int length,int data);
int main(){

    
    // int arr[] = { 12,15,19,21,24,45,56,67,78,89,90 };
    // int length = sizeof(arr)/sizeof(arr[0]);
    // printf("Enter the element to be searched: ");
    // int data;
    // scanf("%d", &data);
    // //calling the binary search function
    // int result = binary_search(arr, length, data);
    // //ternary operation to check if the element is present or not
    // (result == -1) ? printf("Element is not present in the array\n")
    //                : printf("Element is present at index %d\n", result);


    int exam_result[] = {12,13,15,17,19,20,25,24,26,28,30,35};

    int length = sizeof(exam_result) / sizeof(exam_result[0]);
    int data;
    printf("Enter your Roll: ");
    scanf("%d",&data);

     int result2 = final_result(exam_result,length,data);
     (result2 == -1) ? printf("you are not selected\n") : printf("you are selected. your merit result is %d\n",result2 + 1);
   

   

    return 0;
}

int binary_search(int arr[],int length,int data)
{
    int l,r,mid;
    l = 0;
    r = length - 1;
    while(l <= r){
      mid = (l+r)/2;
      if(arr[mid] == data){
        return mid;
      }else if(arr[mid] < data){
        l = mid + 1;

      }else{
        r = mid - 1;
      }
    }

    
    return - 1;
}

//function to the binary search the element with the exam result
int final_result(int exam_result[], int length,int data)
{
  int l,r,mid;
  l = 0;
  r = length - 1;
  while(l <= r){
     mid = (l+r) / 2 ;

     if(data == exam_result[mid]){
       return mid;
     }else if(data > exam_result[mid]){
       l = mid + 1;
     }else{
      r = mid - 1;
     }
  }
  return -1;
}

