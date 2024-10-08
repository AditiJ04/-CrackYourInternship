//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    //code
   long long mindiff=INT_MAX;
    
    sort(a.begin(),a.end());
    
    
    // 1 3 4 7 9 9 12 56
    //2 3 4 7 9 12 56
    
    int j=0;
    int i=0;
    
    while(j<n)
    {
        if(j-i+1<m)
        {
            j++;
        }
        
        else if(j-i+1==m)
        {
            mindiff=min(mindiff,a[j]-a[i]);
            i++;
            j++;
        }
    
    }
    return mindiff;
    }   
};

//{ Driver Code Starts.
int main() {
	long long t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		vector<long long> a;
		long long x;
		for(long long i=0;i<n;i++)
		{
			cin>>x;
			a.push_back(x);
		}
		
		long long m;
		cin>>m;
		Solution ob;
		cout<<ob.findMinDiff(a,n,m)<<endl;
	}
	return 0;
}
// } Driver Code Ends