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
        int n;
        cin>>n;
        vector<int> curr_arr(n);
        vector<int> lost_arr(n);
        vector<int> sequence;
        for (int i = 0; i < n; i++)
        {
            cin>>curr_arr[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>lost_arr[i];
        }
        int mod;
        cin>>mod;
        vector <int> found_elm(mod);
        for (int i = 0; i < mod; i++)
        {
            cin>>found_elm[i];
        }
        int counter=0;
        for (int i = 0; i < n; i++)
        {   
            if(counter==mod)
                break;
            if(lost_arr[i]==curr_arr[i])
                continue;
            else
            {
                for (int j = 0; j < mod; j++)
                {
                    if(found_elm[j]==lost_arr[i])
                        {
                        counter++;
                        sequence.push_back(j);
                        curr_arr[i]=lost_arr[i];
                        found_elm[j]=-1;
                        break;
                        }
                }
                
            }

        }
        bool equal=true;
        for (int i = 0; i < n; i++)
        {
            if(lost_arr[i]!=curr_arr[i])
                equal=false;
        }
        
        if(equal && (is_sorted(sequence.begin(),sequence.end()) || is_sorted(sequence.rbegin(),sequence.rend()) ))
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        
    }

}