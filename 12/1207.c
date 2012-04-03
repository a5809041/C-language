#include <stdio.h>

typedef struct {
char name[25];
int price;
} data;


int main(void){
int c='\0',pay[5],total,change[5]={0,10,10,10,10},exchange[5],temp,i,check[5];
data list[5]={{"コカコーラ",110},{"ミルクティー",140},{"ビール",210},{"オレンジジュース",190},{"しみじみ",120}};

  printf("1:コカコーラ 2: ミルクティー 3:ビール 4: オレンジジュース 5:しみじみ\n");
  printf("       110円            140円    210円                190円      120円\n");
  
while(1){
    printf("ご希望の飲み物の番号を入れてください (終わるのときは Ctrl+D): ");
    if((scanf("%d",&c))==EOF)break;
    
    printf("商品は%s (価格=%d円)。お金を入れてください。\n",list[c-1].name,list[c-1].price);
    printf("1000円は何枚ですか?");
    scanf("%d",&pay[0]);
    total=1000*pay[0];
    printf(" 500円は何枚ですか?");
    scanf("%d",&pay[1]);
    total+=500*pay[1];
    printf(" 100円は何枚ですか?");
    scanf("%d",&pay[2]);
    total+=100*pay[2];
    printf("  50円は何枚ですか?");
    scanf("%d",&pay[3]);
    total+=50*pay[3];
    printf("  10円は何枚ですか?");
    scanf("%d",&pay[4]);
    total+=10*pay[4];
    
    for(i=0;i<5;i++)change[i]+=pay[i];
        
    printf("\n商品価格  = %d円 ",list[c-1].price);
    total=total-list[c-1].price;
    
    exchange[0]=total/1000;temp=total%1000;
    exchange[1]=temp/500;temp=temp%500;
    exchange[2]=temp/100;temp=temp%100;
    exchange[3]=temp/50;temp=temp%50;
    exchange[4]=temp/10;
    
    
    for(i=0;i<5;i++)check[i]=change[i]-exchange[i];
    
    if(total<0){printf("足りない\n");for(i=0;i<5;i++)change[i]-=pay[i];
    printf("投入紙幣  = 1000円 (%d), 500円 (%d), 100円 (%d), 50円 (%d), 10円 (%d)\n",pay[0],pay[1],pay[2],pay[3],pay[4]);
    printf("釣銭      = 1000円 (%d), 500円 (%d), 100円 (%d), 50円 (%d), 10円 (%d)\n",pay[0],pay[1],pay[2],pay[3],pay[4]);
    printf("釣銭用紙幣= 1000円 (%d), 500円 (%d), 100円 (%d), 50円 (%d), 10円 (%d)\n",change[0],change[1],change[2],change[3],change[4]);}
    
    if(check[0]<0||check[1]<=0||check[2]<=0||check[3]<=0||check[4]<=0)
    {printf("釣銭切れ\n");for(i=0;i<5;i++)change[i]-=pay[i];
    printf("投入紙幣  = 1000円 (%d), 500円 (%d), 100円 (%d), 50円 (%d), 10円 (%d)\n",pay[0],pay[1],pay[2],pay[3],pay[4]);
    printf("釣銭      = 1000円 (%d), 500円 (%d), 100円 (%d), 50円 (%d), 10円 (%d)\n",pay[0],pay[1],pay[2],pay[3],pay[4]);
    printf("釣銭用紙幣= 1000円 (%d), 500円 (%d), 100円 (%d), 50円 (%d), 10円 (%d)\n",change[0],change[1],change[2],change[3],change[4]);
    }
    
    else if(exchange[0]==0&&exchange[1]==0&&exchange[2]==0&&exchange[3]==0&&exchange[4]==0)
    {printf("釣銭無し\n");for(i=0;i<5;i++)change[i]=change[i]-exchange[i];
    printf("投入紙幣  = 1000円 (%d), 500円 (%d), 100円 (%d), 50円 (%d), 10円 (%d)\n",pay[0],pay[1],pay[2],pay[3],pay[4]);
    printf("釣銭      = 1000円 (%d), 500円 (%d), 100円 (%d), 50円 (%d), 10円 (%d)\n",exchange[0],exchange[1],exchange[2],exchange[3],exchange[4]);
    printf("釣銭用紙幣= 1000円 (%d), 500円 (%d), 100円 (%d), 50円 (%d), 10円 (%d)\n\n",change[0],change[1],change[2],change[3],change[4]);
    }
    
    
    else
    { printf("釣銭あり\n");for(i=0;i<5;i++)change[i]=change[i]-exchange[i];
    printf("投入紙幣  = 1000円 (%d), 500円 (%d), 100円 (%d), 50円 (%d), 10円 (%d)\n",pay[0],pay[1],pay[2],pay[3],pay[4]);
    printf("釣銭      = 1000円 (%d), 500円 (%d), 100円 (%d), 50円 (%d), 10円 (%d)\n",exchange[0],exchange[1],exchange[2],exchange[3],exchange[4]);
    printf("釣銭用紙幣= 1000円 (%d), 500円 (%d), 100円 (%d), 50円 (%d), 10円 (%d)\n\n",change[0],change[1],change[2],change[3],change[4]);
  }
}
return 0;
}
