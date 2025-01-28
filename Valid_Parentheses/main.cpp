#include <iostream>
#include <vector>
#include <map>
#include <stack>
using namespace std;


void printStack(std::stack<char> stack) {
    // Iterate through the stack
    while (!stack.empty()) {
        // Print the top element
        std::cout <<"here: " << stack.top() << " ";
        // Remove the top element
        stack.pop();
    }
    std::cout << std::endl; // Newline for better formatting
}

class Solution {
   public:
    bool isValid(string s) {
        map<char, char> parentheses_map = { {')', '('}, 
                                    {']', '['}, 
                                    {'}', '{'}};
        stack<char> stack_tmp;


        for(int i=0;i<s.size();i++){
            
            if (stack_tmp.empty()){
                stack_tmp.push(s[i]);
            }
            else{
                if(parentheses_map.find(s[i]) != parentheses_map.end() 
                    && parentheses_map[s[i]]==stack_tmp.top()){
                    stack_tmp.pop();
                }
                else{
                    stack_tmp.push(s[i]);
                }
            }
        }


        if(stack_tmp.empty()){
            return true;
        }
        else
            return false;
    }
        
};




int main() {
  Solution a;
  string s="()()(){}{}[][]";
  if (a.isValid(s))
        cout<<"yes";
    else 
        cout<<"no";
  
  
  
  return 0;
}