// Program to reverse an array using only one pointer by using recursion

#include<iostream>
using namespace std;

void revArr(int i, int arr[], int n)
{
    if(i>=n/2)
        return;
    swap(arr[i],arr[n-i-1]);
    revArr(i+1, arr, n);
}

int main()
{
    int arr[5]={1,2,3,4,5};
    revArr(0, arr, 5);
    for(int i: arr)
        cout<<i<<" ";
    
    return 0;
}


// Program to check for a palindrome using functional recursion

#include <iostream>
using namespace std;

bool chk_P(int i, string str, int n)
{
    if(i>=n/2)
        return true;
    
    if(str[i]!=str[n-i-1])
        return false;
    
    return chk_P(i+1, str, n);
}

int main()
{
    string str= "MADAM";
    cout<<str.length()<<endl;
    bool ans=chk_P(0,str,str.length());
    cout<<ans;
    
    return 0;
}
