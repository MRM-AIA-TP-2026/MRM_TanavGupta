#include <iostream>
#include <vector>
using namespace std;

//add function definitions below this line
int ListSum(vector<int>& numb){
  int sum = 0;
  for(int s : numb){
    sum += s;
  }
  return sum;
}


//add function definitions above this line

int main(int argc, char** argv) {
  vector<int> nums;
  for (int i = 1; i < argc; i++) {
    nums.push_back(stoi(argv[i]));
  }
  cout << ListSum(nums) << endl;
  return 0;
}
