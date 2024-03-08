#include <bits/stdc++.h>
using namespace std;

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin>>t;
    while (t--)
    {   
        char matrix[3][3];
        
        int index;

        for (int i = 0; i < 3; i++)
        {             
            string s;
            cin>>s;
            for (int j = 0; j < 3; j++)
            {   
                matrix[i][j]=s[j];
            }

            int check_list[3]={0};
            for (int i = 0; i < 3; i++)
            {   
                if (s[i]=='?')
                {
                    continue;
                }
                else
                { 
                check_list[s[i]-65]++; 
                }
            }
            for (int i = 0; i < 3; i++)
            {
                if (check_list[i]==0)
                {
                    index=i;
                }
            }
            
        }
        cout<<char('A'+index)<<'\n';
        


 
    }
    return 0;
}