#include <bits/stdc++.h>
using namespace std;

int main() {
    string st, rev_st;
    cin>>st;
    for (int i = st.size()-1; i >=0; i--)//since we are counting index so length is 1 value bigger than total index
    {
        rev_st.push_back(st[i]);//we should not use character add with string. rather use push back as its complexity is better.
    }
    cout<<st<<endl<<rev_st<<endl;
    return 0;
}   