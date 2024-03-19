#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
int n;
 
string f1 = "map", f2 = "pie", f3 = "mapie";
string s;
 
void Solve()
{
     cin >> n;
     cin >> s;
     for (int i = 2; i < n - 2; i++)
     {
          string tmp = "";
          tmp += s[i - 2];
          tmp += s[i - 1];
          tmp += s[i];
          tmp += s[i + 1];
          tmp += s[i + 2];
          if (tmp == f3)
               s[i] = '*';
     }
     for (int i = 1; i < n - 1; i++)
     {
          string tmp = "";
          tmp += s[i - 1];
          tmp += s[i];
          tmp += s[i + 1];
          if (tmp == f1)
               s[i] = '*';
     }
     for (int i = 1; i < n - 1; i++)
     {
          string tmp = "";
          tmp += s[i - 1];
          tmp += s[i];
          tmp += s[i + 1];
          if (tmp == f2)
               s[i] = '*';
     }
 
     int a = 0;
 
     for (auto alphebet : s)
          if (alphebet == '*')
               a++;
 
     cout << a << '\n';
}
 
int main()
{
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int tests = 1;
     cin >> tests;
     while (tests--)
          Solve();
     return 0;
}
 