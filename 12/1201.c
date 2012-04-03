#include <stdio.h>
#include <math.h>

#define ball 100 

int main()
{
  int n=4,i,j;
  printf("箱の数");
  scanf("%d",&n);
  double box[n][n],pre[n],total=0.0;
  
  for(j=0;j<n;j++)box[j][j]=1.0;
  for(j=0;j<n;j++)pre[j]=1.0;
  
  for(i=0;i<n;i++){
    for(j=i+1;j<n;j++){
      printf("箱%dは箱%dの何倍ですか？",i+1,j+1);
      scanf("%lf",&box[i][j]);
      box[j][i]=1.0/box[i][j];
    }
  }
  
  
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      pre[i]= pre[i]*box[i][j];
    }
    pre[i]=pow(pre[i],1.0/(double)n);
  }
  
  for(i=0;i<n;i++)total+=pre[i];
  
  
  for(i=0;i<n;i++){
    pre[i]=(pre[i]/total)*(double)ball;
  }
  
  for(i=0;i<n;i++)printf("箱%dには、だいたい %.1lf個の球が入っています\n",i+1,pre[i]);
return 0;
}
