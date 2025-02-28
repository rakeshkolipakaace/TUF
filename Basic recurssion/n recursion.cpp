//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    void printGfg(int N) {
        if(N!=0){
            printGfg(N-1);
            cout<<"GFG"<<" ";
        }
        // Code here
    }
};


