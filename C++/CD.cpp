#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    while (true) {
        int n, m;
        cin >> n >> m;

        if (n == 0 && m == 0) {
            break;
        }

        vector<int> jack(n);
        unordered_set<int> jill;

        for (int i = 0; i < n; i++) {
            cin >> jack[i];
        }

        for (int i = 0; i < m; i++) {
            int cd;
            cin >> cd;
            jill.insert(cd);
        }

        int c = 0;
        for (int i = 0; i < n; i++) {
            if (jill.count(jack[i]) > 0) {
                c++;
            }
        }

        cout << c << "\n";
    }

    return 0;
}
