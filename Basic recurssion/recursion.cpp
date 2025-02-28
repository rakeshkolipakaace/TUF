//{ Driver Code Starts
#include<iostream>
using namespace std;

 // } Driver Code Ends
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    // Complete this function
    void printNos(int n) {
        if(n==0){
          return ;  
        } 
        
        printNos(n-1);
         cout<<n<<" ";
        
        
        // Your code here
    }
};

