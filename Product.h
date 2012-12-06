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
    Gatoraide
  };

  Product() {}
 Product(ProductType type_p): type(type_p) { }
  virtual ~Product() {}

  ProductType type;
  
};
