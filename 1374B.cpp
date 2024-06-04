#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'
// so the idea here is to try to devide the numebr by six as much as possible
// if not then multiply by 2.but if the number becomes too large, we know that
//there is no turning back. it will increase. so we will break ans -1. 
// if the number is below or equal6 we check if it is divisible by 3 or 6. or else -1
/* the reason for this is suppose the number breaks out is 3, now we know 3*2=6 and 6/6=1
so after 2 steps we get the desired ans. if the number is 6, then 6/6=1, 1 step after.
or else its -1. sinc 2,4,5 cannot be 1 anyhow with the 2 conditions.*/

int main() {

    optimize()
    int t;
    cin>>t;

    while(t--)
    {
        long long int n;
        cin>>n;
        int cnt=0;
        while (n>6)
        {
            if(n%6==0)
                {n=n/6;
                cnt++;}
            else
                {n=n*2;
                cnt++;}
            if(n>10e11)
                break;
        }
        if(n<=6)
        {
            if(n%6==0)
                cout<<cnt+1<<endl;
            else if(n%3==0)
                cout<<cnt+2<<endl;
            else if(n==1)
                cout<<cnt<<endl;
            else
                cout<<-1<<endl;
        }
        else{
            cout<<-1<<endl;
        }
        
    }

}