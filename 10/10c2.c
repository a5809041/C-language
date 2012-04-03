#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define studentCount 10

typedef struct {
    char studentNumber[9];
    char familyName[12]; /* 姓 */
    char givenName[12]; /* 名 */
    int englishMark;
    int mathMark;
} Student;

void printStudentList (Student *students[], int l)
{
    int i;

    for ( i = 0; i < l; i++ ) {
        printf("%8s: %-10s %-8s: E=%3d, M=%3d, Av=%5.1f\n",
            students[i]->studentNumber,
            students[i]->familyName,
            students[i]->givenName,
            students[i]->englishMark,
            students[i]->mathMark,
            (students[i]->englishMark + students[i]->mathMark) / 2.0);
    }
}

/* function to compare two student numbers, used for sorting by number */
int compareNumbers (const void* a, const void* b) {
    Student *studentPa = *((Student **) a); /* casts to convert to correct type */
    Student *studentPb = *((Student **) b);

    return strcmp (studentPa->studentNumber,
                   studentPb->studentNumber);
}

int comparegiven (const void* a, const void* b) {
    Student *studentPa = *((Student **) a); /* casts to convert to correct type */
    Student *studentPb = *((Student **) b);

    return strcmp (studentPa->givenName,
                   studentPb->givenName);
}

int comparefamily (const void* a, const void* b) {
    Student *studentPa = *((Student **) a); /* casts to convert to correct type */
    Student *studentPb = *((Student **) b);

    return strcmp (studentPa->familyName,
                   studentPb->familyName);
}

int compareenglish (const void* a, const void* b) {
    Student *studentPa = *((Student **) a); /* casts to convert to correct type */
    Student *studentPb = *((Student **) b);

    return -1*(studentPa->englishMark-
                   studentPb->englishMark);
}

int comparemath (const void* a, const void* b) {
    Student *studentPa = *((Student **) a); /* casts to convert to correct type */
    Student *studentPb = *((Student **) b);

    return -1*(studentPa->mathMark-
                   studentPb->mathMark);
}

int compareaverage (const void* a, const void* b) {
    Student *studentPa = *((Student **) a); /* casts to convert to correct type */
    Student *studentPb = *((Student **) b);

    return -1*(((studentPa->mathMark+studentPa->englishMark)/2.0)-(
                   (studentPb->mathMark+studentPb->englishMark)/2.0));
}

int main (void) {
    int i;
    int select;

    static Student students[] = {
        { "12345678", "Reigai", "Taro", 80, 62 }, /* 例外 太郎 */
        { "12349875", "Reidai", "Hanako", 76, 65 }, /* 例題 花子 */
        { "12349458", "Gambare", "Manabu", 56, 66 }, /* 頑張 学 */
        { "12342584", "Sample", "Tatoe", 34, 70 }, /* Sample 例恵 */
        { "12348347", "Sugaku", "Tokeko", 55, 100 }, /* 数学 解子 */
        { "12341948", "Girigiri", "Tariyasu", 60, 60 }, /* ぎりぎり 足康 */
        { "12348463", "English", "Perfect", 100, 56 }, /* 英語 完璧 */
        { "12347628", "Asobi", "Saboro", 20, 25 }, /* 遊日 サボ郎 */
        { "12344924", "Kurikaeshi", "Mawaroh", 77, 30 }, /* 繰返 回郎 */
        { "12341369", "Seiretu", "Junko", 69, 80 } /* 整列 順子 */
    };

    /* array of pointers used for sorting by number */
    Student *byNumber[studentCount],*bygiven[studentCount],*byfamily[studentCount],*byenglish[studentCount]
    ,*bymath[studentCount],*byaverage[studentCount],*byoriginal[studentCount];
    
    for (i=0; i<studentCount; i++)byNumber[i] = &students[i];
    for (i=0; i<studentCount; i++)bygiven[i] = &students[i];
    for (i=0; i<studentCount; i++)byfamily[i] = &students[i];
    for (i=0; i<studentCount; i++)byenglish[i] = &students[i];
    for (i=0; i<studentCount; i++)bymath[i] = &students[i];
    for (i=0; i<studentCount; i++)byaverage[i] = &students[i];
    for (i=0; i<studentCount; i++)byoriginal[i] = &students[i];
    
    qsort(byNumber, studentCount, sizeof(Student*), compareNumbers);
    qsort(bygiven, studentCount, sizeof(Student*), comparegiven);
    qsort(byfamily, studentCount, sizeof(Student*), comparefamily);
    qsort(byenglish, studentCount, sizeof(Student*), compareenglish);
    qsort(bymath, studentCount, sizeof(Student*), comparemath);
    qsort(byaverage, studentCount, sizeof(Student*), compareaverage);




    while (1) {
        printf ("Select order (0=original order, 1=by number, 2=by given name\n"
                "    3=by family name, 4=by English, 5=by Math, 6=by average): ");

        if (!scanf("%d", &select))
            return 0;
        putchar ('\n');

        switch(select){
        case 0:
            printStudentList(byoriginal, studentCount);
            break;
        case 1:
            printStudentList(byNumber, studentCount);
            break;
        case 2:
            printStudentList(bygiven, studentCount);
            break;
        case 3:
            printStudentList(byfamily, studentCount);
            break;
        case 4:
            printStudentList(byenglish, studentCount);
            break;
        case 5:
            printStudentList(bymath, studentCount);
            break;
        case 6:
            printStudentList(byaverage, studentCount);
            break;
        default:
            return 0;
            }
    }
}
