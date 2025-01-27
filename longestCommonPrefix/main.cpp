#include <iostream>
#include <vector>
#include <map>
using namespace std;




class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string Prefix = ""; 
        for(int i=0;i<strs.size();i++){
            if (i==0){
                Prefix=strs[0];
            }
            else{
                Prefix=get_common(Prefix,strs[i]);
            }
        }

        
        return Prefix;
    }

    string get_common(const string& str1, const string& str2){
        string commonPrefix = "";
        int minLength = min(str1.length(), str2.length());

        for (int i = 0; i < minLength; i++) {
            if (str1[i] == str2[i]) {
                commonPrefix += str1[i];
            } else {
                break;
            }
        }

        return commonPrefix;
    }
};


int main() {
    Solution sol;
    vector<string> strs = {"flower","flow","flight"};
    
    //cout<<sol.get_common("flower", "flow");
    cout<<sol.longestCommonPrefix(strs);


  return 0;
}