#include <iostream>
#include <vector>
using namespace std;


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        for(int i=0;i<nums.size();i++){

            if(nums[i]>=target){
                return i;
            } 
            if(target>nums[nums.size()-1]){
                return nums.size();
            }
                
            
            
        }
        return 0;
    }
};



int main() {
  
  Solution a;
  int target = 5;
  vector<int> nums = {1,3,5,6};


  int out=a.searchInsert(nums, target);

  cout<<out<<endl;
  
  
  return 0;
}