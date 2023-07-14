// Print all the subsequences whose sum equals to target sum

#include <bits/stdc++.h>
using namespace std;

void printSub(int ind, vector<int> &ds, int arr[], int n)
{
    // base case
    if(ind>=n)
    {
        int sum=0;
        for(int i: ds)
            sum+=i;
        if(sum==2)
        {    
            for(int i: ds)
                cout<<i<<" ";
            cout<<endl;
        }
        //cout<<endl;
        
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
    int arr[3]={1,2,1};
    vector<int> ds;
    
    printSub(0, ds, arr, 3);
    return 0;
}








// Program to print any one subsequence whose sum equals to the target sum

// done using a secondary variable

#include <bits/stdc++.h>
using namespace std;

int coun=1;
void f(int index, int arr[], int n, vector<int>& sub, int target)
{
    // base case
    if(index>=n)
    {
        int sum=0;
        for(int i: sub)
            sum+=i;
        
        if(coun==1 && sum==target)
        {
            coun++;
            for(int i: sub)
                cout<<i<<" ";
            
            return;
        }
        
        else 
            return;
    }
    
    // take element
    sub.push_back(arr[index]);
    f(index+1, arr, 3, sub, 2);
    
    // not-take element
    sub.pop_back();
    f(index+1, arr, 3, sub, 2);
}

int main()
{
    int arr[3]={1,2,1};
    vector<int> sub;
    f(0, arr, 3, sub, 2);
    return 0;
}






// Program to print any one subsequence whose sum equals to the target sum
// done using suggested method : Stop the recursion after one subsequence, satisfying all conditions, is found and printed

#include <iostream>
#include <vector>
using namespace std;

bool f(int index, int arr[], int n, vector<int>& sub, int target)
{
    // base case
    if(index>=n)
    {
        int sum=0;
        for(int i: sub)
            sum+=i;
        
        if(sum==target)
        {
            for(int i: sub)
                cout<<i<<" ";
            
            return true;
        }
        
        else 
            return false;
    }
    
    // take element
    sub.push_back(arr[index]);
    if(f(index+1, arr, 3, sub, 2))
        return true;
    
    // not-take element
    sub.pop_back();
    if(f(index+1, arr, 3, sub, 2))
        return true;
        
    return false;
}

int main()
{
    int arr[3]={1,2,1};
    vector<int> sub;
    f(0, arr, 3, sub, 2);
    return 0;
}



// the above code with sum variable as a parameter
// helps avoid running a for loop inside the function

// Program to print any one subsequence whose sum equals to the target sum

#include <iostream>
#include <vector>
using namespace std;

bool f(int index, int arr[], int n, vector<int>& sub, int target, int sum)
{
    // base case
    if(index>=n)
    {
        if(sum==target)
        {
            for(int i: sub)
                cout<<i<<" ";
            
            return true;
        }
        
        else 
            return false;
    }
    
    // take element
    sub.push_back(arr[index]);
    sum+=arr[index];
    if(f(index+1, arr, 3, sub, 2, sum))
        return true;
    
    // not-take element
    sub.pop_back();
    sum-=arr[index];
    if(f(index+1, arr, 3, sub, 2, sum))
        return true;
        
    return false;
}

int main()
{
    int arr[3]={1,2,1};
    vector<int> sub;
    f(0, arr, 3, sub, 2, 0);
    return 0;
}

