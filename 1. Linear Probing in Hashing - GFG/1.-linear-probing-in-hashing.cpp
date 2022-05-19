// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    //Function to fill the array elements into a hash table 
    //using Linear Probing to handle collisions.
    vector<int> linearProbing(int hashSize, int arr[], int sizeOfArray)
    {
        //Your code here
        vector<int> v(hashSize,-1);
        for(int i = 0 ; i < sizeOfArray ; i++)
        {
            int key = arr[i];
            int h = key % hashSize;
            int count = 0;
            if(v[h] == -1)
                v[h] = key;
            else
            {
                while(v[h] != -1 && count <= hashSize)
                {
                    if(v[h] == key) 
                        break;
                    h = (h+1)%hashSize;
                    count++;
                }
                if(v[h]==-1)
                    v[h]=key;
            }
            
        }
        return v;
    }

};

// { Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int hashSize;
	    cin>>hashSize;
	    
	    int  sizeOfArray;
	    cin>>sizeOfArray;
	    int arr[sizeOfArray];
	    
	    for(int i=0;i<sizeOfArray;i++)
	    cin>>arr[i];
	    
	    vector<int> hash;
	    Solution obj;
	    hash = obj.linearProbing( hashSize, arr, sizeOfArray);
	    
	    for(int i=0;i<hashSize;i++)
	    cout<<hash[i]<<" ";
	    
	    cout<<endl;
	    
	    
	}
	return 0;
}

  // } Driver Code Ends