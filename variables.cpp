/*
변수- 변하는 수
용량의 최소 단위: bit
1byte=8bit
1kbyte=1024byte
1mbyte=1024kbyte
1gbyte= 1024mbyte
1tbyte= 1024gbyte
unsigned: 부호가 없다


문자를 표현하는 방법: ascii 코드 표를 가지고 있다.
종류 / 용량/
char-1-문자 저장 변수(-128~127)
bool-1- 참 거짓 볌수(true/false 0이 아닌 모든 수는 true)
short-2- 정수 표현 변수(-32768~32767)
int-4- 정수(약 -22억~+22억)
float-4-실수-뒤에 f붙여 표시
double-8-실수
*/
#include<iostream>
using namespace std;
int main(void)
{
    int a=10;
    cout <<a<<endl;
    return 0;
}