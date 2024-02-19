#include <boost/multiprecision/cpp_dec_float.hpp>
#include <cmath>
#include <iomanip>
#include <iostream>

namespace mp = boost::multiprecision;

int main() {
  mp::cpp_dec_float_100 pi = 2 * sqrt(3.0);

  for (int k = 1; k < 100; k++) {
    pi *= pow(static_cast<mp::cpp_dec_float_100>(k) / (k + 1.0), 2 * k) *
          pow(2 * k + 3, k + 0.5) * pow(2 * k - 1, 0.5 - k) / (2 * k + 1.0);
  }
  std::cout << std::fixed << std::setprecision(100) << pi << std::endl;
  // 3.141 6317933323062333364031992183012284349546846109038668696452107808936745459512460650674015714105052
  // FIXME при увеличение числа цикла ошибка nan

  return 0;
}
