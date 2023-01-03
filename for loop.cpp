#include<iostream>
using namespace std;
int main()
{
    /*for(int i=1;i<=9;++i)
    {
        cout <<"2*"<<i<<"="<<2*i<<endl;
    }
    for(int i=1;i<=50;++i)//마지막 부분에도 식이 들어갈 수 있다.
    {
        cout <<2*i<<endl;
    }

    for(int i=1; i<100; ++i)//3과 7의 공배수를 출력하는 for 문
    {
        if (i%21==0)
        {
            cout << i << endl;
        }
    }*/


// 별찍기 코드
    for (int i=1; i<=10;++i)
    {
        for(int j=1; j<=10; ++j)
        {
            cout << " "<<i*j<< " ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout <<endl;
    for(int i= 0; i<=5; ++i)
    {
        for (int j=1;  j<=i; ++j)
        {
            cout << "*";
        }
        cout <<endl;
    }
    cout<<endl;
    cout <<endl;
    for (int i=1; i<=5; ++i)
    {
        for (int j=5; j>=i; --j)
        {
            cout <<"*";

        }
        cout <<endl;
    }
    cout <<endl;
    cout <<endl;

    for (int i=0; i<=3; ++i)
    {
        for (int j=0; j<3-i; ++j)
        {
            cout <<" ";
        }
        for (int k=0; k<2*i+1; ++k)
        {
            cout <<"*";
        }
        cout <<endl;
    }

    /*
    2단 3단 4단 
    5단 6단 7단 
    8단 9단 10단

    */
   for(int i=2; i<11; i+=3)
   {
    for (int j=1; j<=9; ++j)
    {
        cout <<i<<" * "<<j<< "="<<i*j<<"   ";
        cout <<i+1<<" * "<<j<< "="<<(i+1)*j<< "   ";
        cout <<i+2<<" * "<<j<< "="<<(i+2)*j<<endl;

    }
    cout <<endl;
   }
   //다이아몬드 별찍기
   int iLine=7;
   int iCount=0;
   for (int i=0; i<iLine; ++i)
   {
    //공백: 3,2,1,0,1,2,3
    //별: 1,3,5,7,5,3,1

    iCount=i;
    //i 값이 7기준 4,5,6
        if (i>iLine/2)
        {
            iCount=iLine-1-i;
        }
        for (int j=0; j<3-iCount; ++j)
        {
            cout <<" ";
        }
        for (int j=0; j<2*iCount+1; ++j)
        {
            cout <<"*";
        }
        cout <<endl;

   }
/*
    do while문: 반복문의 한 종류이다.
    형태: do {}while(조건식)
    while문으로 진입부터 조건식을 체크하지만 do while 같은 경우 
    처음 한 번은 무조건 동작이 되고, 그 다음 조건을
    체크하는 구조이다.
*/




/*
배열: 여러개의 변수를 한 번에 생성할 수 있는 기능이다.
형태: 변수타입 배열명[개수]의 형태로 선언할 수 있다.
*/
/*
배열 뿐만 아니라 일반 변수들도 선언을 하고 값을 초기화하지
않을 경우 쓰레기 값이 들어가게 된다.
*/
    int iArray[10]={1,2,3,4,5};//나머지 값은 0
    //iArray[1]=1234;
    for(int i = 0; i<10; ++i)
    {
        cout <<iArray[i]<<endl;
    }
    for(int i=0; i<10; i++)
    {
        for (int j=0; j<10; j++)
        {
            cout << "["<< i<< "]"<< "["<< j<<"]   ";
        }
        cout<<endl;
    }


    return 0;
  

}