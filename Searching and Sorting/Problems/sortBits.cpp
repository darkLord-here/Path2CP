// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

unsigned int count_bits(int n){
    unsigned int count = 0;
    while(n){
        n &= (n-1);
        count++;
    }
    return count;
}

class Solution{
    public:
    static int cmp(int a, int b){
        int i = count_bits(a);
        int j = count_bits(b);
        if(i<=j) return 0;
        return 1;
    }
    void sortBySetBitCount(int arr[], int n)
    {
        stable_sort(arr,arr+n,cmp);
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        ob.sortBySetBitCount(arr, n);
        for (int i = 0; i < n; i++)
            cout << arr[i] << " ";
        cout << endl;
    }
    return 0;
}
  // } Driver Code Ends