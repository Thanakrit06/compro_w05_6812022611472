#include <stdio.h>
int main() {
    char First_Name[30] ;                                     // ประกาศตัวแปรชื่อ ขอบเขต 30 ตัวอักษร
    int age ;                                                  // ประกาศตัวแปรอายุ
    float hight;                                               // ประกาศตัวแปรส่วนสูง
    char subject[10];                                           // ประกาศตัวแปรชื่อวิชา ขอบเขต 10 ตัวอักษร
    float grade;                                                // ประกาศตัวแปรเกรดที่ได้
    char gradeA;                                                // ประกาศตัวแปรตัวอักษรเกรด                                       
    
    printf("Enter your First Name age and hight:");          // แสดงผลว่าให้กรอก ตัวอักษรตัวเเรกของชื่อ อายุ ส่วนสูง
    scanf("%s %d %f", &First_Name,&age, &hight);                //รับค่า ตัวอักษรตัวแรกของชื่อ อายุ และส่วนสูง

    printf("Enter your Subject, grade and symbolized:");      // แสดงผลว่าให้กรอก ชื่อวิชา เกรดที่ได้ ตัวอักษรเกรด
    scanf("%s %f %c", &subject, &grade, &gradeA);               //รับค่าชื่อวิชา เกรดที่ได้ และตัวอักษรเกรด

    printf("%s is %d years old and %.1f centimeters tall\n", First_Name,age, hight);        //แสดงผลชื่อ อายุ และส่วนสูง
    printf("In subject %s, %s got %.2f which is symbolized as '%c' ",subject,First_Name, grade, gradeA);  //แสดงผลชื่อวิชา เกรดที่ได้ และตัวอักษรเกรด

    return 0;               
}