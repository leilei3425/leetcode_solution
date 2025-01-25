#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int size= s.size();
        for(int i=0;i<=int(size/2);i++){
            if (s[i]!=s[size-1-i]){
                return false;
            }       
        }
        return true;
    }
};




int main() {
  
    Solution sol;
    int num = 1122332211;
    if (sol.isPalindrome(num))
        cout<<"yes";
    else 
        cout<<"no";
  
  return 0;
}