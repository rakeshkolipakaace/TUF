int n = arr.size();
    for(int i = n - 1; i > 0; i--) {  // Outer loop runs from n-1 to 1
        for(int j = 0; j < i; j++) {  // Inner loop runs from 0 to i-1
            if(arr[j] > arr[j + 1]) 
                swap(arr[j], arr[j + 1]); 
        }
    }