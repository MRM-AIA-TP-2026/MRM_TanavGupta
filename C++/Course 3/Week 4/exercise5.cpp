#include <iostream>
using namespace std;

//add class definitions below this line

class Subway {
  public:
    Subway() {
      passengers = 0;
      total_fares = 0;
    }
    int GetPassengers(){
      return passengers;
    }
    double CalculateFares(int p){
        total_fares += p*fare;
    }
    void Board(int x){
      if(x>=0){
       passengers += x;
       CalculateFares(x);
      }
    }
    void Disembark(int x){
      if(x<= passengers && x>=0){
        passengers -= x;
      }
     }
    double GetFares() {
        return total_fares;
    }
  private:
    const double fare = 2.40; //variable cannot be reassigned
    int passengers;
    double total_fares;
};

//add class definitions above this line   

int main() {
  
  //DO NOT EDIT code below this line

  Subway s;
  cout << s.GetPassengers() << endl;
  s.Board(23);
  s.Disembark(12);
  cout << s.GetPassengers() << endl;
  cout << s.GetFares() << endl;

  //DO NOT EDIT code above this line
  
  return 0;
  
}