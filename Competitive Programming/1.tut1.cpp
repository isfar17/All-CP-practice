#include<bits/stdc++.h>

using namespace std;

int main(){
    // data types: int,char bool , float , double
    int var;
    var=10;
    cout<<var;
    float x=1.234225334442424;
    double y=12.324142332444;
    cout<<x<<y;
    cout<<"Hello WORLD" ;
    // difference betweeen ++a and a++. 
    //++a will execute first, then will increament the value, where a++ will increament first, then executed.
    cout<<endl;
    cout<<var++<<endl; //will print 10 and then increament to 11.
    cout<<var++<<endl; //will increament to 11 and then print 11.
    //type casting 
    cout<<(int) 'a' <<endl;
    //good thing about cin is that it skips all the whitespace and newlines and searches for the inputs only

    int newvar, var2;

    cin >> newvar >> var2;
    cout << newvar<<var2<<endl;
    return 0;
}