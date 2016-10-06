#include <criterion/criterion.h>
#include <application.hpp>


Test(test_suite, test_add_empty)
{
  PrimeHandler *ph = new PrimeHandler();

  cr_assert(0 == ph->factorize(0));
}
