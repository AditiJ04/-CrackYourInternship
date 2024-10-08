//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long>ans(n,-1);
        
        stack<long long>st;
        
       // ans[n-1]=-1;
        
    //    st.push(arr[n-1]);
        
        for(int j=n-1;j>=0;j--)
        {
           /* if(st.top()>arr[j])
            {
                ans[j]=st.top();
               // st.push(arr[j]);
            }
            */
                while(!st.empty() && st.top()<=arr[j])
                {
                    st.pop();
                }
                
                if(st.empty())
                {
                    ans[j]=-1;
                }
                else
                {
                    ans[j]=st.top();
                }
            
            st.push(arr[j]);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends