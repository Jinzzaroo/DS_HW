#include <stdio.h>
int main()
{
    char charType;
    int integerType;
    float floatType;
    double doubleType;
    
    printf("[----- [JinYeongKim] [2019038030] -----]\n\n");

    // 변수의 크기 확인
    printf("Size of char: %ld byte\n",sizeof(charType));        //char형 변수 -> 1 byte 크기 할당
    printf("Size of int: %ld bytes\n",sizeof(integerType));     //int형 변수 -> 4 bytes 크기 할당
    printf("Size of float: %ld bytes\n",sizeof(floatType));     //float형 변수 -> 4 bytes 크기 할당
    printf("Size of double: %ld bytes\n",sizeof(doubleType));   //double형 변수 -> 8 bytes 크기 할당
    printf("-----------------------------------------\n");

    //데이터타입의 크기 확인
    printf("Size of char: %ld byte\n",sizeof(char));        //char 데이터타입 -> 1 byte 크기 할당
    printf("Size of int: %ld bytes\n",sizeof(int));         //int 데이터타입 -> 4 bytes 크기 할당
    printf("Size of float: %ld bytes\n",sizeof(float));     //float 데이터타입 -> 8 bytes 크기 할당
    printf("Size of double: %ld bytes\n",sizeof(double));   //double 데이터타입 -> 8 bytes 크기 할당
    printf("-----------------------------------------\n");  

    //포인터 데이터타입의 크기 확인 -> 4 bytes 크기 할당
    printf("Size of char*: %ld byte\n",sizeof(char*));
    printf("Size of int*: %ld bytes\n",sizeof(int*));
    printf("Size of float*: %ld bytes\n",sizeof(float*));
    printf("Size of double*: %ld bytes\n",sizeof(double*));

    return 0;
}