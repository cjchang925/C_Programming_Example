#include <stdio.h>

int main(){
  float in;
  scanf("%f", &in);

  int fp_digit = 0;
  while(in != (int)in){
    fp_digit++;
    in *= 10;
  }

  int out_rev[10], digit = 0;
  while((int)in > 0){
    out_rev[digit] = (int)in % 10;
    digit++;
    in /= 10;
  }

  int out[10];
  for(int i = 0; i < digit; i++)
    out[digit - i - 1] = out_rev[i];
    
  printf("= ");
  int int_digit = digit - fp_digit;
  for(int i = 0; i < digit; i++){
    if(i < int_digit){
      for(int j = 0; j < int_digit - i - 1; j++)
        out[i] *= 10;
      printf("%d", out[i]);
    }
    else{
      printf("0.");
      for(int j = 0; j < i - int_digit; j++)
        printf("0");
      printf("%d", out[i]);
    }

    if(i != digit -1)
      printf(" + ");
    else
      printf("\n");
  }
}
