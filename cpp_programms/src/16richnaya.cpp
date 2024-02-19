#include <boost/multiprecision/cpp_dec_float.hpp>
#include <cmath>
#include <iomanip>
#include <ios>
#include <iostream>

namespace mp = boost::multiprecision;

int main() {

  mp::cpp_dec_float_100 pi = 0;

  for (int k = 0; k < 1000000; k++) {
    pi += pow(-1.0, (double)k) / pow(4.0, (double)k) *
          (2.0 / (4 * k + 1) + 2.0 / (4 * k + 2) + 1.0 / (4 * k + 3));
  }

  std::cout << std::fixed << std::setprecision(50) << pi << std::endl;
  // 3.141592653589793 38619142405982137488122017654610301

  return 0;
}
