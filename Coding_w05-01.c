#include<stdio.h>

int main() {  
    char name = 'T'; // ประกาศตัวแปรตัวอักษรตัวแรกของชื่อ
    int age = 18; // ประกาศตัวแปรอายุ
    float weight = 55.5; // ประกาศตัวแปรน้ำหนัก

    printf("Student %c is %d  years old.\n", name,age ); // แสดงผล โดย %c แสดงชื่อ และ %d อายุของนักเรียน
    printf("His weights is %.1f kg.\n", weight); // แสดงผลน้ำหนักของนักเรียนโดย %.1f ให้เป็นทศนิยม 1 ตำแหน่ง

    return 0;
}