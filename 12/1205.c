#include <stdio.h>
#include <stdio.h>

#define max_line 100

int main(void)
{
  int n,m,total1=0,total2=0,taro,hanako,a1[max_line],a2[max_line],i,j,b;
  while(1){
         total1=0,total2=0;
         taro=0,hanako=0,b=0;
    
    scanf("%d %d",&n,&m);
    
    if(n==0 && m==0){
    break;
    }
  else{
  for(i=0;i<n;i++){
     a1[i]=0;
     scanf("%d",&a1[i]);
     total1=total1+a1[i];
  }
  
  for(i=0;i<m;i++){
      a2[i]=0;
      scanf("%d",&a2[i]);
      total2=total2+a2[i];
  }
  for(i=0;i<n;i++){
     for(j=0;j<m;j++){
       if(total1-a1[i]+a2[j]==total2-a2[j]+a1[i]){
          taro=a1[i];
          hanako=a2[j];
          b=1;
          break;
          }
          
          }
          if(b==1)break;
      }
      }
      if(b==1){
                printf("%d %d\n",taro,hanako);
                }
                else{
                      printf("-1\n");
                      }
                      }

      
       return(0);
}
