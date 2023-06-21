// Program to print nth Fibonacci number

// time complexity : O( 2^n )

#include <iostream>
using namespace std;

int fibo(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}

int main()
{
    int ans=fibo(5);
    cout<<ans;
    
    return 0;
}
