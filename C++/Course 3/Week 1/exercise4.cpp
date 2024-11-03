#include <iostream>
#include <vector>
using namespace std;

//add code below this line
bool IsPalindrome(string a){
  int n = 0;
  int flag = 1;
  for(int j= 0;a[j]!='\0';j++){
    n += 1;
  }
  for(int i = 0 ; i<n;i++){
    if(a[i] != a[n-1-i]){
      flag = 0;
      break;
    }
  }
  if (flag == 1) return true;
  else return false;
}



//add code above this line

int main(int argc, char** argv) {
  string x = argv[1];
  cout << boolalpha << IsPalindrome(x) << endl;
}