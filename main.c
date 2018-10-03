# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <time.h>

struct dessert {
  int price;
  char food [256];
};

struct dessert randomStruct() {
  char *arr[3] = {"cookie", "chocolate", "cupcake"};
  struct dessert s0;
  srand(time(NULL));
  s0.price = rand() / 10000000;
  strcpy(s0.food, arr[rand() % 3]);
  return s0;
}

int main() {
  struct dessert test0 = randomStruct();
  printf("%d\n", test0.price);
  printf("%s\n", test0.food);
  return 0;
}
