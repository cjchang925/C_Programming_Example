#include <stdio.h>

void swap(char *a,char *b) {
  char temp = *a;
  *a = *b;
  *b = temp;
} 

int main() {
  char word[251] = { 0 };
  int wordSize;
  char ch;
  scanf("%d", &wordSize);
  getchar();
  scanf("%c", &ch);
  getchar();
  for (int i = 0; i < wordSize; i++) {
    scanf("%c", &word[i]);
  }

  int i = 0;
  int j = 0;
  
  while(j < wordSize) {
    if(word[j] != ch) { // find the index of "ch"
      j++;
    }
      
    else{  
      while(i <= j) { // <=? <?
        swap(&word[i], &word[j]);
        i++;
        j--;
      }          
      break; // break for (j < wordSize)
    }
  }
  printf("%s\n", word);
  
}