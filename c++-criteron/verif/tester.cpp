#include <criterion/criterion.h>
#include <application.hpp>


Test(test_suite, test_add_empty)
{
  PrimeHandler *ph = new PrimeHandler();

  vector<int> expect = {};
  cr_assert(expect == ph->factorize(0));
}
