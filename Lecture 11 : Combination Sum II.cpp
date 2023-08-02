/*
  If it is a set of n elements, total number of subsets will be 2^n. 
  Thus the time complexity will be 2^n.
  But we will also be copying sub sequences. 
  That will take k time.
  Thus,
        Time complexity : O( 2^n*k )      where k--> avg. size of each subsequence
        Space complexity : O( k*x )       where x--> number of combinations possible 

  Basically what's being done is:
    we can start from any index in the range of [0, n-1] to make the subsequence
    since the sub seq will be in sorted order, we don't need to check the elements before the index we are starting from

    we start with 0 and run a for loop for [0, n-1]
    we start from 1 and then again run a for loop from [1, n-1]
    and so on
*/

class Solution {
public:
    void findCombinations(int idx, int target, vector<int>& arr, vector<int>& sub, vector<vector<int>>& ans)
    {
        if(target==0)
        {
            ans.push_back(sub);
            return;
        }
        for(int i=idx; i<arr.size(); i++)
        {
            if(i>idx && arr[i]==arr[i-1])
                continue;
            if(arr[i]>target)
                break;

            sub.push_back(arr[i]);
            findCombinations(i+1, target-arr[i], arr, sub, ans);
            sub.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
       sort(candidates.begin(), candidates.end());

       vector<int> sub;
       vector<vector<int>> ans;

       findCombinations(0, target, candidates, sub, ans);

       return ans; 
    }
};
