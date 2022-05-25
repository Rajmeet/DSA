#include <iostream>
#include <set>
#include <vector>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        set<int> s;
        int ans = 0;
        int oldSize = s.size();
        for(int i = 0; i < nums.size(); i++) {
            s.insert(nums[i]);
            if(oldSize != s.size()) {
                oldSize = s.size();
            }
            else {
                ans = nums[i];
            }
        }
        return ans;       
    }

};