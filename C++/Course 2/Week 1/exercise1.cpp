#include <iostream>
using namespace std;

int main() {
  
  string oceans[] = {"Pacific", "Atlantic", "Indian", "Arctic", "Southern"};
  
  //add code below this line
  int row = sizeof(oceans)/sizeof(oceans[0]);
  int col = sizeof(oceans[0])/sizeof(string);
  for(int i=0; i <row;i++){
   cout << oceans[i] << endl;
  }


  //add code above this line
  
  return 0;
  
}