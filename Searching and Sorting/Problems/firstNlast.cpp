#include <iostream>

using namespace std;

void search(int arr[], int n, int element){
    int flag = 0,start = 0, endpos = 0;
    for(int i=0; i<n; i++){
        if((arr[i]==element)&&flag == 0 ){
            start = i;
            flag = 1;
        }
        else if(arr[i]>element){
            endpos = i-1;   
            break;
        }
    }
    (flag == 1)?printf("%d %d\n",start,endpos):printf("-1\n");
}

int main() {
	int tc=0,n=0,x=0;
	cin>>tc;
	while(tc--){
	    cin>>n>>x;
	    int arr[n];
	    for(int i= 0; i<n; i++){
	        cin>>arr[i];
	    }
	    search(arr,n,x);
	}
	return 0;
}