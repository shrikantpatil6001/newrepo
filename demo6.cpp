// function overloading
//1. function name same but number of arguments should be diff
#include<iostream>
using namespace std;
int sum(int n1, int n2) // sum@@int,int
{
    return n1+n2;
}
int sum(int n1, int n2, int n3)// sum@@int,int,int
{
    return n1+n2+n3;
}
int main(void)
{
    int res=0;
    res= sum(10,20);
    cout<<"res="<<res<<endl;
    res= sum(10,20,30);
    cout<<"res="<<res<<endl;
    return 0;
}

