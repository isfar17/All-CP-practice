#include <bits/stdc++.h>
using namespace std;
//general function of convertings tring number to integer-> '7 ->stoi('7)->7

int main() {
    int range;
    cin>>range;
    while (range--)     
    {   long long result=0, two_power=1;
        int size;
        cin>>size;//basically this won't be needed in our program as we will directly take the input

        string s;
        cin>>s;
        for (int i = s.length()-1; i >=0; i--)//we will start from the last index to first(length is always 1 plus than index)
        {
            int str_to_bin=s[i]-'0';//we will subtract the ascii value of '1'/'0' from '0'. since their ascii numbers are unlike
                                    //decimal numbers side by side, eventually the subtraction would work just like same as the
                                    //decimal subtraction. returning same result as decimal.
            result+=(str_to_bin*two_power);//we will then add the number(binary to decimal conversion tutorial)
            two_power*=2;//increase the power of 2(tutoial)
        }
        
        
    cout<<result<<endl;
        
    }
    
    return 0;
}