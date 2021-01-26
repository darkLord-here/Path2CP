#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    int middle(int A, int B, int C){
        int max=0, min=0;
        max = (A>B)?((A>C)? A: C):((B>C)? B: C);
        min = (A<B)?((A<C)? A: C):((B<C)? B: C);
        return (max==A || min== A)?((max==B || min ==B)?C:B):A;
    }
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int A,B,C;
        cin>>A>>B>>C;
        Solution ob;
        cout<<ob.middle(A,B,C) <<"\n";
    }
    return 0;
}