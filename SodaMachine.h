#ifndef SODA_MACHINE_H
#define SODA_MACHINE_H

#include <string>
#include "Product.h"

class SodaMachine
{
 public:
  SodaMachine();
  ~SodaMachine() {}
  
  Product* choose(Product::ProductType selection);
  void insertFunds(int funds);
  
 private:
  bool sufficientFunds();
  int value;
};

#endif
