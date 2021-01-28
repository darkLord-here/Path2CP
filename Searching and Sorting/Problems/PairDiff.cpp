#include <iostream>
using namespace std;

int findDiff(int a[], int L, int N){
    int flag=-1;
    for(int i=0;i<L-1;i++){
        for(int j=i+1;j<L;j++){
            if(abs(a[i]-a[j])==N){
              flag = 1;
            } 
        }
    }
    return flag;
}

int main() {
	int tc;
	scanf("%d",&tc);
	int N,L;
	while(tc--){
	    scanf("%d %d",&L,&N);
	    int arr[L];
	    for(int i=0;i<L;i++){
	        scanf("%d",&arr[i]);
	    }
	    int res = findDiff(arr,L,N);
	    cout<<res<<endl;
	}
	return 0;
}