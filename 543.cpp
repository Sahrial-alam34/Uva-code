#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int p=n/2;
    int d=n-p;
    if(p%2==0 || d%2==0 || ((p%2==0 && d%2==0)))
    {
        int c=p+1;
        int b=d-1;
        printf("%d %d",c,d);
    }
    else
    {
        printf("%d %d",p,d);
    }
}
