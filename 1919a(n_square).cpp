#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {   
        
        long long int alice,bob;
        cin>>alice>>bob;
        string winner="NONE";

        string turn="alice";
        while (alice>=1 && bob>=1)
        {
            if (turn=="alice")
            {
                if (bob>alice && bob!=1)
                {   
                    int temp=alice;
                    alice=bob-1;
                    bob=temp;

                }
                else{
                    alice-=1;
                }


                turn="bob";
                
            }
            
            else if (turn=="bob")
            {
                if (alice>bob && alice!=1)
                {   
                    int temp=bob;
                    bob=alice-1;
                    alice=temp;
                }
                else{
                    bob-=1;
                }
                turn="alice";
            }
            
        }

        if (alice==0)
        {
            cout<<"Bob\n";
        }
        else if(bob==0)
        {
            cout<<"Alice\n";
        }
               
    }

    return 0;
}