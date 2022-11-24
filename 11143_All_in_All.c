#include <stdio.h>

int main() {
  int s[31] = { 0 }, t[31] = { 0 };
  int s_length, t_length;
  scanf("%d%d", &s_length, &t_length);
  for (int i = 0; i < s_length; i++) {
    scanf("%d", &s[i]);
  }
  for (int j = 0; j < t_length; j++) {
    scanf("%d", &t[j]);
  }

  int count = 0, s_index = 0;
  for( int k = 0 ; k < t_length ; k++ ){
    if( t[k] == s[s_index] ){
      s_index++;
      if( s_index == s_length ) {
        count++;
        printf("%d\n", (k - s_length + 1));
      }

      if( t[k + 1] != s[s_index] ) {
        s_index = 0;
      }
    }
  }
  
  if(count == 0) printf( "-1\n" );
  
  return 0;
}