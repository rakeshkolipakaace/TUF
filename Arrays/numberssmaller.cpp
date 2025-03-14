//Brute force

int n = nums.size();
vector<int> result(n, 0);

for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        if (nums[j] < nums[i]) {
            result[i]++;
        }
    }
}

return result;


//bestway

vector<int> sortedNums = nums;
        sort(sortedNums.begin(), sortedNums.end());

        unordered_map<int, int> countMap;
        for (int i = 0; i < sortedNums.size(); i++) {
            if (countMap.find(sortedNums[i]) == countMap.end()) {
                countMap[sortedNums[i]] = i;
            }
        }

        vector<int> result;
        for (int num : nums) {
            result.push_back(countMap[num]);
        }

        return result;



// optimal way


vector<int> count(101, 0);
for (int num : nums) {
    count[num]++;
}

for (int i = 1; i < 101; i++) {
    count[i] += count[i - 1];
}

vector<int> result;
for (int num : nums) {
    result.push_back(num == 0 ? 0 : count[num - 1]);
}

return result;