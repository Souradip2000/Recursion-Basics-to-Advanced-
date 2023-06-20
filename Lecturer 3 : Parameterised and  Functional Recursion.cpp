// Program to print the sum of the first N numbers using parameterised recursion

// time complexity: O(n)
// stack/ space complexity : O(n)

#include <iostream>
using namespace std;

void printSum(int n, int sum)
{
    if(n<1)          // base case
    {
        cout<<"Sum till N is: "<<sum;
        return;
    }
    printSum(n-1,sum+n);
}

int main()
{
    printSum(3,0);
    return 0;
}



// Program to print the sum of the first N numbers using functional recursion

#include <iostream>
using namespace std;

int printSum(int n)
{
    if(n==0)          // base case
    {
        return 0;
    }
    return n+printSum(n-1);
}

int main()
{
    cout<<printSum(3);
    return 0;
}
