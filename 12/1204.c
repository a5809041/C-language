#include <stdio.h>


int main(){
  int data[5],i,m=0,n=0,temp[8];

  for(i=0;i<5;i++){//手順１
    printf("栄養%dに払ってもいい金額を入れてください\n",i+1);
    scanf("%d",&data[i]);
    m+=data[i];//Aの値を計算
  }
  temp[0]=22-(data[0]+data[1]);//こっから下で手順２と３をまとめてやる
  temp[1]=20-(data[1]+data[2]);
  temp[2]=37-(data[0]+data[3]+data[4]);
  temp[3]=16-(data[0]+data[4]);
  temp[4]=20-(data[0]+data[2]+data[3]);
  temp[5]=29-(data[1]+data[4]);
  temp[6]=7-data[4];
  temp[7]=50-(data[0]+data[1]+data[2]+data[3]);
  
  
  if(temp[0]<=0)n+=temp[0];//牛肉がお買い得かどうか判定してお買い得ならｎに入れる
  if(temp[1]<=0)n+=temp[1];
  if(temp[2]<=0)n+=temp[2];
  if(temp[3]<=0)n+=temp[3];
  if(temp[4]<=0)n+=temp[4];
  if(temp[5]<=0)n+=temp[5];
  if(temp[6]<=0)n+=temp[6];
  if(temp[7]<=0)n+=temp[7];
     //この時点でnは負の値になってるn=B
printf("下界は %d円です。",m+n);//手順４＋出力
return 0;
}
