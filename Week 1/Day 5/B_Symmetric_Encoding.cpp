#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int test_cases;
    cin >> test_cases;
    for(int t = 0; t < test_cases; t++) {
        int n;
        cin >> n;
        char array[n];
        for (int i = 0; i < n; i++) {
            cin >> array[i];
        }
        map<char, int> fm;
        for (auto &i : array) {
            fm[i]++;
        }
        vector<char> uc;
        for (auto &[ch, fr] : fm) {
            uc.push_back(ch);
        }
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < fm.size(); j++) {
                if (array[i] == uc[j]) {
                    if (fm.size() / 2 <= j) {
                        cout << uc[fm.size() - 1 - j];
                    } else {
                        int ds = j - fm.size() + 1;
                        if (ds < 0) {
                            ds *= -1;
                        }
                        cout << uc[ds];
                    }
                    break;
                }
            }
        }
        cout << endl;
    }
    return 0;
}