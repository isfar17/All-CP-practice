#include <bits/stdc++.h>

using namespace std;

string canMakeZero(int n, vector<int>& array) {
    for (int i = 1; i < n - 1; ++i) {
        int min_value = min(array[i - 1], min(array[i], array[i + 1]));

        array[i - 1] -= min_value;
        array[i] -= 2 * min_value;
        array[i + 1] -= min_value;
    }

    for (int i = 0; i < n; ++i) {
        if (array[i] != 0) {
            return "NO";
        }
    }

    return "YES";
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> array(n);
        for (int i = 0; i < n; ++i) {
            cin >> array[i];
        }

        // Output
        cout << canMakeZero(n, array) << endl;
    }

    return 0;
}
