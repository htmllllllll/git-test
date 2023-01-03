//평가문에는 크게 종류가 2가지가 있다. if 문 switch문이 존재한다.
#include <iostream>
#include<time.h>

using namespace std;
int main()
{
    const int iAttack = 0x00000001;;
    const int iArmor=0x00000002;
    const int iHp= 0x00000004;
    const int iMp=0x00000008;
    const int iCritical=0x00000010;
    //즉 다 버프 시킬 때는 ||를 사용
    int iBuf= iAttack|iHp|iCritical;

    if ((iBuf &iAttack) !=0)
    {
        cout <<"Attack 버프가 있습니다."<<endl;

    }
    if ((iBuf&iArmor)!=0)
    {
        cout <<" Armor 버프가 있습니다."<<endl;
    }
    if ((iBuf&iHp)!=0)
    {
        cout <<" hp 버프가 있습니다."<<endl;
    }
    /* else: if 문과 반드시 함께 작동되어야 한다.
     else if 역시 사용 가능하다.
    */
    if (false)
    {
        cout <<"if문 조건이 ture입니다."<<endl;

    }
    else
    {
        cout << "if문 조건이 false입니다."<<endl;
    }
    //난수 발생

    srand((unsigned int)time(0));

    cout<<rand()<<endl;
    cout<<rand()<<endl;
    cout<<rand()<<endl;
    cout<<(rand()%100)<<endl;
    cout<<(rand()%100+100)<<endl;
    cout<<((rand()%10000)/100.f)<<endl;

    int iUpgrade=0;
    cout <<"upgrade 기본 수치를 입력하세요.: "<<endl;
    iUpgrade=8;



    //강화 확률을 구한다.
    float fPersent= rand()%10000/100.f;

    cout<< "Upgrade: "<<iUpgrade<<endl;
    cout<<" percent: "<<fPersent<<endl;
    if (iUpgrade<=3)
    {
        cout <<"강화 성공"<<endl;
    }
    else if(iUpgrade>=4&&iUpgrade<=6)
    {
        if(fPersent<40.f)
        {
            cout<<"강화 성공"<<endl;
            
        }
        else
        {
            cout<< "강화 실패"<<endl;

        }
    }
    else if(iUpgrade>=7&&iUpgrade<=9)
    {
        if(fPersent<10.f)
        {
            cout<<"강화 성공"<<endl;
            
        }
        else
        {
            cout<< "강화 실패"<<endl;
            
        }
    }
    else if(iUpgrade>=10&&iUpgrade<=13)
    {
        if(fPersent<1.f)
        {
            cout<<"강화 성공"<<endl;
            
        }
        else
        {
            cout<< "강화 실패"<<endl;
            
        }
    }
    else if(iUpgrade>=14&&iUpgrade<=15)
    {
        if(fPersent<0.01f)
        {
            cout<<"강화 성공"<<endl;
            
        }
        else
        {
            cout<< "강화 실패"<<endl;
            cout<<0.01f<<endl;
            
        }
    }

    /*
    sitch문: 분기문의 한 종류이다. if문이 조건을 체크하는 분기문이라면
    switch문은 값이 뭔지를 체크하는 분기문이다.
    case와 break문을 같이 세트로 사용하여야 한다.
    default의 경우 그 외의 if 문의 else와 같은 경우를 의미한다.

    */
   /*
   열거체: 연속된 숫자에 이름을 부여할 수 있는 기능이다.
   enum 열거체명{}의 형태로 구성된다.
   열거체명을 이용해서 열거체 타입의 변수 선언도 가능하다.
   즉, 열거체 자체가 사용자 정의 변수 타입이 될 수도 있다.
   열거체는 숫자에 이름을 붙여주는 기능이다.
   */
    enum NUM
   {
     NUM_0=10,//아무것도 부여하지 않을 때에는 0부터 1씩 값이 부여된다.
     NUM_1,
     NUM_2,
     NUM_3//어떠한 특수한 값에 변수명을 지정하기 때문에 CASE에 특정한 이름을 부여해서 알아보기 쉽도록 한다.
   };
  //열거체 타입의 변수를 선언했을 시, 열거체 타입 변수는 무조건 4BYTE을 차지하게 된다.
   NUM eNum;
   cout <<sizeof(NUM)<<endl;

  //typeid(타입 or 변수) name()을 하게 되면
   cout <<typeid(eNum).name()<<endl;
  /*
  열거체의 변수는 열거체의 타입 안에서 결정하게 된다.
  다른 변수를 type casting하게 되면 들어는 간다.
  */
 /*
 반복문: 특정 작업을 반복해서 수행해주는 기능이다.
 종류:for, while, do while 3종류가 존재한다.
 while(조건식){}의 형태로 구성된다.

 while문은 조건식이 ture가 되면 코드가 실행이 되고 false가 되면
 내부 코드를 빠져나오게 된다.
 반복문 안에서 break를 만나게 됭면 특정 반복문을 빠져나오게 된다.

 */

    int iNumber=0;
    while(iNumber<10)
    {
        cout <<iNumber<<endl;
        ++iNumber;
    }
    //화면을 깨긋히 지원준다.
    system("cls");
    
    //난수테이블 생성
    srand((unsigned int)time(0));
    //가위바위보 변수 지정 with flag
    enum SRP
    {
        SPR_S=1,
        SPR_R=2,
        SPR_P=3,
        SPR_END


    };
    
    int iPlayer, iAI;

    
    while(true)
    {
        cout<<"1. 가위"<<endl;
        cout<<"2. 바위"<<endl;
        cout <<"3. 보"<<endl;
        cout<<"4. 종료"<<endl;
        cout<<"메뉴를 선택하세요: ";
        cin>>iPlayer;

        if (iPlayer<SPR_S||iPlayer>SPR_END)
        {
            cout<<"잘못된 값을 입력하였습니다."<<endl;
            //일시정지
            system("pause");
            //continue: 반복문의 시작점으로 이동시켜주는 기능이다.
            continue;


        }

            //봇이 선택을 한다.
        iAI = rand() %3+1;
        switch(iAI)
        {
        case SPR_S:
            cout <<"AI: 가위"<<endl;
            break;
        case SPR_R:
            cout <<"AI: 바위"<<endl;
            break;
        case SPR_P:
            cout <<"AI: 보"<<endl;
            break;
        }
        int iWin= iPlayer-iAI;

        if (iWin==1||iWin==-2)
            cout<< "Player 승리"<<endl;
        else if (iWin==0)
        {
            cout<<"비김"<<endl;

        }
        else
            cout <<"AI 승리"<<endl;

        break;
        /*
        for문 역시 반복문의 한 종류이다.
        무한루프를 돌릴 때에는 for(;;)를 해주면 
        무한으로 돌아가게 된다.
        */

    }
    return 0;
}