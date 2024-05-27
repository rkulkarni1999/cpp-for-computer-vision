#include <iostream>
#include <sstream>
#include <string>

/*
The purpose of this script is to declarea string stream and seperate the string into numbers and variables so that it can be stored into different variables. 
*/

using namespace std;

int main() {

  // Combine variables into a string stream
  stringstream filename{"205.txt"};

  // Create variables to split a string stream,
  int num = 0;
  string ext;

  filename >> num >> ext;

  cout << num << endl;
  cout << ext << endl; 

  return 0;
}







