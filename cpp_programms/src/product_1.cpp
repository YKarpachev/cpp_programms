#include <boost/multiprecision/cpp_dec_float.hpp>
#include <iostream>

namespace mp = boost::multiprecision;

int
main ()
{
  mp::cpp_dec_float_100 product = 2;

  for (int k = 1; k < 100000000; k++)
    {
      product *= mp::pow (mp::cpp_dec_float_100 (2 * k), 2) / (2 * k - 1)
                 / (2 * k + 1);
    }

  std::cout << std::fixed << std::setprecision (50) << product << std::endl;
  // 3.141592 57504997395347462605020489892706531810720756

  return 0;
}
