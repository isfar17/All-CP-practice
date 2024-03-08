#include <bits/stdc++.h>
using namespace std;

int main() {

	int T;
	cin>>T;
	while (T--)
	{	
		int N;
		cin>>N;

		int arr1[N];
		int arr2[N];

		for (int i = 0; i < N; i++)
			{
				cin>>arr1[i];
			}
		for (int i = 0; i < N; i++)
			{
				cin>>arr2[i];
			}

		int count1=0,max1=0,count2=0,max2=0;
		for (int i = 0; i < N; i++)
		{
			if(arr1[i]==0)
			{	
				if (count1>max1)
				{
					max1=count1;
				}
				count1=0;	
				
			}
			else
			{
				count1++;
			}
		}
		for (int i = 0; i < N; i++)
		{ 

			if(arr2[i]==0)
			{	
				if (count2>max2)
				{
					max2=count2;
				}
				count2=0;	
				
			}
			else
			{
				count2++;
			}
		}

		if(max1>max2)

		{
			cout<<"Om\n";
		}
		else if(max2>max1)
		{
			cout<<"Addy\n";
		}
		else{
			cout<<"Draw\n";
		}
		
	}
	
	return 0;
}