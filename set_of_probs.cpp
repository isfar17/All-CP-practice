#include <bits/stdc++.h>
using namespace std;

int main() {
    int a,b,c,value,i=2;
    cin>>a>>b>>c;
    while (c!=0)
    {
    
        if((i%a==0) || (i%b==0))
        {
            value=i;
            c--;
        }
        i++;
    }

    int lcm=0;
    for(i=1;i<=a*b;i++) // we want to find the lcm, so we need to run the loop till 1 to the multiply of the numbers
    {
        if (i%a==0 && i%b ==0)
        {
            lcm=i;
            break;
        }   
    }
    int step=0;
    if(value%a==0 && value%b ==0)
    {
        step=lcm;
    }
    else if(value%a==0)
    {
        step=a;
    }
    else
    {
        step=b;
    }
    
    cout<<value<<endl<<lcm<<endl<<step<<endl;
    for (int i = value; i >= 0; i-=step)
    {
        cout<<i<<endl; 
    }
    return 0;
}