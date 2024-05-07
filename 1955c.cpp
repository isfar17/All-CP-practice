#include <iostream>
#include <vector>
using namespace std;

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction(a) cout.unsetf(ios::floatfield); cout.precision(a); cout.setf(ios::fixed,ios::floatfield);
// #define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define endl '\n'


int main() 
{
    optimize();
    // file(); // Commented out because file redirection may not be needed for debugging

    int t;
    cin >> t;

    while(t--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> ships(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ships[i];
        }

        int initial_len = ships.size();
        int flag = 1;
        int initial = 0;
        int end = ships.size() - 1;

        for (int i = 0; i < k; i++)
        {   
            if (initial <= end)
            {
                if (flag == 1)
                {
                    if (ships[initial] > 0)
                        ships[initial] -= 1;
                    else
                    {
                        initial++;
                        if (initial <= end) // Ensure initial does not exceed end
                            ships[initial] -= 1;
                    }
                    flag = 0;
                }
                else if (flag == 0)
                {
                    if (ships[end] > 0)
                        ships[end] -= 1;
                    else
                    {
                        end--;
                        if (end >= initial) // Ensure end does not go below initial
                        {
                            if (ships[end] > 0)
                                ships[end] -= 1;
                        }
                    }
                    flag = 1;
                }
            }
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            if (ships[i] != 0)
            {
                count++;
            }
        }
        cout << initial_len - count << endl; 
    }
}
