#include <stdio.h>
int main()
{
    int i;      //변수
    int *ptr;   //포인터 변수
    int **dptr; //이중포인터 변수
    i = 1234;

    printf("[----- [JinYeongKim] [2019038030] -----]\n\n");

    //포인터 변수 ptr에 주소를 할당하기 전
    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);            //변수 i의 값 -> 1234
    printf("address of i == %p\n", &i);         //변수 i의 주소
    printf("value of ptr == %p\n", ptr);        //포인터 변수 ptr의 값
    printf("address of ptr == %p\n", &ptr);     //포인터 변수 ptr의 주소

    ptr = &i; /* ptr is now holding the address of i */
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);        //변수 i의 값 -> 1234
    printf("address of i == %p\n", &i);     //변수 i의 주소
    printf("value of ptr == %p\n", ptr);    //포인터 변수 ptr의 값 -> 변수 i의 주소
    printf("address of ptr == %p\n", &ptr); //포인터 변수 ptr의 주소
    printf("value of *ptr == %d\n", *ptr);  //포인터 변수 ptr이 가리키는 값(역참조 값) -> 변수 i의 값 -> 1234

    dptr = &ptr; /* dptr is now holding the address of ptr */
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);            //변수 i의 값 -> 1234
    printf("address of i == %p\n", &i);         //변수 i의 주소
    printf("value of ptr == %p\n", ptr);        //포인터 변수 ptr의 값 -> 변수 i의 주소
    printf("address of ptr == %p\n", &ptr);     //포인터 변수 ptr의 주소
    printf("value of *ptr == %d\n", *ptr);      //포인터 변수 ptr이 가리키는 값(역참조 값) -> 변수 i의 값 -> 1234
    printf("value of dptr == %p\n", dptr);      //포인터 변수 dptr의 값 -> 포인터 변수 ptr의 주소
    printf("address of dptr == %p\n", &dptr);   //포인터 변수 dptr의 주소
    printf("value of *dptr == %p\n", *dptr);    //포인터 변수 dptr이 가리키는 값(역참조 값) -> 포인터 변수 ptr의 값 -> 변수 i의 주소
    printf("value of **dptr == %d\n", **dptr);  //포인터 변수 dptr이 가리키는 값이 가리키는 값 -> 포인터 변수 ptr이 가리키는 값 -> i의 값 -> 1234
    
    *ptr = 7777; /* changing the value of *ptr   /   포인터 변수 ptr이 가리키는 값 -> i의 값 -> 기존 1234에서 7777로 초기화 */
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);            //i의 값 -> 7777
    printf("value of *ptr == %d\n", *ptr);      //포인터 변수 ptr이 가리키는 값 -> i의 값 -> 7777
    printf("value of **dptr == %d\n", **dptr);  //포인터 변수 dptr이 가리키는 값이 가리키는 값 -> 포인터 변수 ptr이 가리키는 값 -> i의 값 -> 7777
    
    **dptr = 8888; /* changing the value of **dptr   /   포인터 변수 ptr이 가리키는 값 -> i의 값 -> 기존 7777에서 8888로 초기화 */
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);            //i의 값 -> 8888
    printf("value of *ptr == %d\n", *ptr);      //포인터 변수 ptr이 가리키는 값 -> i의 값 -> 8888
    printf("value of **dptr == %d\n", **dptr);  //포인터 변수 dptr이 가리키는 값이 가리키는 값 -> 포인터 변수 ptr이 가리키는 값 -> i의 값 -> 8888

    return 0;
}