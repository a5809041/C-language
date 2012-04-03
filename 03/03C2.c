#include <stdio.h>
int main(){
int loop,a,b,ascore=0,bscore=0;
  for(loop=1;loop<=10;loop++){
    printf("第%d回戦は？",loop);
    scanf("%d %d",&a,&b);
    if(a>=4||a<=0||b>=4||b<=0){
      printf("不正な値。入力をやり直してください。\n");
      loop--;
      }
    else{
    switch(a){
    case 1:
    printf("A さんはグー。");
    break;
    case 2:
    printf("A さんはチョキ。");
    break;
    case 3:
    printf("A さんはパー。");
    break;
    }
    switch(b){
    case 1:
    printf("B さんはグー。\n");
    break;
    case 2:
    printf("B さんはチョキ。\n");
    break;
    case 3:
    printf("B さんはパー。\n");
    break;
    }
    if(a==1&&b==2){
    printf("A さんの勝ち。 A さんが1点取得。\n");
    ascore=ascore+1;
    }
    else if(a==2&&b==3){
    printf("A さんの勝ち。 A さんが2点取得。\n");
    ascore=ascore+2;
    }
    else if(a==3&&b==1){
    printf("A さんの勝ち。 A さんが5点取得。\n");
    ascore=ascore+5;
    }
    else if(b==1&&a==2){
    printf("B さんの勝ち。 B さんが1点取得。\n");
    bscore=bscore+1;
    }
    else if(b==2&&a==3){
    printf("B さんの勝ち。 B さんが2点取得。\n");
    bscore=bscore+2;
    }
    else if(b==3&&a==1){
    printf("B さんの勝ち。 B さんが5点取得。\n");
    bscore=bscore+5;
    }
    else if(a-b==0){
    printf("あいこ。\n");
    }
    if(ascore>=21||bscore>=21){
    loop=100;
    }
    }
    printf("現在 A さんは%d点、B さんは%d点。\n",ascore,bscore);
    }
    if(ascore>bscore){
    printf("勝者は A さんでした。\nWinner: A (points: A %d, B %d)\n",ascore,bscore);
    }
    else if(bscore>ascore){
    printf("勝者は B さんでした。\nWinner: B (points: A %d, B %d)\n",ascore,bscore);
    }
    else if(ascore==bscore){
    printf("引き分けです。\nDraw (points: A %d, B %d)\n",ascore,bscore);
    }
return(0);
}
