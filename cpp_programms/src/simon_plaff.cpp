#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
#include <iomanip>
#include <iostream>

namespace mp = boost::multiprecision;

int main() {

  mp::cpp_dec_float_50 pi = 0;

  for (int k = 0; k < 1000000000; k++) {
    pi += (4.0 / (8 * k + 1) - 2.0 / (8 * k + 4) - 1.0 / (8 * k + 5) -
           1.0 / (8 * k + 6)) /
          pow(16.0, k);
  }

  std::cout << std::fixed << std::setprecision(50) << pi << std::endl;
  // 3.1415926535897932 0958168967208537608621428145036074

  return 0;
}
