#include <iostream>
#include <tuple>

using namespace std;

auto foo() { return make_tuple("super variable", 5); }

void f() {
  static int counter = 0;
  counter++;
  cout << counter << endl; 
}

int main() {
  auto [name, value] = foo();
  cout << name << " has value " << value << endl;

  f();
  f(); 


  return 0;  
}

