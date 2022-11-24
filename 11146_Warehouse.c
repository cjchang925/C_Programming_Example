#include <stdio.h>
#include <stdlib.h>

int main(){
  int M, N, mat[99][99];
  scanf("%d%d", &M, &N);
  for(int i = 0; i < M; i++)
    for(int j = 0; j < N; j++)
      scanf("%d", &mat[i][j]);
  
  int cost, min_cost = 999;
  for(int i_1 = 0; i_1 < M; i_1++){
    for(int j_1 = 0; j_1 < N; j_1++){
      cost = 0;
      for(int i_2 = 0; i_2 < M; i_2++)
        for(int j_2 = 0; j_2 < N; j_2++)
          cost += mat[i_2][j_2] * (abs(i_1 - i_2) + abs(j_1 - j_2));
      if(cost < min_cost)
        min_cost = cost;
    }
  }
  printf("%d\n", min_cost);
}
