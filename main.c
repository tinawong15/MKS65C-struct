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
  s0.price = rand() % 100;
  strcpy(s0.name, arr[rand() % 3]);
  return s0;
}

int printVar(struct dessert test) {
  printf("Name of Dessert: %s\n", test.name);
  printf("Price of Dessert: $%d\n", test.price);
  return 0;
}

int editStructBoth(struct dessert * test, int increment, char n[]){
	//struct dessert * pointa = &test;
	test -> price += increment;
	strcpy(test -> name,n);
	return 0;
}

int main() {
  srand(time(NULL));
  struct dessert test0 = randomStruct();
  struct dessert test1 = randomStruct();
  printf("first test \n");
  printVar(test0);
  editStructBoth(&test0, 5, "cake");
  printf("first test after changes \n");
  printVar(test0);

  printf("second test \n");
  printVar(test1);
  editStructBoth(&test1, 2, "ice cream");
  printf("second test after changes \n");
  printVar(test1);
  return 0;
}
