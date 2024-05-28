#include <iostream>
#include <string>

using namespace std;

int main() {
  string filename = "200.txt";
  size_t index = filename.find('.');
  cout << index << endl; // index of the '.'
  string x = filename.substr(0, index);
  string y = filename.substr(index);
  cout << stoi(x) << " " << y << endl; 
}