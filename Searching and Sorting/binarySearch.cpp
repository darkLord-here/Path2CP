#include<bits/stdc++.h>

using namespace std;

void find(int arr[], int begin, int end, int num){
    int mid = 0, flag=0;
    while(end >= begin){
        mid = (end+begin)/2;
        if(num==mid) {
            flag=1; 
            break;
        }
        else if(num>mid)  begin = mid+1;
        else end = mid-1; 
    }   
    (flag==1)?printf("Element Found!"):printf("No such element!");
}

int main(){
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int element = 11;
    int n = sizeof(arr)/sizeof(int);
    find(arr, 0, n-1, element);
    return 0;
}