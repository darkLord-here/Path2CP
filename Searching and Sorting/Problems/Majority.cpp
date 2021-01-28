// { Driver Code Starts
#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;


 // } Driver Code Ends


// Function to find majority element in the array
// a: input array
// size: size of input array
int majorityElement(int a[], int size)
{
    unordered_map<int,int> mp;
    for(int i=0; i<size; i++){
        if(mp.count(a[i])==0) mp[a[i]] = 1;
        else mp[a[i]]=1;
    }
    for(auto i:mp){
        if(i.second>(size/2)) return i.first;
    }
    return -1;
}

// { Driver Code Starts.

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        int arr[n];
        
        for(int i = 0;i<n;i++){
            cin >> arr[i];
        }
        
        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}
  // } Driver Code Ends