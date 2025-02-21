// Basic approach
// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     int count = 0;
//     while (n > 0)
//     {
//         count++;
//         n /= 10;
//     }
//     cout << count;
//     return 0;
// }


// optimal approach

// #include <iostream>
// #include <string>
// using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;
//     int count=int(log10(n))+1;
//     cout<<count;
//     return 0;
// }



// count digit from gfg

//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Function to count the number of digits in n that evenly divide n
    int evenlyDivides(int n) {
         int c = n;  
    int count = 0;  

    while (c > 0) {
        int r = c % 10;  

        if (r != 0 && n % r == 0) {  
            count ++;  
        }

        c /= 10;  
    }

    return count; 
    
        
        
        
    }
};

