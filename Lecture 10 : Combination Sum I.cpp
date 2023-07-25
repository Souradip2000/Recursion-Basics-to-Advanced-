// 39. Combination Sum I

// Time complexity : O(2^t * k)      [ Exponential ]
// t-->the size of the array (n), k-->average length of the sub array; multiplied k becuase sub sequence is copied into another ds in linear time complexity


// Space complexity : O(kx)  k--> avg length of the sub-array, x-->number of sub-arrays

class Solution {
public:
    vector<vector<int>> ans;
    void f(int ind, int target, vector<int>& arr, vector<int>& sub)
    {
        if(target==0)
        {
            ans.push_back(sub);
            return;
        }
        else if ( target<0  || ind>=arr.size())
        {
            return;
        }

        if(arr[ind]<=target)
        {
            sub.push_back(arr[ind]);
            f(ind, target-arr[ind], arr, sub);
            sub.pop_back();
        }
        f(ind+1, target, arr, sub);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> sub;
        f(0, target, candidates, sub);

        return ans;
    }
};
