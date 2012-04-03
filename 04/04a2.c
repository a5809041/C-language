#include <stdio.h>
int main(void){
int a;
while((a=getchar())!=EOF)
{
if((a/16)==0){
printf("%3d 0x0%X\n",a,a);
}
else{
printf("%3d 0x%2X\n",a,a);
}}

return 0;
}
