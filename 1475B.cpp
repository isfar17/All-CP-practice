#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'


int main() {

    optimize()
    file()
    int t;
    cin>>t;

    while(t--)
    {
	int n,ans = 0;
	cin >> n;
        while(n % 2020 != 0)
        {
            if(n % 2021 == 0)
            {
                cout << "YES" << endl;
                break;
            }
            n-=2021;
            if(n < 2020)
            {
                cout << "NO" << endl;
                break;
            }
            else if(n % 2020 == 0)
                cout << "YES" << endl;
        }   
    }

}