#include<bits/stdc++.h>
using namespace std;
int main()
{
	                                                                     
	vector<string> vec;
	string str;                                   
	while(getline(cin, str))                
	{             
		if(str=="DONE")
		{
			break;
		}
		else                                                                                                                                                          
		{
			int len=str.size();
			for(int i=0;i<len;i++)
			{
				if(str[i]>='a' && str[i]<='z')
				{
					vec.push_back(str[i]);
				}
				else if(str[i]>='A' && str[i]<='Z')
				{
					vec.push_back(str[i]+32);
				}
			}
			int vec_len=vec.size()-1;
			int flag=0;
			for(int i=0;i<vec_len;i++)
			{
				if(vec[i]!=vec[len-i])
				{
					flag=1;
					break;

				}
				else if(vec[i]==vec[len-i])
				{
					
				}

			}
			if(flag==0)
			{
				cout<<"You won't be eaten!"<<endl;
			}
			else if(flag==1)
			{
				cout<<"Uh oh.."<<endl;
			}
			vec.clear();





		}

	}

	




	return 0;

}