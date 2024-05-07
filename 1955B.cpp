#include <bits/stdc++.h>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'


int main() {

    optimize();
    // file();
    int t;
    cin>>t;

    while(t--)
    {
        int n,c,d;
        cin>>n>>c>>d;
        int matrix[n+1][n+1];
        map<int,int> elements;
        int lowest=INT_MAX;
        for (int i = 1; i <= (n*n); i++)
        {
        int x;
        cin>>x;
        if(elements[x])
        {
            elements[x]++;
        }
        else
        {
        elements[x]=1;
        }
        if(x<lowest)
            lowest=x;
        }

        int current=lowest;
        
        matrix[1][1]=current;
        map<int,int> calculate;
        calculate[matrix[1][1]]=1;

        for (int i = 1; i <=n ; i++)
        {
            for (int j = 2; j <=n; j++)
            {   
                matrix[i][j]=matrix[i][j-1]+c;
                if(calculate[matrix[i][j]])
                {
                    calculate[matrix[i][j]]++;
                }
                else
                {
                calculate[matrix[i][j]]=1;
                }
            }
            if(i<(n))
            {
                matrix[i+1][1]=matrix[i][1]+d;
                if(calculate[matrix[i+1][1]])
                {
                    calculate[matrix[i+1][1]]++;
                }
                else
                {
                calculate[matrix[i+1][1]]=1;
                }
            }


        
        }
        int count=0;
        for (int i = 1; i <=n ; i++)
        {
            for (int j = 1; j <=n; j++)
            {   
                if(calculate[matrix[i][j]]==elements[matrix[i][j]])
                {
                    count++;
                }
            }      
        }
        if(count==(n*n))
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }

    }
 
}