#include <iostream>
using namespace std;

// brute force way

void printAllDivisors(int n) {
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            cout << i << " ";
        }
    }
    return;
}
int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    printAllDivisors(n);
    return 0;
}















// optimal way

// #include <iostream>
// #include <vector>
// #include <cmath>
// #include <algorithm>
// using namespace std;

// void printAllDivisors(int n) {
//     vector<int> divisors;
//     int sqrt_n = sqrt(n);

//     for (int i = 1; i <= sqrt_n; i++) {
//         if (n % i == 0) {
//             divisors.push_back(i);  // Store the small divisor
//             if (i != n / i) {  // Store the corresponding large divisor (avoid duplicates)
//                 divisors.push_back(n / i);
//             }
//         }
//     }

//     // Sorting to ensure divisors are printed in ascending order
//     sort(divisors.begin(), divisors.end());

//     cout << "Divisors of " << n << " are: ";
//     for (int divisor : divisors) {
//         cout << divisor << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     printAllDivisors(n);
//     return 0;
// }



// sum of divisors
//{ Driver Code Starts
// #include <bits/stdc++.h>
// using namespace std;


// // } Driver Code Ends
// // User function Template for C++
// class Solution {
//   public:
//     int sumOfDivisors(int n) {
//         int totalSum = 0;

//     // Loop through each divisor d
//     for (int d = 1; d <= n; d++) {
//         totalSum += d * (n / d);
//     }

//     return totalSum;
//         // Write Your Code here
//     }
// };

// //{ Driver Code Starts.
// int main() {
//     int t;
//     cin >> t;
//     while (t--) {
//         int N;
//         cin >> N;
//         Solution ob;
//         int ans = ob.sumOfDivisors(N);
//         cout << ans << endl;

//         cout << "~"
//              << "\n";
//     }
//     return 0;
// }
// // } Driver Code Ends