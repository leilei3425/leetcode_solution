#include <iostream>
#include <vector>
#include <map>
using namespace std;

int get_int_size(int num){
    int count =0;
    while(num>0){
        num=int(num/10);
        count++;
    }
    return count;
}



int main() {
    cout<<get_int_size(5632);
    
 

  return 0;
}