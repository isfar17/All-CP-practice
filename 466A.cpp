#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'


int main() {

    optimize()
    int n,m,a,b;
    cin>>n>>m>>a>>b;

    int answer=0;
 if(m*a<=b)// means normal price of m days is less than special price.
    {
        answer=n*a;//we will only use normal price, since normal price is lower.     
    }	
    
    else
    {
        answer=(n/m)*b+min((n%m)*a,b);
        /*n%m means days left. so if we see that special price is lower
        we try to use most of the specal tickets, then to find the remaining days
        we have to do n%m. then multiply with a. now compare with the special price.
        we will add the minimum between two price.*/
        
    }    
        cout<<answer;

}