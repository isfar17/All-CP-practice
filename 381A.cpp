// complexity o(n2) because while(n) and inside erase() has o(n)
// to reduce the complexity use two pointer method. 
// i =0 j=n and reduce j and incfrease i till both are same;
 

#include <bits/stdc++.h>
using namespace std;

int main() {

    int t,flag=0,sereja=0,dima=0;
    cin>>t;

    vector <int> vec(t);
    for (int i = 0; i < t; i++)
    {
        cin>>vec[i];
    }
    while (!vec.empty())
    {
        if (flag==0)
        {
            if(vec[0]>vec.back()) // checks first elemnt and last element
            {
                sereja+=vec[0];
                // erase deletes the pointer. so we have to use pointer insead of value!!
                vec.erase(vec.begin()); // the value is calculated, so delete it;
            }
            else
            {
                sereja+=vec.back();
                vec.pop_back(); // the value is calculated, so delete it;

            }
            flag=1;
        }
        else if (flag==1)
        {
            if(vec[0]>vec.back()) // checks first elemnt and last element
            {
                dima+=vec[0];
                // erase deletes the pointer. so we have to use pointer insead of value!!
                vec.erase(vec.begin()); // the value is calculated, so delete it;
            }
            else
            {
                dima+=vec.back();
                vec.pop_back(); // the value is calculated, so delete it;

            }
            flag=0;
        }
        
    }
    cout<<sereja<<" "<<dima;
    
    
 
}