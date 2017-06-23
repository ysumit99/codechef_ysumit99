#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	/*string s;
	cin>>s;
	
	int s_val = 0;//string value
	int pos;
	pos = s.find_last_of('1');


	for(int i = 0 ; i < pos+1 ;i++)
	{
		if(s[i]=='1')
		{
			s_val += (pow(2,pos-i));
		}
	}
	cout<<"s_val = "<<s_val<<endl;

		
		string temp;
		int count = 0;
		int val;
		int flag = 0;
	if(s_val == 0)
		cout<<"0"<<endl;
	//int flag = 0;
	else
	{


		//while(s_val > 0)
		//{
			
				pos = s.find_last_of('1');
			
			cout<<"pos = "<<pos<<endl;
			temp = s.substr(0,pos+1);
			s = temp;
			cout<<s<<endl;
			
			val = (pow(2,pos+1)-1);//nearest power of 2
			cout<<"val = "<<val<<endl;
			s_val = val - s_val;
			cout<<"s_val = "<<s_val<<endl;
			count++;
		//}
		printf("count = %d\n",count);
    
    



	}*/
	string s;
		cin>>s;
		int ans=0;
		for(int i=0;i<(s.size());i++)
		{
			if(i==0 && s[i]=='1')
			ans++;
			else if(s[i]=='1' && s[i-1]=='0')
			ans+=2;
		}
		cout<<ans;

	return 0;
}
