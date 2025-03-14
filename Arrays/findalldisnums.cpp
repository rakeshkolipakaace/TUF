// Hash set approach

class Solution {
    public:
        vector<int> findDisappearedNumbers(vector<int>& nums) {
            unordered_set<int> s;
            vector<int> sol;
            for(auto const& n: nums) s.insert(n);
            for(int i=1;i<=nums.size();i++){
                if(s.find(i)==s.end()) sol.push_back(i);
            }
            return sol;
            
        }
    };



    //optimal way

    int n = nums.size();
        vector<int> sol;

        for (int i = 0; i < n; i++) {
            int idx = abs(nums[i]) - 1;
            nums[idx] = -abs(nums[idx]);
        }

        for (int i = 0; i < n; i++) {
            if (nums[i] > 0) sol.push_back(i + 1);
        }

        return sol;