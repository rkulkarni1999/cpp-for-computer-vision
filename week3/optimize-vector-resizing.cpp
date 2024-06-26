#include <vector>
#include <iostream>

using namespace std; 

int main() {
  const int N = 100;

  vector<int> vec; // size 0, capacity 0
  vec.reserve(N);  // size 0, capacity 100

  for (int ii = 0; ii < N; ii++) {
    vec.push_back(ii);
  }

  // vec ends with size 100, capacity 100


    vector<int> vec2; // size 0, capacity 0
    for (int ii = 0; ii < N; ii++) {
        vec2.push_back(ii);
    }
    // vec ends with size 100, capacity 120

    cout << "vector 1 : capacity : " << vec.capacity()
         << " size : " << vec.size() << endl;

    cout << "vector 2 : capacity : " << vec2.capacity()
         << " size : " << vec2.size() << endl;
}