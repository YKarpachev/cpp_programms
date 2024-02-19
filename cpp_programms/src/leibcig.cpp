#include <iomanip>
#include <iostream>

int
main ()
{
  long double start = 1.0;
  long double pi = 0.0;

  for (long int i = 1; i < 10000000000; i++)
    {
      if (i % 2 == 0)
        {
          pi += (4.0 / start);
        }
      else
        {
          pi -= (4.0 / start);
        }
      start += 2.0;
    }

  std::cout << std::fixed << std::setprecision (50) << abs (pi) << std::endl;
  // 3.141592653 68979934564090672477476573476451449096203
  return 0;
}
