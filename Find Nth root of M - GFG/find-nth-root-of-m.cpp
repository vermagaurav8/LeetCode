//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	int NthRoot(int n, int m)
	{
	    // Code here.
	     if(n==1 ) return m;
        if(m==1) return 1;
        int ans=1;
        for(int i=2;i*i<=m;i++)
        {
            int count=0;
            if(m%i==0)
            {
                int np=m;
                while(np%i==0)
                {
                    np=np/i;
                    count++;
                }
                if(count==n and np==1) ans=i;
            }
        }
        if(ans>1)
        return ans;
        return -1;
	}  
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		Solution ob;
		int ans = ob.NthRoot(n, m);
		cout << ans << "\n";
	}  
	return 0;
}
// } Driver Code Ends