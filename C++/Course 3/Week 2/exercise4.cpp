#include <iostream>
using namespace std;

//add function definitions below this line
string ReverseString(string a){
  string y;
  if(a.length() == 1) return y += a.at(0);
  else return y += a.at(a.length()-1) + ReverseString(a.substr(0,a.length()-1)); 

}


//add function definitions above this line

int main(int argc, char** argv) {
  cout << ReverseString(argv[1]) << endl;
  return 0;
}
