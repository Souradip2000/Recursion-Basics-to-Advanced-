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
