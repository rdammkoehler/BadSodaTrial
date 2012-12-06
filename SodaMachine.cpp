#include "SodaMachine.h"
#include "Product.h"

SodaMachine::SodaMachine()
{
  value = 0;
}

Product* SodaMachine::choose(Product::ProductType selection)
{
  Product* ret = (Product *)NULL;
  if (sufficientFunds())
    {
      return new Product(selection);
    }
  return ret;
}

bool SodaMachine::sufficientFunds()
{
  if(value == 75)
    {
      return true;
    }
  else
    {
      return false;
    }
}

void SodaMachine::insertFunds(int funds)
{
  value = funds;
}
