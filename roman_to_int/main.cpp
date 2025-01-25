#include <iostream>
#include <vector>
#include <map>
using namespace std;


class Solution {
public:
    int romanToInt(string s) {
        map<char, int> roman = { {'I', 1}, {'V', 5}, 
                                    {'X', 10}, {'L', 50}, 
                                    {'C', 100}, {'D', 500}, 
                                    {'M', 1000}};
        int sum=0;
        int current;
        int next;
        for(int i=0;i<s.size();i++){
            current= roman[s[i]];
            next=roman[s[i+1]];
        
            if (current<next){
                sum+=next-current;
                if(i==s.size()-1)
                break;
                else
                i++;
            }
            else{
                sum+=current;
            }
        }
        return sum;
    }
    
};


int main() {
    Solution sol;
    string str="MCMXCIV";
    int num = sol.romanToInt(str);

    cout<<num;


  return 0;
}