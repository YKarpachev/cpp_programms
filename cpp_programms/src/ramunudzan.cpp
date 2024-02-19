#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
#include <iomanip>
#include <iostream>

namespace mp = boost::multiprecision;

mp::cpp_dec_float_100
factorial (int n)
{
  mp::cpp_dec_float_100 result = 1;
  for (int i = 1; i <= n; ++i)
    {
      result *= i;
    }
  return result;
}

int
main ()
{
  mp::cpp_dec_float_100 pi = 0;

  for (int k = 0; k < 10000; k++)
    {
      pi += (2 * sqrt (2.0) / 9801)
            * (factorial (4 * k) * (1103 + 26390 * k) / pow (factorial (k), 4))
            / pow (396.0, 4 * k);
    }

  std::cout << std::fixed << std::setprecision (100) << 1 / pi << std::endl;
  // 3.14159265358979 27865933761817923331655635040089885602442613587390677588693767457106718573633524583024

  return 0;
}
