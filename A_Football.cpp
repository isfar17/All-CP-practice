#include <bits/stdc++.h>
using namespace std;

int main() {

    int t,team1_scr=0,team2_scr=0;
    cin>>t;

    string team1,team2;
    cin>>team1;
    team1_scr++;
    for (int i = 1; i < t; i++)
    {
        string x;
        cin>>x;
        if(x!=team1)
        {
            team2=x;
            team2_scr++;
        }
        else
        {
            team1_scr++;
        }
    }
    if(team1_scr>team2_scr)
    {
        cout<<team1;
    }
    else
    {
        cout<<team2;
    }
    
}