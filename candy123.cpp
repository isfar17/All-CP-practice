#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while(t--)
    {
        int target_limak,target_bob, current_limak=0,current_bob=0;

        cin>>target_limak>>target_bob;

        for (int i = 1; i <= 1000; i++)
            {
            if (i%2==1)
                {
                    if(current_limak<=target_limak)
                    {
                        current_limak+=i;
                    }
                }
            else if (i%2==0)
                {
                    if(current_bob<=target_bob)
                    {
                        current_bob+=i;
                    }
                }

            if (current_limak>target_limak || current_bob>target_bob)
                {
                    break;
                }

            }
        if(current_limak>target_limak)
        {
            cout<<"Bob\n";

        }
        else if(current_bob>target_bob)
        {
            cout<<"Limak\n";
        }
    }
    return 0;
}