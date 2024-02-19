#include <boost/multiprecision/cpp_dec_float.hpp>
#include <cmath>
#include <iomanip>
#include <iostream>

namespace mp = boost::multiprecision;

int main() {

  mp::cpp_dec_float_100 pi = 1.0;

  int medium = 5;
  int verh = 1;
  int niz = 2;

  mp::cpp_dec_float_100 VFactorial = 1.0;
  mp::cpp_dec_float_100 NFactorial = 2.0;

  for (int i = 0; i < 9000000; i++) {
    if (i % 2 == 0) {
      pi -= medium * pow(VFactorial / NFactorial, 3.0);
    } else {
      pi += medium * pow(VFactorial / NFactorial, 3.0);
    }
    medium += 4;
    verh += 2;
    niz += 2;
    VFactorial *= verh;
    NFactorial *= niz;
  }

  std::cout << std::fixed << std::setprecision(100) << 2 / pi << std::endl;
  // 3.141
  // 0019467543186868445056961086021828392308194297823895499619448608531158387865603693536340818335493
  return 0;
}
