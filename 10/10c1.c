#include <stdio.h>

#define maxStudents 10

typedef struct{
 int english;
 int math;

} student;

int calcAve(student input[], double *englishAverage, double *mathAverage, double *totalAverage){
  int i;
  *englishAverage=0;
  *mathAverage=0;
  *totalAverage=0;
  
  for(i=0;i<=maxStudents;i++){
  if(input[i].english==-1 || input[i].math==-1)break;
  
    *englishAverage += input[i].english;
    *mathAverage += input[i].math;
    *totalAverage += input[i].english + input[i].math;
  }
    if(i==0)i=1;
    *englishAverage = *englishAverage/i;
    *mathAverage = *mathAverage/i;
    *totalAverage = *totalAverage/(i*2);
}

int main(void)
{
    student students[maxStudents+1];
    double mathAve, engAve, totalAve;
    
    int i=0;
    
    while (i<maxStudents) {
        
        if (scanf("%d %d", &students[i].english, &students[i].math) != 2)
            break;
        i++;
    }
    students[i].english = students[i].math = -1;
    
    calcAve(students, &engAve, &mathAve, &totalAve);
    
    printf ("English average is %6.2f\n", engAve);
    printf ("Math    average is %6.2f\n", mathAve);
    printf ("Total   average is %6.2f\n", totalAve);

    return 0;
}
