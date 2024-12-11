#include <bits/stdc++.h>
using namespace std;
void generatePermutations(vector<int>& nums, int index) {
    if (index == nums.size()) {
        for (int num : nums) {
            cout << num << " ";
        }
        cout << endl;
        return;
    }

    for (int i = index; i < nums.size(); i++) {
        swap(nums[index], nums[i]);
        generatePermutations(nums, index + 1);
        swap(nums[index], nums[i]);
    }
}

int main() {
    int t; cin >> t;
    while(t--){ 
        int n; cin >> n;
        vector<int> nums(n);
        iota(nums.begin(), nums.end(), 1);
        for (auto &i : nums) {
            cout << i << ' ';
        }
    }
    

    return 0;
}
