// Solution using Merge Sort
// Time Complexity : O(nlogn)

class Solution {
public:
    void merge(vector<int>& nums, int low, int mid, int high)
    {
        int left=low;
        int right=mid+1;

      

        while(left<=mid && right<=high)
        {
            if(nums[left]<=nums[right])
            {
                temp.push_back(nums[left]);
                left++;
            }
            else
            {
                temp.push_back(nums[right]);
                right++;
            }
        }

        while(left<=mid)
        {
            temp.push_back(nums[left]);
            left++;
        }

        while(right<=high)
        {
            temp.push_back(nums[right]);
            right++;
        }

        // copy the temp array into the nums array

        for(int i=low; i<=high; i++)
        {
            nums[i]=temp[i-low];          // dry run other steps of merging before the final last step
        }
    }
    void mergeSort(vector<int>& nums, int low, int high)
    {
        if(low==high)   
            return;
        
        int mid=(low+high)/2;

        mergeSort(nums, low, mid);
        mergeSort(nums, mid+1, high);
        merge(nums, low, mid, high);
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};




// Time complexity : O(nlogn)
/*
    The array at each step is divided into two parts until the size of each part is one.
    This operation takes O(logn) time complexity.
    After that, in the merge function, we have to copy the elements from temp array to original array.
    This step takes O(n) time complexity.

    Thus the time complexity of merge sort is : O(nlogn)
*/



// This code requires O(n) space complexity
/*
    This is because we have to store the elements in a temporary array. The array in the last merge step will be equal to the size of the original array
    itself.
    Thus the space complexity.
*/



// Why it cannot be done in constant space complexity?
/*
    Dry run : arr1:[2,7,8,4] and arr2: [1,9,5,6]
    We'll try and do it by using the left and right pointers pointing to the begining of the two arrays followed by swapping.
    arr1 and arr2 is the same array arr and is imagined to be divided into two parts.

    elements won't be sorted properly in this way.
*/















