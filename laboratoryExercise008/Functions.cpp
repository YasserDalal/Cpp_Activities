#include <iostream> // enables cout, cin
#include <vector> // enables vector for dynamic arrays

// declare std to use cout, cin, and other data types without using the prefix 'std::'
using namespace std;

// reusable line break
const string lineBreak = "_______________________________________________________________";

int question1(vector<int> arrayNum = {}){
//user input | length of array
  int input, lengthOfArray = arrayNum.size();

  // line break
  cout << lineBreak << endl;
  cout << endl;

  // go to user input
  // if array is empty meaning no arguments
  if(!arrayNum.size()){
    // labels
    cout << "Question 1 (User Input)" << endl;
    cout << endl;

    // accept user input 6 times
    for(int i = 0; i < 6; i++){
      cout << "Enter a number[" << i+1 << "]: "; cin >> input;
      arrayNum.push_back(input);
    }
    cout << endl;

    // show the output by looping through array
    for(int i = 0; i < 6; i+=2){
      cout << "Division of ";

      // if number is 1 digit only
      arrayNum[i] < 10 ? 
        // add space 
        cout << " " << arrayNum[i] << " ÷ " << arrayNum[i+1] << " = " << arrayNum[i] / arrayNum[i+1] << endl
        :
        // if number is 2 digits don't add space
        cout << arrayNum[i] << " ÷ " << arrayNum[i+1] << " = " << arrayNum[i] / arrayNum[i+1] << endl;
    }
    cout << endl;
    return 0;
  }
  // if there is an argument
  cout << "Question 1 (Only Arguments)" << endl;
  cout << endl;

  // show the output by looping through array
  for(int i = 0; i < lengthOfArray; i+=2){
    cout << "Division of ";

    // if number is 1 digit only
    arrayNum[i] < 10 ?
      // add space
      cout << " " << arrayNum[i] << " ÷ " << arrayNum[i+1] << " = " << arrayNum[i] / arrayNum[i+1] << endl
      :
      // if number is 2 digits don't add space
      cout << arrayNum[i] << " ÷ " << arrayNum[i+1] << " = " << arrayNum[i] / arrayNum[i+1] << endl;
  }
  cout << endl;
  return 0;
}

int question2(short num = 0){
  // user input
  short input;
  // strings
  string stringNum, stringInput, answer;
  cout << lineBreak << endl << endl;

  // if no arguments
  if(num == 0){
    // labels
    cout << "Question 2 (User Input)" << endl << endl;

    do {
      // accept user input
      cout << "Enter a number from (10 - 99): "; cin >> input;
      
      // do it again if the input is not from 10 to 99
    } while(input > 99 || input < 10);
    cout << endl;
    
    // convert number to string so we can access the 1st and 2nd index
    stringInput = to_string(input);

    // show the output
    cout << "Separated: " << stringInput[0] << " " << stringInput[1] << endl << endl;
    
    return 0;
  }

  // if there is an argument
  cout << "Question 2 (Only Arguments)" << endl << endl;

  do {
    // leave a message if the argument is not from 10 to 99
    answer == "no" && cout << "Go to the caller and put some numbers from 10 to 99" << endl << endl;
    answer == "yes" && cout << "Please double check the arguments again" << endl << endl;

    // ask if the user already pass an argument
    cout << "Did you pass an argument from 10 to 99 (yes/no): "; cin >> answer;

  } while(num > 99 || num < 10 || answer == "no");
  cout << endl;

  // convert number to string so we can access the 1st and 2nd index
  stringNum = to_string(num);

  // show the output
  cout << "Argument: " << stringNum  << endl << endl;
  cout << "Separated: " << stringNum[0] << " " << stringNum[1] << endl << endl;

  return 0;
}

// calculate fibonacci
void calculateFibb(int num, vector<int> arrayNum, int num1, int num2){
  // num2 is next number
  // num1 is current number
  for(int i = 0; i < num; i++){
    // push current number to array
    arrayNum.push_back(num1);
    // calculate next number
    int nextNum = num1 + num2;
    // set current number to next number
    num1 = num2;
    // so in the next loop, next number will be current number
    num2 = nextNum;
  }

  // show the output
  cout << "Fibonacci of " << num << ":  ";
  // loop through array
  for(int j = 0; j < arrayNum.size(); j++){
    // if it is the last number
    if(j == arrayNum.size() - 1){
      // don't add comma
      cout << arrayNum[j] << endl;

      // if it is not the last number
    } else {
      // add comma
      cout << arrayNum[j] << ", ";
    }
  }
  cout << endl;
}

int question3(int num = 0){
  // variables for fibonacci
  int num1 = 0, num2 = 1;
  // dynamic array for pushing numbers
  vector<int> arrayNum;

  // if there is an argument
  if(num > 0){
    cout << lineBreak << endl << endl;
    cout << "Question 3 (Only Arguments)" << endl << endl;
    calculateFibb(num, arrayNum, num1, num2);
    return 0;
  }

  // if there is no argument proceed to user input
  cout << lineBreak << endl << endl;
  cout << "Question 3 (User Input)" << endl << endl;

  do {
    // accept user input
    cout << "Enter a number greater than 0: "; cin >> num;

    // do it again if the input is less than or equal to 0
  } while(num <= 0);
  cout << endl;

  calculateFibb(num, arrayNum, num1, num2);

  return 0;
}