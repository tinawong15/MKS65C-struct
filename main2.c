# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <time.h>

struct dessert {
  int price;
  char name [256];
};

/*
struct dessert randomStruct() {
  char *arr[3] = {"cookie", "chocolate", "cupcake"};
  struct dessert s0;
  srand(time(NULL));
  s0.price = rand() / 100;
  strcpy(s0.name, arr[rand() % 3]);
  return s0;
}
*/

int printVar(struct dessert test) {
  printf("Name of Dessert: %s\n", test.name);
  printf("Price of Dessert: $%d\n", test.price);
  return 0;
}
/*
int editStruct(struct dessert test) {
  return 0;
}
*/
int printAll(){
	char * arr[3] = {"cookie", "chocolate", "cupcake"};

	//char * arrPoint = array;
	//int size = sizeof(array) / sizeof(array[0]);
	for(int i = 0; i < 3; i ++){
	printf("Dessert %d %s\n",i + 1, arr[i]);
}
	return 0;
}

int editStruct(struct dessert test){
	//struct dessert * pointa = &test;
		strcpy(test.name,"YATA");
	return 0;
	}

int main() {
   char * arr[3] = {"cookie", "chocolate", "cupcake"};
  struct dessert s0;
//struct dessert * pointa = &s0;

  srand(time(NULL));
  s0.price = rand() / 100;
  //strcpy(s0.name, arr[rand() % 3]);
  strcpy(s0.name,"yab");
  struct dessert test0 = s0;
  //struct dessert test0 = randomStruct();
  printVar(test0);
  editStruct(test0);
 printVar(test0);
  printAll(arr);
  return 0;
}



