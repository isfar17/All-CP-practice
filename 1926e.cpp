#include <bits/stdc++.h>
using namespace std;

int main() {
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    int t;
    cin>>t; 

    while (t--)
    {
        int range,card;
        cin>>range>>card;
        int count=0,j=1;

        map<int, int> my_map; 

        while (count<=range)
        {
            for (int i = 1; i <= range; i+=2)
            {   
                if(i*j<=range)
                {
                    if(my_map.find(i*j) == my_map.end())
                        {
                        my_map.insert({count,i*j});
                        count++;
                        }
                }
                    
            } 
            j++;      
        }
        cout<<my_map[card-1]<<endl;
        
    }


    
}