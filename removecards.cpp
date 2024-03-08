#include <bits/stdc++.h>

using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    while (t--)
    {   
        int n;
        cin>>n;

        int counter[11]={0};
        int numbers[n];
        int max=0,count=0, duplicate_max_count=0,main_max_index=0;

        for (int i = 0; i <n; i++)
        {
            cin>>numbers[i];
            counter[numbers[i]]++;
        }
        
        for (int i = 0; i <= 10; i++)
        {
            if(counter[i]>max)
            {
                max=counter[i];
                main_max_index=i;
                continue;
            }
  
        }
        for (int i = 0; i <= 10; i++)
        {   
            if(i!=main_max_index)
            {
                if(counter[i]==max && counter[i]!=0)
                {
                    duplicate_max_count++;
                }
            }     
        }

        for (int i = 0; i <= 10; i++)
        {
            if (counter[i]<max && counter[i]!=0)
            {
                count+=counter[i];
            }
                   
        }
        count+=(duplicate_max_count*max);
        cout<<count<<endl;

    }

    return 0;
}

/*
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int N;
	    cin>>N;
	    int A[N];
	    map<int,int>m;
	    for (int i=0; i<N; i++)
	    {
	        cin>>A[i];
	        m[A[i]]++;    //counting the frequency for each distinct element
	    }
	    
	    int freq=0;
	    for(int i=0; i<N; i++)
	    {
	        if(m[A[i]] > freq)
	        freq = m[A[i]];
	    }
	    cout<< (N-freq)<<endl;
	}
	return 0;
}
*/