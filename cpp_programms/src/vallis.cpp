#include <iomanip>
#include <iostream>

double
fpi ()
{
  long double pi = 1.0;
  int start_v = 0, start_v_index = 0, start_n = 1, start_n_index = 1;

  for (int i = 0; i < 1000000000; ++i)
    {
      if (start_v_index % 2 == 0)
        {
          start_v += 2;
        }
      if (start_n_index % 2 == 0)
        {
          start_n += 2;
        }

      ++start_v_index;
      ++start_n_index;
      pi *= 2 * static_cast<long double> (start_v) / start_n;
    }

  return pi;
}

int
main ()
{
  long double a = fpi ();

  std::cout << std::fixed << std::setprecision (20) << a
            << std::endl; // 3.14159265358979323938

  return 0;
}
