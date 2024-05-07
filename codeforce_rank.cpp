/* the problem is about finding the rank of coders in a contest. here is how the rank
in codeforces determined. the top scorer is he who solves the most problem. if there
are multiple most solvers, the solver with less penalty tops the position.

input :
1 4
2 3
3 6
3 5
4 1
4 5

output:
4 1
4 5
3 5
3 6
2 3
1 4*/

/* the solution to this problem is priority queue. it takes the element just like
queue but returns the greatest element or the lowest(using comperator) element
when pop. so we use this trick to take out the bigger values first. but there is a 
problem. in pair priority queue returns element according to the bigger number
in first part. But in this case, we want to return the first value as the biggest
and second value as the lowest one. so while inputting  them into queue, we
input the negative multiplied second value. suppose 3,4. we know 4 is greater.
but if we take -3,-4 now we know,-3 is bigger. so this trick will sort the queue
in our desrired order. and while printing them, we will remove - by multiplying -1.
*/
#include <bits/stdc++.h>
using namespace std;

#define optimize ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
int main() {

    optimize
    int n;
    cin>>n;

    priority_queue<pair<int,int>> rank;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        cin>>a>>b;
        rank.push({a,-b});
    }
    for (int i = 0; i < n; i++)
    {
        cout<<rank.top().first<<" "<<rank.top().second*-1<<endl;
        rank.pop();
    }
 
}