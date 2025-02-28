#include <iostream>
#include <cstring>
using namespace std;

int main(){
    char str[100];
    cout<<"Enter a string: ";
    cin>>str;
    int len=strlen(str);
    int i=0 ,j=len-1,flag=0;
    while(i<j){
        if(str[i]!=str[j]){
            flag=1;
            break;
        }
        i++;
        j--;
    }
    if(flag==0){
        cout<<"Palindrome";
    }
    else{
        cout<<"Not Palindrome";
    }



}


//leetcode questoion


class Solution {
    public:
        bool isPalindrome(string s) {
            int start=0;
           int end=s.size()-1;
           while(start<=end){
               if(!isalnum(s[start])){start++; continue;}
               if(!isalnum(s[end])){end--;continue;}
               if(tolower(s[start])!=tolower(s[end]))return false;
               else{
                   start++;
                   end--;
               }
           }
           return true;
            
        }
    };



    //optimal way
    int start = 0, end = s.size() - 1;

    while (start < end) {
        while (start < end && !isalnum(s[start])) start++;  // Skip non-alphanumeric
        while (start < end && !isalnum(s[end])) end--;      // Skip non-alphanumeric

        if (tolower(s[start]) != tolower(s[end])) return false;

        start++;
        end--;
    }
    return true;