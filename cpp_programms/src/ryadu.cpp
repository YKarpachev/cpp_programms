#include <boost/multiprecision/cpp_dec_float.hpp>
#include <iomanip>
#include <iostream>

namespace mp = boost::multiprecision;

mp::cpp_dec_float_100 factorial(int n) {
  mp::cpp_dec_float_100 result = 1;
  for (int i = 1; i <= n; ++i) {
    result *= i;
  }
  return result;
}

int main() {
  mp::cpp_dec_float_100 pi = 0;

  for (int i = 0; i < 10000; i++) {
    pi += 2 * factorial(i) / factorial(2 * i + 1);
  }

  std::cout << std::setprecision(50) << pi << std::endl;
  // слишком большие числа (ищу решение), максимальная точность -
  // 2.3691861458773063026416602181562507491384664488679

  return 0;
}
