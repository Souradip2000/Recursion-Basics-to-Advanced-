//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    void sumSub(vector<int>& sub, vector<int>& ans)
    {
        int sum=0;
        for(int i: sub)
            sum+=i;
        ans.push_back(sum);
    }
    
    void subset(int idx, vector<int>& arr, int n, vector<int>& sub, vector<int>& ans)
    {
        if(idx>=n)
            return;
            
        for(int i=idx; i<n; i++)
        {
            sub.push_back(arr[i]);
            sumSub(sub, ans);
            subset(i+1, arr, n, sub, ans);
            sub.pop_back();
        }
    }
    
    vector<int> subsetSums(vector<int> arr, int n)
    {
        // Write Your Code here
        sort(arr.begin(), arr.end());
        vector<int> sub;
        vector<int> ans;
        ans.push_back(0);
        subset(0, arr, n, sub, ans);
        sort(ans.begin(), ans.end());
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        vector<int> arr(N);
        for(int i = 0 ; i < N ; i++){
            cin >> arr[i];
        }
        Solution ob;
        vector<int> ans = ob.subsetSums(arr,N);
        sort(ans.begin(),ans.end());
        for(auto sum : ans){
            cout<< sum<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends
