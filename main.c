# include <stdio.h>
# include <string.h>
# include <time.h>
int randomStruct() {
  // srand(time(NULL));
  // printf("%d\n", rand());
  return 0;
}

int main() {
  struct foo {
    int price;
    char food [256];
  };
  struct foo s0;
  s0.price = 1;
  strcpy(s0.food,"cookie");
  struct foo s1;
  s1.price = 2;
  strcpy(s1.food,"chocolate");
  struct foo s2;
  s2.price = 5;
  strcpy(s0.food,"cupcake");
  printf("%d\n", s0.price);
  printf("%s\n", s0.food);
  printf("%d\n", s1.price);
  printf("%s\n", s1.food);
  printf("%d\n", s2.price);
  printf("%s\n", s2.food);
  return 0;
}
