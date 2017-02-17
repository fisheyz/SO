#include <stdio.h>
//2
void main(){
  double c, *cptr ;
  c = 3,4356;
  cptr = &c;

  short s, *sptr;
  s = 1;
  sptr = &s;

  int i, *iptr;
  i = 100000000;
  iptr = &i;

  long l, *lptr;
  l = 2000000000;
  lptr = &l;

  float f, *fptr;
  f = 3,4345;
  fptr = &f;

  double d, *dptr;
  d = 3,4345;
  dptr = &d;

  printf("tamanho de um char: %lu\n", sizeof(c));
  printf("tamanho do end de um char %lu\n", sizeof(&c));
  printf("tamanho de um apontador para um  char: %lu\n", sizeof(cptr));
  printf("tamanho do conteudo de um apontador para um char: %lu\n", sizeof(*cptr));
  printf("valoes apontados pelos endereços '%p' e '%p' sao '%c' e '%c'\n", &c, cptr, c, *cptr );
//3
  int x[3] = {23, 41, 17};

  printf("valor x[0]: %d\n", x[0]);
  printf("valor x: %d\n", x);
  printf("valor *x: %d\n", *x);
  printf("valor x+1: %d\n", x+1);
  printf("valor *(x+1): %d\n", *(x+1));
  printf("valor *(x+2): %d\n", *(x+2));
  printf("valor &(x[0]): %d\n", &(x[0]));
  printf("valor *&(x[0]): %d\n", *&(x[0]));
  //printf("valor &*(x[0]): %d\n", &*(x[0]));
  printf("valor *(x[0]): %d\n", *(x[0]));

  //4
  
}
