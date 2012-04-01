#include <stdio.h>

int rangeCheck(time){//時間が０～２３に入っているか判定する
	if(time>=0&&24>time){
		return 1;
	}
	else{
		return 0;
	}
}

int main(){
	unsigned int start, end, now;
	printf("input start, end, and now time : ");//開始、終了、ある時間を入力させる
	scanf("%d %d %d",&start, &end, &now);
	
	if(rangeCheck(start)&&rangeCheck(now)&&rangeCheck(end)){
		if(start<=end){//日にちをまたがない場合
			if(start<=now&&now<end){//範囲に入っている
				printf("%d is in range between %d and %d!",now,start,end);
			}
			else{
				printf("%d is out of range between %d and %d!",now,start,end);
			}
		}
		else{//日づけをまたぐ場合
			if(start<=now||now<end){//範囲に入っている
				printf("%d is in range between %d and %d!",now,start,end);
			}
			else{
				printf("%d is out of range between %d and %d!",now,start,end);
			}
		}
	}
	else{
		printf("input time are wrong!");
	}
	return 0;
}