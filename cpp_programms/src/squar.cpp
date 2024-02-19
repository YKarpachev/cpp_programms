#include <cmath>
#include <iomanip>
#include <iostream>
#include <ostream>

int
main ()
{
  long double summ = 0;
  for (int k = 1; k < 1000; k++)
    {
      for (int m = 1; m < 10000000; m++)
        {
          summ += 8 / (pow (4 * m - 2, 2 * k));
        }
    }
  std::cout << std::fixed << std::setprecision (20) << summ
            << std::endl; // 3.14159264858979460442

  return 0;
}
