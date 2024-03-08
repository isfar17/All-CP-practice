#include <bits/stdc++.h>
using namespace std;

int main() 
{
    
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);

    int t;
    cin>>t;
    while(t--)
    {
        int people,money_left;
        cin>>people>>money_left;

        int queue[people];

        for (int i = 0; i<people; i++)
            {
                cin>>queue[i];
            }
        for (int i = 0; i <people; i++)
        {
            if (queue[i]<=money_left)
                {
                    cout<<"1";
                    money_left-=queue[i];
                }
            else if(queue[i]>money_left)
                {
                    cout<<"0";
                }
        }
        cout<<"\n";
        
    }


    return 0;
}