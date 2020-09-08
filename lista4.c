#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fat(int n) {
    if(n==0) return 1;
     else return (n*fat(n-1));
}

int main() {
    int a;
    printf("Digite o valor de n:\n");
    scanf("%d", &a);
    printf("O fatorial de %d eh: %d\n", a, fat(a));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mdc(int a, int b) {
    if(a%b == 0) return(b);
     else return (mdc(b, a%b));
}

int main() {
    int a, b;
    printf("Digite os valores a e b:\n");
    scanf("%d%d", &a, &b);
    printf("O MDC entre %d e %d eh: %d", a, b, mdc(a, b));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mdc(int a, int b) {
    if(a%b == 0) return(b);
     else return (mdc(b, a%b));
}

int mdc3(int a, int b, int c) {
    return(mdc(mdc(a,b), c));
}

int main() {
    int a, b, c;
    printf("Digite os valores a, b e c:\n");
    scanf("%d%d%d", &a, &b, &c);
    printf("O MDC entre %d, %d e %d eh: %d", a, b, c, mdc3(a, b, c));
    return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int primo(int x, int y) {
    if(y == 1) return (1);
    else if(x%y==0) return(0);
    primo(x, y-1);
}

int main() {
    int a;
    printf("Digite o valor de a:\n");
    scanf("%d", &a);
    printf("O número %d é primo? %d\n", a, primo(a, a-1));
    return 0;
}

//Brenda Luiza da Costa Pereira - Sistemas de Informação 

//d) Fibonacci.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int fib(int n) {
	if(n < 2) return 1;
	return fib(n - 1) + fib(n - 2);
}


int main() {
    int a;
    printf("Digite o termo que você quer da série de Fibonacci.\n");
    scanf("%d", &a);
    printf("O número que ocupa a posição %d da série de fiboncci é: %d\n\n\n", a, fib(a));
    printf("Este programa conta o primeiro item não nulo da série como tendo posição zero, o segundo como posição um e assim por diante.");
    return 0;
}

//f) decrescente(x): procedimento que escreve uma seqüência de inteiros menores que x e maiores que 0.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int decrescente(int x) {
    if(x == 0) return 0;
    printf("%d\n", x);
        decrescente(x-1);
    return 0;
}

int main() {
    int a;
    printf("Digite x:\n");
    scanf("%d", &a);
    printf("%d\n", decrescente(a));
    return 0;
}

//g) res(a,b): retorna o resto da divisão entre a e b.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int res(int x, int y) {
	return (x%y);
}

int main() {
    int a, b;
    printf("Digite o primeiro número.\n");
    scanf("%d", &a);
    printf("Digite o segundo número:\n");
    scanf("%d", &b);
    printf("O resto da divisão de %d por %d é %d", a, b, (res(a, b)));
    return 0;
}

//h) form(n): retorna o valor do somatório de i*i, com i variando de 1 até n.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int form(int n) {
  if (n == 1) return 1;
	else return ((n*n) + form(n-1));
}

int main() {
    int a;
    printf("Digite um número.\n");
    scanf("%d", &a);
    printf("%d\n", form(a));
    return 0;

//i) mmc(a, b): retorna o menor múltiplo comum de a e b.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int mmc(int x, int y) {
  int z = 1; 
  if ((x*z) == (y*z)) return (z);
	else return (mmc(x, y, (z+1))); 
}

int main() {
    int a, b;
    printf("Digite dois números para saber o mmc deles.\n");
    scanf("%d%d", &a, &b);
    printf("%d\n", mmc(a, b, c));
    return 0;
}

//j) div(a, b): retorna o resultado da divisão inteira de a por b.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int division(int x, int y) {
 return (x/y); 
}

int main() {
    int a, b;
    printf("Digite dois números para saber o resultado da divisão do primeiro pelo segundo.\n");
    scanf("%d%d", &a, &b);
    printf("%d\n", division(a, b));
    return 0;
}


int main() {
    int a;
    printf("Digite um número para ver todos os inteiros maiores que 0 e menores ou iguais a ele.\n");
    scanf("%d", &a);
    printf("%d\n", crescente(a));
    return 0;
}


}


//m) dig(n): retorna a soma dos dígitos de um inteiro positivo n.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int dig(int x){
	if(x < 10) return x % 10;
	return dig(x / 10) + x % 10;
}

int main() {
    int a;
    printf("Digite um número para saber a soma de seus dígitos.\n");
    scanf("%d", &a);
    printf("%d\n", dig(a));
    return 0;
}

//n) exp(k, n): retorna k n

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int expoente(int k, int n) {
 return (pow(k, n)); 
}

int main() {
    int a, b;
    printf("Digite dois números para saber quanto é o primeiro elevado ao segundo.\n");
    scanf("%d%d", &a, &b);
    printf("%d\n", expoente(a, b));
    return 0;
}


//o) crescente(x): escreve em ordem crescente, todos os inteiros maiores que 0 e menores ou iguais a x.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int crescente(int x) {
  if (x == 0) return (x);
  else return (crescente(x -1)); 

}

void crescente(int x){
    if (x > 0) crescente(x-1);
    printf("%d ", x);
    return;
}

int main() {
  int a;
  printf("Digite um número.");
  scanf("%d", &a);
  printf("%d\n", crescente(a));
}
////////////////////////////
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

adivinhar(int x) {
    n = 0; 
    if (x == 242) printf("Acertou!");
        else if (x < 242) printf("MENOR");
        else if (x > 242) printf("MAIOR");
    n ++; 
    printf("%d", n);
}

int numeroSecreto() {
    int a;
    printf("Digite um número de 3 dígitos:");
    scanf("%d", &a);
    printf("%c", adivinhar(a));
}