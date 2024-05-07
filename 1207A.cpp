#include <bits/stdc++.h>
using namespace std;

#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main() 
{
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    optimize
    int t;
    cin>>t;

    while(t--)
    {
        int b,p,f,h,c;
        cin>>b>>p>>f;
        cin>>h>>c;

        int maxPrice,minPrice,maxPriceHas,minPriceHas;

        if(h>c)
        {
            maxPrice=h;
            maxPriceHas=p;

            minPrice=c;
            minPriceHas=f;
        }
        else
        {
            maxPrice=c;
            maxPriceHas=f;

            minPrice=h;
            minPriceHas=p;
        }
        int burger=b/2;
        int total=0;

        if(maxPriceHas>burger)
        {
            total+=burger*maxPrice;
            burger=0;
        }
        else
        {
            burger-=maxPriceHas;            
            total+=maxPriceHas*maxPrice;
            
        }
        if(minPriceHas>burger)
        {
            total+=burger*minPrice;
            burger=0;
        }
        else
        {
            burger-=minPriceHas;            
            total+=minPriceHas*minPrice;

        }
        cout<<total<<endl;

    }
 
}