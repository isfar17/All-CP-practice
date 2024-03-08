#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    
    cin>>t;
    while (t--)
    {
        string s;
        cin>>s;
        
        int zero_index=0,first_index=0,second_index=0,third_index=0,forth_index=0,fifth_index=0,sixth_index=0,seventh_index=0;
            if(s[1]=='A'||s[1]=='E'||s[1]=='I'||s[1]=='O'||s[1]=='U')
            {
                first_index=1;
            }
            if(s[3]=='A'||s[3]=='E'||s[3]=='I'||s[3]=='O'||s[3]=='U')
            {
                third_index=1;
            }
            if(s[5]=='A'||s[5]=='E'||s[5]=='I'||s[5]=='O'||s[5]=='U')
            {
                fifth_index=1;
            }
            if(s[0]!='A'||s[0]!='E'||s[0]!='I'||s[0]!='O'||s[0]!='U')
            {
                zero_index=1;
            }
            if(s[2]!='A'||s[2]!='E'||s[2]!='I'||s[2]!='O'||s[2]!='U')
            {
                second_index=1;
            }
            if(s[4]!='A'||s[4]!='E'||s[4]!='I'||s[4]!='O'||s[4]!='U')
            {
                forth_index=1;
            }
            if(s[6]!='A'||s[6]!='E'||s[6]!='I'||s[6]!='O'||s[6]!='U')
            {
                sixth_index=1;
            }
            if(s[7]!='A'||s[7]!='E'||s[7]!='I'||s[7]!='O'||s[7]!='U')
            {
                seventh_index=1;
            }

            
            if ((first_index==third_index==fifth_index)&&(zero_index==second_index==forth_index==fifth_index==sixth_index==seventh_index))
            {
                cout<<"YES\n";

            }
            else
            {
                cout<<"NO\n";

            }


    }
     
    return 0;
}