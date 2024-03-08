#include <bits/stdc++.h>
using namespace std;

int main() {

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {
        int count=0,damage,health;
        cin>>damage>>health;
        for (int i = 0; i<5; i++)
        {
           health-=damage/2;
           count++;

           if(health<=0)
           {
            break;
           }
        }

        while (health>0)
        {
            health-=damage;
            count++;

            if(health<=0)
            {
             break;
            }
        }
        cout<<count<<"\n";
    
        
    }
    
    return 0;
}