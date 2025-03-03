int n = arr.size();
for (int i = 1; i < n; i++) {  // Start from the second element
    for (int j = i; j > 0 && arr[j] < arr[j - 1]; j--) {  
        swap(arr[j], arr[j - 1]);  // Swap elements if out of order
    }
}