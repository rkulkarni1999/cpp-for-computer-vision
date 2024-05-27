#include <iostream>
#include <random>
#include <string>

using namespace std;

int main() {

  // Some code that generates a seeded random number
  std::random_device r;
  std::default_random_engine e1(r());
  std::uniform_int_distribution<int> uniform_dist(0, 99);
  int target = uniform_dist(e1); 
  std::cout << "Guess the number between 0 to 99" << std::endl;

  while (true) {

    std::string input;
    std::cin >> input;

    try{
    // turn the string into an integer.
    int guess = std::stoi(input);

    // Check is the number is in the valid range
    if ((guess < 0) || (guess > 99)) {
      std::cerr << "The number must be within 0 to 99" << std::endl;
      continue; 
    }

    if (guess == target) {

      std::cout << "Congratulations, you've guessed the correct number" << std::endl;
    }

    else if (guess > target) {
      std::cout << "The number is larger" << std::endl;
    } else {
      std::cout << "The number is smaller" << std::endl; 
    }
    } catch (std::invalid_argument &e) {
      std::cerr << "Number invalid" << endl;}
      catch (out_of_range &e) {
        std::cerr << "Number invalid" << endl;
      }
  }

    
}