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
  mp::cpp_dec_float_100 pi;
  mp::cpp_dec_float_100 prefinish = 1.0 / (426880 * sqrt (10005));
  mp::cpp_dec_float_100 summ = 0;

  for (int k = 0; k < 10000; k++)
    {
      summ += (factorial (6 * k) * (13591409 + 545140134 * k))
              / (factorial (3 * k) * pow (factorial (k), 3)
                 * pow (-640320, 3 * k));
    }

  pi = 1 / (prefinish * summ);

  std::cout
      << std::fixed << std::setprecision (100) << pi
      << std::endl; // 3.141592653589793 02611882674516352868806257715541417
  return 0;
}
