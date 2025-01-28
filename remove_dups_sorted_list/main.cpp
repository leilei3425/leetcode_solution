#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& nums){
    for (int i : nums) {
        std::cout << i << " ";
    }
}

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
        for(int i=1;i<nums.size();i++){
            if(nums[i]!=nums[i-1]){
                nums[j]=nums[i];
                j++;
            }
        
        }
        return j;
    }
};


// indexToRemove = 1
//nums.erase(nums.begin() + indexToRemove)

int main() {

    Solution a;
    vector<int> nums = {1,1, 2};
    //printVector(nums);
    int out = a.removeDuplicates(nums);
    cout<<out;

  
  


    return 0;
}