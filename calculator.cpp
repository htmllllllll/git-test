/*
연산자
-사칙 연산자
-관계 연산자-크기 비교
-논리 연산자-and, or, not(&&, ||, !=)
*/
#include<iostream>
using namespace std;
int main()
{/*   cout <<"10< 20= "<<(10<20)<<endl;
    cout <<"숫자를 입력하세요."<<endl;
    int number;
    cin >>number;
    cout<< "(10~20)"<<(10<=number&&number<=20)<<endl;
    return 0;

    87을 2진수 16진수로 변환해보자
    먼저 2진수로 변환한다
    1010111
    1010111을 오른쪽으로부터 4자리씩 끊어서 계산한다.
    16진수 1자리는 2진수 4자리이다.

    0101 0111 -첫째자리 5, 둘째자리 7

    값 대 값으로 연산하여 값으로 나온다.
    종류 and(&), or(|), not(~), xor(^)
    xor: 서로 같을 때 0출력, 서로 값이 다르면 1출력

    87&53
    87:1010111
    53:10101
    먼저 위처럼 2진수로 바꾼 후에 계산 실행
    1010111
    0110101
    0010101
    10101이 나온다
    10진수로 변환하면 21이 나온다.

*/
    //cout <<"87&53= "<<(87&53)<<endl;

    //상수: 변하지 않는 수, 값을 한 번 지정해놓응면 바꿀 수 없다.
    //상수는 선언과 동시에 지정해야 한다.
    const int iAttack = 0x00000001;;
    const int iArmor=0x00000002;
    const int iHp= 0x00000004;
    const int iMp=0x00000008;
    const int iCritical=0x00000010;
    //즉 다 버프 시킬 때는 ||를 사용
    int iBuf= iAttack|iHp|iCritical;
    //연산자 축약형: 연산자를 줄여서 사용할 수 있다.
    //xor: 10101^00100=10001
    iBuf^=iHp;

    cout <<"iAttack: "<<(iBuf&iAttack)<<endl;
    cout <<"iAromor: "<<(iBuf&iArmor)<<endl;
    /*
     쉬프트 연산자: <<, >> 값 대 값으로 연산하여 값으로 나오게 한다.
     이 ㅣ 연산자 또한 이진수의 단위를 연산하게 된다.
     20<<2=80
     20<<3=160
     20을 2진수로 변환한다.
     10100
     20>>2=5;
     20>>3=2;


     */
    int iHigh= 187;
    int iLow=13560;
    int iNumber= iHigh;
    

    //iNumber에는 187이 들어가 있다. 이 값을 왼쪽 방향으로 16비트 이동시키면
    //상위 16비트에 값이 들어가게 된다.
    iNumber<<=16;
    //하위 16비트를 채운다.
    iNumber|=iLow;
    //iHigh값을 출력한다.
    cout <<"High: "<<(iNumber>>16)<<endl;
    cout<<"Low: "<<(iNumber&0x0000ffff)<<endl;
    return 0;
}
