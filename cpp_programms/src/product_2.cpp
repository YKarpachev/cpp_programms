#include <cmath>
#include <iomanip>
#include <iostream>

int
main ()
{

  long double pi = 0;

  for (long int k = 1; k < 10000000000; k++)
    {
      pi += 6.0 / k / k;
    }

  pi = sqrt (pi);
  std::cout << std::fixed << std::setprecision (50) << pi << std::endl;
  // 3.141592653 37016999791210081216519256486208178102970

  return 0;
}
