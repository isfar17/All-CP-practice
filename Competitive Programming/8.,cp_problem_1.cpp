#include <bits/stdc++.h>

using namespace std;


char upper(char c)
{
    return 'A'+(c-'a'); //any small letter plus 25 is the upper letter of itself
}

int main() {

    while (true)
    {
        string s;
        cin>>s; // cin skips the space. so while reading the sentence if it detects space, it will go to next line
        cout<<s.length();
        if (s.length()==0)//means the input has ended or a new line
        {
            break;
        }

        for (int i = 0; i < s.size(); i++) //now that we have got a part of the string, we keep upper it.
        {
        s[i]=upper(s[i]);
        }
    cout<<s<<endl;//print the full value and go to loop again

    }


    return 0;
}