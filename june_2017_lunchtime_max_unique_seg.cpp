#include <bits/stdc++.h>
#define  llu unsigned long long int

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin>>t;

	while(t--)
	{
		int n;
		llu ele;
		scanf("%d",&n);

		//int c[n],w[n], cum[n];
		std::vector<llu> arr;
		std::vector<llu> val;
		std::vector<llu> cum;

		for (int i = 0; i < n ; ++i)
		{
			scanf("%llu",&ele);
			arr.push_back(ele);

		}

		for (int i = 0; i < n ; ++i)
		{

			scanf("%llu",&ele);

			if(i == 0)
			{
				cum.push_back(ele);
			}
			else
			{
				cum.push_back(ele+cum[i-1]);
			}

			val.push_back(ele);

		}
		
		if(n == 1)
			printf("%llu\n",val[0]);
		else
		{	
			int pos[1000001];

			std::fill(pos, pos+1000001, -1);
			llu max = 0,result = 0;

			for (int i = 0; i < n; ++i)
			{
				if(i == 0)
					{
						max = val[i];
						pos[arr[i]] = i;
					}
				else
				{
					if(pos[arr[i]] == -1)
						{
							max+=val[i];
							pos[arr[i]] = i;
							if(max > result)
								result = max;
							//cout<<"max = "<<max<<endl;
						}
					else
					{
						//result+=0;
						//cout<<"cum[i] - cum[pos[arr[i]]]"
						//((cum[i] - cum[pos[arr[i]]+1]) >= cum[i-1])?(max = (cum[i] - cum[pos[arr[i]]+1]);if(max > result)result = max;pos[arr[i]] = i):(if(max > result)result = max;max = val[i];pos[arr[i]] = i);
						if((cum[i] - cum[pos[arr[i]]]) >= max)
						{
							max = (cum[i] - cum[pos[arr[i]]]);
							//cout<<"max = "<<max<<endl;
							if(max > result)
								result = max;
							pos[arr[i]] = i;
							//cout<<"pos = "<<pos[arr[i]]<<endl;
							//cout<<"result = "<<result<<endl;
						}
						else
						{	
							//max+=arr[i];
							if(max > result)
								result = max;
							max = val[i];
							pos[arr[i]] = i;
							//cout<<"max = "<<max<<endl;
							//cout<<"pos = "<<pos[arr[i]]<<endl;
							//cout<<"result = "<<result<<endl;


						}
					}

				}

			}
			if(max > result)
				result = max;
			printf("%llu\n",result);

		}



	}
	return 0;
}