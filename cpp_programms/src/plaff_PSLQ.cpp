#include <boost/multiprecision/cpp_dec_float.hpp>
#include <cmath>
#include <iomanip>
#include <ios>
#include <iostream>

namespace mp = boost::multiprecision;

int main() {
  mp::cpp_dec_float_100 pi = 0;
  mp::cpp_dec_float_100 q = exp(M_PI);
  for (int n = 1; n < 1000000; n++) {
    pi += 24.0 / n *
          (3.0 / (pow(q, n) - 1) - 4.0 / (pow(q, 2 * n) - 1) +
           1.0 / (pow(q, 4 * n) - 1));
  }

  std::cout << std::fixed << std::setprecision(50) << pi << std::endl;
  // 3.141592653589793 54127771542857941028061820135458365

  return 0;
}
