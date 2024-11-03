#include <iostream>
#include <vector>
using namespace std;

//add code below this line
int GetOddsEvens(string boo, vector<int>& numbers){
  if(boo == "true"){
    for(int s : numbers){
      if(s%2==0){
        cout << s << endl;
      }
    }
  }
  else if(boo == "false"){
    for(int s : numbers){
      if(s%2 != 0){
        cout << s << endl;
      }
    }
  }
}


//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  vector<int> y;
  for (int i = 2; i < argc; i++) {
    y.push_back(stoi(argv[i]));
  }
  GetOddsEvens(x, y);
}