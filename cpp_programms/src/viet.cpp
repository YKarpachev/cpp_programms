#include <cmath>
#include <iomanip>
#include <iostream>

int
main ()
{

  long double pi = 2.0;
  long double previous = 0.0;
  for (int i = 0; i < 1000000000; i++)
    {
      pi /= (sqrt (2.0 + previous) / 2.0);
      previous = sqrt (2.0 + previous);
    }

  std::cout << std::fixed << std::setprecision (20) << pi
            << std::endl; // 3.14159265358979323938

  return 0;
}
