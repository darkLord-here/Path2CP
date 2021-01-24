#include<iostream>
#include<vector>

using namespace std;

void find(vector<int> arr, int num){
    int flag=0,pos=0;
    for(int i=0; i<arr.size(); i++){
        if(arr[i]==num){
            flag = 1;
            pos = i+1;
            break;
        }
    }
    (flag==1)?printf("Element found at %d position!",pos):printf("No Such Element found!"); 
}

int main(){
    vector<int> arr = {1,2,3,1,5,6,7,8,9,10};
    int element = 1;
    find(arr, element);
    return 0;
}