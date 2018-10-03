# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <time.h>

struct dessert {
  int price;
  char name [256];
};

struct dessert randomStruct() {
  char *arr[3] = {"cookie", "chocolate", "cupcake"};
  struct dessert s0;
  srand(time(NULL));
  s0.price = rand() / 10000000;
  strcpy(s0.name, arr[rand() % 3]);
  return s0;
}

int printVar(struct dessert test) {
  printf("Name of Dessert: %s\n", test.name);
  printf("Price of Dessert: $%d\n", test.price);
  return 0;
}
int main() {
  struct dessert test0 = randomStruct();
  printVar(test0);
  return 0;
}
