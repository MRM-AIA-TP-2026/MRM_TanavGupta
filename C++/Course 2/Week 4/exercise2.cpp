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
  vector<string> content;
  ifstream file;
  string read;
  file.open(path);
  while(getline(file,read)){
    stringstream ss(read);
    while(getline(ss,read,','))
     content.push_back(read);
  }
  
  for(int i=0;i<4;i++){
    cout << (stoi(content.at(i))+stoi(content.at(i+4))+stoi(content.at(i+8)))/3 <<' ';
  }




  //add code above this line
  
  return 0;
  
}
