 #include <iostream>
using namespace std;

int main(int argc, char** argv) {
  
  string my_string = (argv[1]);
  
  //add code below this line
  int len = my_string.length();
  for(int i = 0; i<len/2 ; i++){
    cout << my_string.at(i);
  }
  cout << endl;
  for (int j = (len/2);j<len;j++){
    cout << my_string.at(j);
  }


  //add code above this line
  
  return 0;
  
}