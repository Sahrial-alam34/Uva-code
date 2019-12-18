#include<bits/stdc++.h>
using namespace std;
{
	vector<string>word;
	word.push_back("HELLO");
	word.push_back("HOLA");
	word.push_back("HALLO");
	word.push_back("BONJOUR");
	word.push_back("CIAO");
	word.push_back("ZDRAVSTVUJTE");

	string str;
	int i=0;
	while(cin>>str)
	{
		if(str=="#")
		{
			break;
		}
		else if(str==word[0])
		{
			i++;
			cout<<"Case "<<i<<": <<"ENGLISH"<<endl;
		}
		else if(str==word[1])
		{
			i++;
			cout<<"Case "<<i<<": <<"SPANISH"<<endl;
		}
		else if(str==word[2])
		{
			i++;
			cout<<"Case "<<i<<": <<"GERMAN"<<endl;
		}
		else if(str==word[3])
		{
			i++;
			cout<<"Case "<<i<<": <<"FRENCH"<<endl;
		}
		else if(str==word[4])
		{
			i++;
			cout<<"Case "<<i<<": <<"RUSSIAN"<<endl;
		}
		else
		{
			i++;
			cout<<"Case "<<i<<": <<"UNKNOWN"<<endl;
		}
	}
	return 0;


}