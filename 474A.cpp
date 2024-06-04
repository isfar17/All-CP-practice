    #include <bits/stdc++.h>
    using namespace std;

    #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    #define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
    #define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
    #define endl '\n'


    int main() {

        optimize()
        char shift;
        string keyline_1="qwertyuiop";
        string keyline_2="asdfghjkl;";
        string keyline_3="zxcvbnm,./";
        string data;
        cin>>shift;
        cin>>data;
        for (int i = 0; i < data.size(); i++)
        {
            size_t k1=keyline_1.find(data[i]);
            size_t k2=keyline_2.find(data[i]);
            size_t k3=keyline_3.find(data[i]);
            if(k1!=string::npos)
                if(shift=='R')
                    data[i]=keyline_1[k1-1];
                else
                    data[i]=keyline_1[k1+1];
            else if(k2!=string::npos)
                if(shift=='R')
                    data[i]=keyline_2[k2-1];
                else
                    data[i]=keyline_2[k2+1];
            else if(k3!=string::npos)
                if(shift=='R')
                    data[i]=keyline_3[k3-1];
                else
                    data[i]=keyline_3[k3+1];
        }
        cout<<data<<endl;
        
    }