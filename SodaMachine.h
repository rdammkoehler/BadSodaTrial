#ifndef SODA_MACHINE_H
#define SODA_MACHINE_H

#include <string>

class SodaMachine
{
 public:
  SodaMachine();
  ~SodaMachine() {}

  std::string choose(std::string selection);
  void insertFunds(int funds);

 private:
  bool sufficientFunds();
  int value;
};

#endif
