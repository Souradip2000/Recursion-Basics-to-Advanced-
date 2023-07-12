/*
Q. What is a subsequence?
Ans : it is a contiguous / non-contiguous sequence which "follows the order".
      [ sub-array will always be contiguous ]
      
      following order means : [3,1,2] is the array    -     so [3,2,1] will not be a subsequence because 2 comes after 1 in the array
                                                            whereas [3,2] is a subsequence.
                                                          
      for [3,1,2] : { }
                    3
                    1
                    2
                    3 1
                    1 2
                    3 2
                    3 1 2                                   are all subsequences. { } is a subsequnce too because we've not selected any element and they're in order.
*/



// Program to print all the subsequences of an array

// Time complexity : O(2^n)                 -->             There are two choices for each of the n elements of the array. 2 2 2. Thus O(2^n).
// Stack space complexity : O(n)             -->            This is because at a time there won't be more than n recursion calls waiting in the stack
#include <bits/stdc++.h>
using namespace std;

void printSub(int ind, vector<int> &ds, int arr[], int n)
{
    // base case
    if(ind>=n)
    {
        if(ds.size()==0)
            cout<<"{ }";
            
        for(int i: ds)
            cout<<i<<" ";
        cout<<endl;
        
        return;
    }
    
    // take element
    ds.push_back(arr[ind]);
    printSub(ind+1, ds, arr, 3);
    
    // not-take element
    ds.pop_back();
    printSub(ind+1, ds, arr,3);
}

int main()
{
    int arr[3]={3,1,2};
    vector<int> ds;
    
    printSub(0, ds, arr, 3);
    return 0;
}
