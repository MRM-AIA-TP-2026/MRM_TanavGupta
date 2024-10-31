#include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line
  int len = my_string.length();
  char temp;
  for(int i = 0;i<len;i +=2){
    temp = my_string.at(i);
    my_string.at(i) = my_string.at(i+1);
    my_string.at(i+1) = temp;
  }
  cout << my_string;


  //add code above this line
  
  return 0;
  
}