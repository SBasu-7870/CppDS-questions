#include <stdio.h>
#include<iostream>
#define int1 long long
using namespace std;
int1 rev(int1 n)
{
    int1 sum=0,temp;
    while(n>0)
    {
        temp=n%10;
        sum=sum*10+temp;
        n/=10;
    }
    return sum;
}
int1 next_pall(int1 n)
{
    for(int i=n+1;;i++)
        {
            if(i==rev(i))
                {
                    return i;
                    break;
                }
        }
}
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int1 t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<next_pall(n)<<'\n';
    }
    return 0;
}
