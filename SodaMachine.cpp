#include "SodaMachine.h"

SodaMachine::SodaMachine()
{
  value = 0;
}

std::string SodaMachine::choose(std::string selection)
{
  if(sufficientFunds())
    {
      return selection;
    }
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
