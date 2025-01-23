#include <iostream>
#include <vector>
using namespace std;


class Solution {
    public:
        vector<int> twoSum(vector<int>& nums, int target) {
            for (int i=0; i<nums.size(); i++){
                int value1 = nums[i];
                for (int j=i+1; j<nums.size(); j++){
                    int value2=nums[j];
                    if (value1+value2 == target){
                        return {i, j};
                    }
                }
            }
        return {};
        }
};




int main() {
  
  Solution a;
  int target = 9;
  vector<int> nums = {2,7,11,15};


  vector<int> out = a.twoSum(nums, target);

  cout<<out[0]<<" "<<out[1]<<endl;
  
  
  return 0;
}