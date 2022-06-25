#include <stdio.h>

int main() {
  int hi;
  int hf;
  int tempo;

  scanf("%d %d", &hi, &hf);

  if(hi == hf){
    tempo = 24;
  }
  else if(hi < hf){
    tempo = hf - hi;
  }
  else if(hi > hf){
    tempo = hf - (hi-24);
  }
  printf("O JOGO DUROU %d HORA(S)\n", tempo);
   return 0;
}
