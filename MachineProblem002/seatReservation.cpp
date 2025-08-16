#include <iostream>

using namespace std;

const string lineBreak = "_______________________________________________________________________";

int seatReservation(){
  int input, seatArray[5][7] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 
  20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35};

  while(true){

    cout << endl;
    cout << lineBreak << endl;
    cout << endl;

    for(int i = 0; i < 5; i++){
      for(int j = 0; j < 7; j++){
        if(seatArray[i][j] < 10){
          cout << seatArray[i][j] << "   ";
        } else {
          cout << seatArray[i][j] << "  ";
        }
      }
      cout << endl;
    }

    cout << endl;
    cout << "Enter seat number to reserve : "; cin >> input;
    cout << endl;

    if(input > 35 || input < 1){
      cout << "Invalid seat number: " << input << endl;
      continue;
    }

    bool occupiedSeat = false;

    for(int i = 0; i < 5; i++){
      for(int j = 0; j < 7; j++){
        if(seatArray[i][j] == input){
          seatArray[i][j] = 0;
          cout << "Seat successfully reserved!" << endl;
          occupiedSeat = true;
        }
      }
    }

    !occupiedSeat && cout << "Seat is taken: " << input << endl;
    
  }

  return 0;
}

int main(){
  seatReservation();

  return 0;
}