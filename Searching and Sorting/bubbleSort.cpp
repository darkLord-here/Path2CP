//Bubble Sort 
/*
We start from the first element in an array and then compare with adjacent element
if it is greater then we swap else we continue to the next element and repeat the same process.
*/

#include<iostream>

using namespace std;

void printContent(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void swap(int *a, int *b){
    *a += *b;
    *b = *a - *b;
    *a = *a - *b;
}

void bubbleSort(int *arr, int n){
    int j;
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            if(arr[j]>arr[j+1]) swap(arr[j],arr[j+1]); 
        }
        cout<<"Step "<<i<<" : ";
        printContent(arr,n);
    }
}

int main(){
    int array[20] = {10,9,8,7,6,5,4,3,2,1,11,2,3,4,5,6,7,8,9,10};
    cout<<"[Input Array]:\t";
    printContent(array,20);
    cout<<"[Running Bubble Sort]"<<endl;
    bubbleSort(array,20);
    cout<<"[Output Array]:\t";
    printContent(array,20);
    return 0;
}