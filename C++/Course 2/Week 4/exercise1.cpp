#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) {

////////// DO NOT EDIT! //////////
  string path = argv[1];        //
//////////////////////////////////  
  
  //add code below this line
    
  int no_ch = 0;
  int li = 1;
  ifstream file;
  char ch;
  file.open(path);
  while(file.get(ch)){
    no_ch += 1;
    if(ch =='\n'){
      li += 1;
      no_ch -= 1;
    }
  }
  file.close();
  if(no_ch == 0) li = 0;
  cout << li << " line(s)" <<endl;
  cout << no_ch << " character(s)" << endl;


  
  //add code above this line
  
  return 0;
  
}