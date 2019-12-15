#include<bits/stdc++.h>
using namespace std;

int main()
{
  int n;
 int   a,sum=0;
  scanf("%d",&n);
  for(int i=0;i<n;i++)
  {
      string x;
      cin>>x;
      if(x=="donate")
      {
          i;
          cin>>a;
            sum+=a;


      }
      else if(x=="report")
      {
        printf("%d",sum);

      }

  }



}
