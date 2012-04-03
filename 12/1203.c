#include <stdio.h>
#include <math.h>

typedef struct { //一個の案の情報の構造体
int number;//この案件の番号
int tousi;//初期投資
int rieki;//売上利益
int hiyou;//操業費用
double genka;//正味原価
int syueki;//稼得収益
} idea;

double cal_genka/*正味原価の計算*/(int syueki,double riritu,int year,int tousi){
   return syueki*(pow(1.0+riritu,(double)year) - 1.0)/(riritu*pow(1.0+riritu,(double)year))-tousi;
}


void printidea (idea temp[], int l)//出力
{
    int i;
    for ( i = 0; i < l; i++ ) {
        printf("%d番目に有利な案　正味原価%.1lf百万円　（%d案　初期投資:%d百万円　稼得収益:%d百万円）\n",
            i+1,
            temp[i].genka,
            temp[i].number,
            temp[i].tousi,
            temp[i].syueki
            );
    }
}

int main(){
  int ideas,year,i,j;
  double riritu,sinriritu;
  idea data[20],temp;
  
  while(1){//０が入力されるまでまわすからここは無限ループ
     printf("投資案の比較を始める場合は比較する案の数（数字）を入力せよ。終わるときは０を入力すること。");
     scanf("%d",&ideas);
     if(ideas==0||ideas>20){printf("終わり");break;}//終了条件
     for(i=0;i<ideas;i++)data[i].number=i+1;
     printf("投資の寿命は何年ですか？");
     scanf("%d", &year);
     printf("資本の利率は何%%ですか？");
     scanf("%lf", &riritu);
     riritu=riritu/100.0;//入力された資本の利率を0.**に変換
     
    for(i=0;i<ideas;i++){//入力された案件の数だけ構造体に入力
      printf("第%d案\n",data[i].number);
      printf("初期投資額は何百万円ですか？");
      scanf("%d",&data[i].tousi);
      printf("売上利益は何百万円ですか？");
      scanf("%d",&data[i].rieki);
      printf("操業費用は何百万円ですか？");
      scanf("%d",&data[i].hiyou);
      data[i].syueki=data[i].rieki-data[i].hiyou;
      data[i].genka=cal_genka(data[i].syueki,riritu,year,data[i].tousi);
    }
    
    
    for(i=0;i<ideas-1;i++){//ソート、形を覚えたほうがいいかも
      for(j=i+1;j<ideas;j++){
        if(data[j].genka>data[i].genka){
          temp=data[i];
          data[i]=data[j];
          data[j]=temp;
        }
      }
    }
    
    printidea(data,ideas);
    
    }
 return 0;
}
