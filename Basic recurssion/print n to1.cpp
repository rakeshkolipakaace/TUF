//{ Driver Code Starts
// Initial template for C++
#include <iostream>
using namespace std;


// } Driver Code Ends
// User function template for C++
#include<cmath>
class Solution {
  public:
    int sumOfSeries(int n) {
        if(n==0){
            return 0;
        }
        
        
        return pow(n,3)+sumOfSeries(n-1);
        // code here
    }
};

//{ Driver Code Starts.
