#include <iostream>
#include <algorithm>

using namespace std;

string findSmallestWord(int encodedSum) {
    string word = "";
    for (int i = 0; i < 3; ++i) {
        // Find the smallest letter that can be used
        int smallestLetter = min(26, encodedSum - (3 - i - 1));
        word += 'a' + smallestLetter - 1;

        // Update the encoded sum for the next letter
        encodedSum -= smallestLetter;
    }
    return word;
}

int main() {
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int t;
    cin >> t;

    while (t--) {
        int encodedSum;
        cin >> encodedSum;

        string result = findSmallestWord(encodedSum);
        cout << result << endl;
    }

    return 0;
}
