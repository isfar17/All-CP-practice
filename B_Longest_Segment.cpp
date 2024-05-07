#include <bits/stdc++.h>
using namespace std;

#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'

int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    optimize
    int t;
    cin>>t;
    vector <pair<int,int>> coordinates(t);

    for (int i = 0; i < t; i++)
    {
        cin>>coordinates[i].first>>coordinates[i].second;
    }
    double maxim=0;
    for (int i = 0; i < t; i++)
    {
        for (int j = 0; j < t; j++)
        {   
            // we are taking x1,y1, x2,y2. for every x1,y1  we increase x2,y2 and find 
            // out  square root of(x1-x2)^2+(y1-y2)^2. thus we will get all the distance fr
            // every x1,y1 and keep the max in the value. then increase i and go to next x1,y1.
            // keep doing it  this is  a bruteforce algorithm 
            int x1=coordinates[i].first;
            int y1=coordinates[i].second;

            int x2=coordinates[j].first;
            int y2=coordinates[j].second;

            double result=sqrt(pow(x1-x2,2)+pow(y1-y2,2));

            maxim=max(result,maxim);
        }
        
    }
    std::cout << std::fixed << std::setprecision(10); // this line will print 10 decimal points after the value
    cout<<maxim;
    
}