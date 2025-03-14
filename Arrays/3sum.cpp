// Brute Force
class Solution {
  public:
    bool hasTripletSum(vector<int> &nums, int target) {
          int n = nums.size();

        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                for (int k = j + 1; k < n; k++) {
                    if (nums[i] + nums[j] + nums[k] == target) {
                        return true;
                    }
                }
            }
        }
        return false; 
    }
        // Your Code Here
    
};



// optimal solution

class Solution {
  public:
    bool hasTripletSum(vector<int> &nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end()); 

        for (int i = 0; i < n - 2; i++) {
            int left = i + 1, right = n - 1;
            
            while (left < right) {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == target) {
                    return true;
                } 
                else if (sum < target) {
                    left++; 
                } 
                else {
                    right--; 
                }
            }
        }
        return false;
    
        // Your Code Here
    }
};




