// Program to print Name 5 times using recursion

//#include <bits/stdc++.h>
#include <iostream>
#include <string>
using namespace std;

int cnt=0;

int printName(string s)
{
    if(cnt==5)
        return 0;
    cout<<s<<endl;
    cnt++;
    printName(s);
}

int main()
{
    string s="Raj";
    int a=printName(s);
    return 0;
}


// second approach

// time complexity : O(n)
// stack/space complexity : O(n)

#include <bits/stdc++.h>
using namespace std;

void printN(int i,int n)
{
    if(i>n)
        return;
    cout<<"Raj"<<endl;
    printN(i+1,n);
}

int main()
{
    printN(1,3);
    return 0;
}


// Print numbers from N to 1 using recursion

// Print numbers from N to 1

#include <bits/stdc++.h>
using namespace std;

void printN(int i,int n)
{
    if(i<n)
        return;
    cout<<i<<endl;
    printN(i-1,n);
}

int main()
{
    printN(3,1);
    return 0;
}
