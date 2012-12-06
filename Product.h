#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product
{
 public:
  enum ProductType {
    DietCoke,
    Coke,
    Sprite,
    Dr_Pepper,
    Water,
    Gatoraide,
    NotAProduct
  };
  
  Product() {}
  Product(ProductType type_p): type(type_p) { }
  virtual ~Product() {}
  
  ProductType type;
  
};

#endif
