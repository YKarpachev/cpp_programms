#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
#include <iomanip>
#include <iostream>

namespace mp = boost::multiprecision;

int main() {

  mp::cpp_dec_float_100 pi = 3;
  int ind = 2;

  for (long int i = 0; i < 10000000; i++) {
    if (i % 2 == 0) {
      pi += 4.0 / ind / (ind + 1) / (ind + 2);
      ind += 2;
    } else {
      pi -= 4.0 / ind / (ind + 1) / (ind + 2);
      ind += 2;
    }
  }

  std::cout << std::fixed << std::setprecision(50) << abs(pi) << std::endl;
  // 3.1415926535897932 2986617533075315321624218631239152

  return 0;
}
