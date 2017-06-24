#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	long long int a,b,n;


	for (int i = 0; i < t; ++i)
	{
		long long int a1,b1,n1;
		cin>>a>>b>>n;
	
		long long int max,min;

		if(n%2 == 0)
		{
			
			(a >= b)? (max = a,min = b) : (max = b,min = a);

			printf("%lld\n",max/min);


		}
		else
		{
			
			(a*2 >= b)? (max = a*2,min = b) : (max = b,min = a*2);
			
			printf("%lld\n",max/min);

		}
	}
	return 0;
}