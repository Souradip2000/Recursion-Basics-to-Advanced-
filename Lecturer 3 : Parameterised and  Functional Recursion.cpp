// Program to print the sum of the first N numbers using parameterised recursion

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
