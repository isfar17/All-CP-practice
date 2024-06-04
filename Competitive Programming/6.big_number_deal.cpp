#include <bits/stdc++.h>
using namespace std;

//in cpp we have long long int data type which can take upto 10^18 number. so in contest there might be
// bigger value than this. so we cant operate in int or double mode. we need to convert them into string.


int main() {

    string demo_number;
    cin>>demo_number; 
    cout<<endl;
    //if we now want the last digit of the number we need to follow some steps

    cout<<demo_number<<endl;
    cout<<(int) demo_number[demo_number.size()-1]<<endl;// wont print the number, will print the ascii value of that string formatted
                                                        //   number not digit.
    cout<<(int) demo_number[demo_number.size()-1]-'0'<<endl;// will print the actual number since we have subtracted the '0' ascii 
                                                  //value from the string converted number, hence we will get the actual integer .

    return 0;
}
/*
results:
1233345568533454656564646464323425465768

1233345568533454656564646464323425465768
56
8
*/