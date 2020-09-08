#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    //2. a) 
    int x;
    scanf("%d", &x);
    float resto = (x % 2);
    if (resto == 0) {
        printf("Número é par.");
    } else {
        printf("Número é ímpar.");
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  //1>a)
  float max(float a, float b, float c) {
    if(a > b && a > c) return (a);
    else if(b> c) return (b);
    else return (c);
  }

    //2. a) e b) 
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    if( (x > y && x < z) || (x < y && x > z) ) {
      printf("Primeiro número digitado está dentro do intervalo %d e %d.", y, z);
    } else {
      printf("Primeiro número digitado não está dentro do intervalo %d e %d.", y, z);
    }
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

  int bissexto(int ano) {
    if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0) )) 
      return(1);;
    else return(0);
  }

    //2. c) 
    int ano;
    scanf("%d", &ano);
    if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0) )) {
      printf("Ano é bissexto.");
    } else {
      printf("Ano não é bissexto.");
    }
    return 0;
}