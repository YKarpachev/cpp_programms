#include <boost/multiprecision/cpp_dec_float.hpp>
#include <cmath>
#include <iomanip>
#include <iostream>

namespace mp = boost::multiprecision;

int main() {

  mp::cpp_dec_float_50 pi = 4.0;

  for (int k = 1; k < 10000000; k++) {
    pi *= (pow(k, 2.0) + k) / (pow(k, 2) + k + 0.25);
  }

  std::cout << std::fixed << std::setprecision(50) << pi << std::endl;
  // 3.141592 73212386229215457811627287857903382814839856

  return 0;
}
