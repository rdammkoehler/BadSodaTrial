#include <gtest/gtest.h>
#include "Product.h"

TEST(ProductTest, ProductCreate){
  Product* product = new Product;
  ASSERT_TRUE(product != NULL);
}

TEST(ProductTest, ProductHasType) {
  Product* product = new Product(Product::DietCoke);
  ASSERT_TRUE(product->type == Product::DietCoke);
}
