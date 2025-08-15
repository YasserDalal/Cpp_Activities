#include <iostream>// enables cout, cin

// declare std to use cout, cin, and other data types without using the prefix 'std::'
using namespace std;

// reusable line break
const string lineBreak = "_________________________________________________________________";

int question1(){
//user input | array
  int input, integer[5];

  // line break
  cout << endl;
  cout << lineBreak << endl;
  cout << endl;
  
  // labels
  cout << "Question 1" << endl;
  cout << endl;

  // accept user input 5 times
  for(int i = 0; i < 5; i++){
    cout << "Enter a number[" << i + 1 << "]" << ": "; cin >> input;
    integer[i] = input;
  }

  // show the output
  cout << endl;
  cout << "Array contains 5 elements: [ " << 
  integer[0] << ", " << integer[1] << ", " << integer[2] << ", " << integer[3] << ", " << integer[4] << " ]" << endl;

  cout << endl;
  return 0;
}

int question2(){
  // user input
  int input;
  // explicit array
  const string integers[10] = {"A", "B", "C", "D", "E", "F", "G", "H", "I", "J"};

  // line break
  cout << endl;
  cout << lineBreak << endl;
  cout << endl;

  // labels
  cout << "Question 2" << endl;
  cout << endl;

  // accept user input from 1 to 10
  do {

    cout << "Enter a number from (1 - 10): "; cin >> input;

    // do it again if the input is not from 1 to 10
  } while(input > 10 || input <= 0);

  cout << endl;

  // start the loop from 0 to input value 
  for(int i = 0; i < input; i++){

    // If it is second row and above decrease the spaces. If not, increase the spaces
    i > 0 ? cout << string(input - i, ' ') : cout << string(input, ' ');
    
    // concatenate the letters
    for(int j = 0; j <= i; j++){
      cout << " " << integers[i];
    }
    cout << endl;
  }
  cout << endl;

  return 0;
}

int question3(){
  // array that holds 6 integers | num for index
  int sortedIntegers[6], num = 0;

  // line break
  cout << endl;
  cout << lineBreak << endl;
  cout << endl;

  // labels
  cout << "Question 3" << endl;
  cout << endl;

  // accept user input 6 times
  do {

    cout << "Enter a number [" << num + 1 << "]: "; cin >> sortedIntegers[num];
    num++;

    // do it again until it breaks
  } while(num < 6);

  // reset the num, use it in outer loop and get the length of the array
  for(num = 0; num < sizeof(sortedIntegers) / sizeof(sortedIntegers[0]); num++){

    // loop all the elements of the array for each element
    for(int j = 0; j < num; j++){
      // if the current element is greater than the element that we are looping
      if(sortedIntegers[j] > sortedIntegers[num]){
        // save the position of the element that we are looping
        int temp = sortedIntegers[num];
        // swap position of the element that we are looping, to the current element
        sortedIntegers[num] = sortedIntegers[j];
        // swap position of the current element, to the element that we are looping
        sortedIntegers[j] = temp;
      }
    }
  }
  cout << endl;

  // show the output
  cout << "Sorted array: [ " 
  << sortedIntegers[0] << ", " << sortedIntegers[1] << ", " 
  << sortedIntegers[2] << ", " << sortedIntegers[3] << ", "
  << sortedIntegers[4] << ", " << sortedIntegers[5] << " ]" << endl;

  cout << endl;
  return 0;
}