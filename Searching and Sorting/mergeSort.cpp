#include<iostream>

using namespace std;

void printContent(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void merge(int arr[], int left, int mid, int right){
    int n1 = mid-left+1;
    int n2 = right-mid;
    int L[n1],R[n2];
    for(int i=0; i<n1; i++){
        L[i] = arr[left+i];
    }

    for(int i=0; i<n2; i++){
        R[i] = arr[mid+1+i];
    }

    int i=0,j=0,k=left;
    while(i<n1 && j<n2){
        if(L[i]>=R[j]) {
            arr[k] = R[j];
            j++;
        }
        else {
            arr[k] = L[i];
            i++;
        }
        k++;
    }
    while(i<n1){
        arr[k] = L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k] = R[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int left, int right){
    if(left>=right) return;
    int mid = (left+right-1)/2;
    mergeSort(arr,left,mid);
    // printf("Left");
    // printContent(arr,mid);
    mergeSort(arr,mid+1,right);
    // printf("Right");
    // printContent(arr,right);
    merge(arr,left,mid,right);
}



int main(){
    int array[20] = {10,9,8,7,6,5,4,3,2,1,11,2,3,4,5,6,7,8,9,10};
    cout<<"[Input Array]:\t";
    printContent(array,20);
    cout<<"[Running Merge Sort]"<<endl;
    mergeSort(array,0,20);
    cout<<"[Output Array]:\t";
    printContent(array,20);
    return 0;
}