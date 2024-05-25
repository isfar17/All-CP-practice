#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'

bool sortbysec(const pair<char,int> &a,
              const pair<char,int> &b)
{
    return (a.second < b.second);
}

int main() {

    optimize()
    // file()
    int t;
    cin>>t;


    
    while(t--)
    {
        vector <pair<char,int>> arr(26);
        for (int i = 0; i < 26; i++)
        {
            arr[i]=make_pair('a'+i,0);
        }
        int a,k;
        cin>>a>>k;
        string c;
        cin>>c;
        for (int i = 0; i < c.size(); i++)
        {
            arr[c[i]-97].second++;
        }
        int odd_count=0;

        for (int i = 0; i < arr.size(); i++)
        {
            if(arr[i].second%2!=0)
                odd_count++;
        }
// analyize:
/*
if removing characters=6 and odd length characters=5 we can easily
get a  palindrome by removing them.

if strings length =5 and removable characters are >=5
we dont get a palindrome.

for example if string is abbac and odd chars count is 1 and
removable characters are 1,we remove c,then we can make
palindrome,but if chars count is 1 and removable chars are 0 we do not remove c,
then we can put it in the center and make it a palindrome. thats why we need to
check the second case

and if removable charcter is 4 and odd characters are 6, then
there is no way we get a palindrome. for that case we print no

also if removable charcter is 8 and odd characters are 6, then
there is no way we get a palindrome,because then there will
be multiple chars removed and new odd length chars will be generated.
*/
        if(k>=a)
            cout<<"NO"<<endl;
        else if(k>=odd_count-1)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl; 

    }

}