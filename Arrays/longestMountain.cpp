//Brute force

int n = arr.size();
int maxLength = 0;

for (int i = 1; i < n - 1; i++) {
    if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) { // Found a peak
        int left = i - 1, right = i + 1;

        // Move left while increasing
        while (left > 0 && arr[left - 1] < arr[left]) left--;

        // Move right while decreasing
        while (right < n - 1 && arr[right] > arr[right + 1]) right++;

        maxLength = max(maxLength, right - left + 1);
    }
}

return maxLength >= 3 ? maxLength : 0;



//optimal way two pointer approach

int n = arr.size();
int maxLength = 0;
int i = 1;

while (i < n - 1) {
    // Find a peak (arr[i] > arr[i-1] and arr[i] > arr[i+1])
    if (arr[i - 1] < arr[i] && arr[i] > arr[i + 1]) {
        int left = i - 1, right = i + 1;

        // Expand left
        while (left > 0 && arr[left - 1] < arr[left]) left--;

        // Expand right
        while (right < n - 1 && arr[right] > arr[right + 1]) right++;

        maxLength = max(maxLength, right - left + 1);

        // Move i to the end of the mountain
        i = right;
    } else {
        i++;
    }
}

return maxLength >= 3 ? maxLength : 0;