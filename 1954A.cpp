#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'


int main() {

    optimize()
    // file()
    int t;
    cin>>t;

    while(t--)
    {   
        int n,m,k;
        cin>>n>>m>>k;

        /*So the solution here is that we can arbitarily place the colors. now
        if there are 3 colors and 6 slots we can place like 112233 or 123123, which means
        in any way we can see that all the colors here are used maximum amount of time.but
        if there are odd slots, we could get 1122331 or 1231231 , means one of the colors
        will be used one more time. then that color would be the maximum time used color.
        and other slots will be free to recolor them. now if we substitute the maximum
        time used slots from the slots, we get the rest of the slots. if k or the slots
        available for bob is equal or greater than the remaining slots, we can say that
        bob can do thejob. or else, we can say that bob will not be able to. now to get
        the most used slots, we just devide n/m. for example if we have 10 apple and 5 
        people, how many of the apples each people would get? its 10/5=2. and if there
        are 11 apples? certainly one people would get extra apple, then he would be the
        maximum apple holder. so the formula here is:
        for even n v=n/m
        for odd  n v=n/m+1 (int form
        )*/
        int x=n/m;
        if(n%m)
            x+=1;
        n-=x;
        if(n>k)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;

    }
}