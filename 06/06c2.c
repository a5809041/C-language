#include <stdio.h>

typedef struct {
int number;
char name[20];
double math;
double english;
} student;

int main(void){
  int n,i;
  char fail;
  student member[5]={
	  {15991001, "安瀬聡希", 0, 0},
	  {15991002, "大谷聖子", 0, 0},
	  {15991003, "黒川哲也", 0, 0},
	  {15991004, "嶋田友子", 0, 0},
	  {15991005, "鈴木公孝", 0, 0},
  };
  
  printf("学生の点数を入力して下さい:\n");
  
  for(n=0;n<5;n++){
  printf("学生番号%d番\n",member[n].number);
  printf("数学：");
  scanf("%lf",&member[n].math);
  printf("英語：");
  scanf("%lf",&member[n].english);
  }
  
  printf("Student# 名字名前	Math Eng  Fail\n-------- --------	---- ---- ----\n");
  for(i=0;i<5;i++){
	  if(member[i].math<50 && member[i].english>=60){ fail='M';}
	  if(member[i].math>=50 && member[i].english<60){ fail='E';}
	  if(member[i].math<50 && member[i].english<60) {fail='X';}
  printf("%d %s\t%4.1lf %4.1lf %c\n",member[i].number,member[i].name,member[i].math,member[i].english,fail);
  fail=' ';
  }

return 0;
}
