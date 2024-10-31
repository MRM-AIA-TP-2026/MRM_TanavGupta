#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string original = (argv[1]);
  string modified;
  char ch;
  
  //add code below this line
  int len = original.length();
  modified = "";
  for(int i = 0; i < len;i++){
    if(islower(original.at(i))>0){
      modified.push_back('l');
    }
    else if(isupper(original.at(i))>0){
      modified.push_back('u');
    }
    else{
      modified.push_back('-');
    }
  }
  cout << original <<endl;
  cout << modified;
  




  //add code above this line
  
  return 0;
  
}