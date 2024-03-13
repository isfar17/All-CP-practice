    #include <bits/stdc++.h>
    using namespace std;

    int main() {
        freopen("input.txt","r",stdin);
        freopen("output.txt","w",stdout);
        int arr[4],x,y,z;
        for (int i = 0; i < 4; i++)
        {
            cin>>arr[i];
        }
        int n = sizeof(arr) / sizeof(arr[0]);
        sort(arr,arr+n);

        
        cout << arr[3] - arr[0] << " " << arr[3] - arr[1] << " " << arr[3] - arr[2] << endl;
        
        // so the math is basically subtract every element from the last element. for example:
        //x=a+b;
        //y=a+c;
        //z=c+b;
        //total=a+b+c;
        // a=total-z; and so on;
        }
        