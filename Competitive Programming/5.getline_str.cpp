#include <bits/stdc++.h>
using namespace std;

int main() {
    //cin cannot take a whole line with whitespaces. so we can use getline() to take string
    string str1;
    getline(cin,str1);//getline takes an input function with a varibale that will contain the value

    cout<<str1<<endl;
    cout<<str1.substr(0,5)<<endl; //prints the partial string of the whole part
    cout<<str1.size()<<endl;
    int x=3;
    while( x > 0)
    {
    string str2;
    getline(cin,str2);//getline takes an input function with a varibale that will contain the value
    cout<<str2<<endl;
    
    x--;
    }
    //problem with getline, while using getline in loop, it might take input wrong,to solve it, we use cin.ignore() function.
    
    return 0;
}