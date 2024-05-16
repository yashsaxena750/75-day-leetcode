#include <bits/stdc++.h>
using namespace std;

int main() {
    int t = 0;
    cin >> t;

    while (t--) {
        int n = 0, b = 0;
        cin >> n >> b;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        int flag = 0;
        int i = 0, j = 1;  // Initialize j to i+1
        while (i < n - 1 && !flag) {
            while (j < n) {
                int diff = arr[j] - arr[i];
                if (diff == b) {
                    flag = 1;
                    break;
                } else if (diff > b) {
                    break;  // No need to check further for this i, as diff will only increase
                }
                j++;
            }
            i++;
            j = i + 1;  // Reset j to i+1 for the next loop
        }

        cout << flag << "\n";
    }
    return 0;
}