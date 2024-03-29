/*
logic:
1.first we take two sets and put only those values which are less or equal to target
2.we also take a map and create counter from 1 to the target and set all of them to 0
3. when we insert a value we increase counter for the corresponding value in map too
4. to check, we first see if we have got all the value from 1 to target combined in 
    both set
5. if not then print ans. or else we will go through two sets and take out the duplicate
6. the procedure is: we run the proccess on one set till its size is greater than k/2(condition)
    and for one element in set1, if we find duplicate in set2,we remove it but keep maintain the
    size bigger than k/2. once we reach the size, we do the opposite for set1 to take out duplicate
7. after checking , we will come up with the sets where either size is k/2 or its less. if its les
    then print the no ans. or else print yes ans.
*/

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin>>t;

    while(t--)
    {
        int n,m,k;
        cin>>n>>m>>k;

        set <int> set1;
        set <int> set2;
        map <int,int> count_till_k;
        for (int i = 1; i <=k; i++)
        {
            count_till_k[i]=0;
        }

        for (int i = 0; i < n; i++)
        {   
            int val;
            cin>>val;
            if (val<=k)
            {
                set1.insert(val);
                count_till_k[val]++;
            }
        }
        for (int i = 0; i < m; i++)
        {   
            int val;
            cin>>val;
            if (val<=k)
            {
                set2.insert(val);
                count_till_k[val]++;
            }
        }
        string res="YES";
        for (auto it:count_till_k)
        {
            if(it.second==0)
            {
                res="NO";
            }
        }

        if(res=="YES")
        {
            for (auto it=set1.begin();it!=set1.end();it++)
            {   
                if(set2.size()>k/2)
                {
                auto iter=set2.find(*it);
                if(iter!=set2.end())
                    set2.erase(*it);
                }
                else{
                    break;
                }
                
            }
            
            for (auto it=set2.begin();it!=set2.end();it++)
            {
                if(set1.size()>k/2)
                {
                auto iter=set1.find(*it);
                if(iter!=set1.end())
                    set1.erase(*it);
                }
                else
                {
                    break;
                }
            }
        
            if(set1.size()==k/2 && set2.size()==k/2)
                {
                    res="YES";
                } 
            else{
                res="NO";
            } 
        }
       
        cout<<res<<endl;                
    }
}