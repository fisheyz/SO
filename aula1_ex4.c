#include <stdio.h>
#include <string.h>
#define SIZE 10

void show_vector(char *a, int n);

int main(){

    char v[SIZE] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i'};
    show_vector(v, SIZE);
    return 0;
}

void show_vector(char *a, int n){
  int i;
  char v[SIZE] = {};
  strcat(v, a);

  for (i = 0; i <  n; i++){
    printf("%c %d\n", a[i], *&(a[i]));
  }
  printf("%s\n", v);
}
