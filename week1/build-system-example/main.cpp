#include <iostream>
#include <string>
#include <vector>
#include "tools.hpp"
// Note that we do not need to include the tools.cpp file where the defintions are. We only need to include where the definitions are.

/*
For linking a library do the following

1. c++ -std=c++17 -c tools.cpp -o tools.o
2. ar rcs libtools.a tools.o
3. c++ -std=c++17 main.cpp -L . -ltools -o main
*/

/*
To do this is really hard by hand
*/

using namespace std;

int main() {

  vector<int> a = {1, 2, 3, 5};
  for (auto v : a) {
    cout << v << endl;
  }

  make_it_sunny();
  make_it_rain(); 

  return 0;
}
