#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int get_num(const string& file) {

  int pos = file.find('.');

  if (pos == string::npos) {
    cerr << "Invalid filename format" << endl;
    exit(EXIT_FAILURE);
  }

  // extracts a substring idx position 0 to pos
  string number = file.substr(0, pos);
  return stoi(number); // converting the string to an integer
  
}

string get_extension(const string& file) {

  int index = file.find('.');

  if (index == string::npos) {
    cerr << "Invalid file format" << endl;
    exit(EXIT_FAILURE);
  }

  string extension = file.substr(index);

  return extension;
}


int main(int argc, char *argv[]) {

  // Check if the number of input arguments are 2
  if (argc != 3) {  
    cerr << "Error: Exactly 2 arguments are required" << endl;
    return EXIT_FAILURE;
  }

  string file1 = argv[1];
  string file2 = argv[2];

  int num1 = get_num(file1);
  int num2 = get_num(file2);

  string ext1 = get_extension(file1);
  string ext2 = get_extension(file2);

  if (ext1 == ".txt" && ext2 == ".txt") {
    auto mean = num1 + num2 / 2.0;
    cout << "Mean: " << mean << endl;
  } else if (ext1 == ".png" && ext2 == ".png") {
    auto sum = num1 + num2;
    cout << "Sum: " << sum << endl;
  } else if (ext1 == ".png" && ext2 == ".png") {
    auto modulo = num1 % num2;
    cout << "Remainder: " << modulo << endl;
  } else {
    cerr << "Invalid File Extension" << endl;
    return EXIT_FAILURE;
  }

  return EXIT_SUCCESS;
}