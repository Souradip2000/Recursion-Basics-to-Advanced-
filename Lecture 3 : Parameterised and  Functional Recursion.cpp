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


// Program to calculate the factorial of N using functional recursion

#include <iostream>
using namespace std;

int printFact(int n)
{
    if(n==0)          // base case
    {
        return 1;
    }
    return n*printFact(n-1);
}

int main()
{
    cout<<printFact(4);
    return 0;
}



// Program to calculate the factorial of N using parameterised recursion

#include <iostream>
using namespace std;

void printFact(int n, int fact)
{
    if(n==0)
    {
        cout<<fact;
        return;
    }
    printFact(n-1,fact*n);
}

int main()
{
    printFact(5,1);
    return 0;
}
