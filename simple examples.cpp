#include<iostream>
#include<time.h>
using namespace std;
int main()
{
    //Lotto Program
    srand((unsigned int )time(0));

    int iLotto[45]={};
    /*for (int i=0; i<6; ++i)
    {
        cout << (rand()%+1)<<endl;
    }*/

    for(int i=0; i<45; ++i)
    {
        iLotto[i]=i+1; 
    }
    //shuffle
    //swap 알고리즘을 활용한다.
    int iTemp, idx1, idx2;
    //100번 정도를 골고루 섞어준다.
    for(int i=0; i<100; ++i)
    {
        idx1= rand() % 45;
        idx2= rand() % 45;
        iTemp=iLotto[idx1];
        iLotto[idx1]= iLotto[idx2];
        iLotto[idx2]= iTemp;
    }
    for(int i=0; i<5; ++i)
    {
        cout<<iLotto[i]<< "   ";
    }
    cout<< "보너스 번호: "<< iLotto[6]<<endl;


    //숫자 야구
    int iAiNum[9]={};
    for(int i=0; i<9; ++i)
    {
        iAiNum[i]=i+1;
    }
    int ibTemp, num1, num2;
    for(int i=0; i<100; ++i)
    {
        num1= rand()%9;
        num2= rand()%9;
        ibTemp=iAiNum[num1];
        iAiNum[num1]=iAiNum[num2];
        iAiNum[num2]=ibTemp;
    }
    int iAiBaseballCount[3]={};
    for (int i=0; i<3; ++i)
    {
        iAiBaseballCount[i]=iAiNum[i];
    }

    bool over=false; 
    while(over==false)
    {   
        int playerBaseball[3]={};
        cout <<"숫자 3개를 입력하세요. 0은 종료 ";
        for (int i=0; i<3; i++)
        {
            cin>>playerBaseball[i];
        }
        if (playerBaseball[0]==0||playerBaseball[1]==0||playerBaseball[2]==0)
        {
            cout<<"게임 종료!"<<endl;
            break;
        }
        int strike=0, ball=0;

        for (int i=0; i<3; i++)
        {
            for (int j=0; j<3; j++)
            {
                if (iAiBaseballCount[i]==playerBaseball[j]&&i==j)
                {
                    strike++;
                }
                else if (iAiBaseballCount[i]==playerBaseball[j])
                {
                    ball++;
                }

            }
        }
        if (strike==0&& ball==0)
        {
        cout <<"out!"<<endl;
        }
        else if(strike==3)
        {
        cout <<"correct!"<<endl;
        cout <<" the answer was   "<< playerBaseball[0]<<" "<< playerBaseball[1]<<" "<<playerBaseball[2]<<endl;
        over=true;
        }
        else
        {
        cout <<"strike: "<<strike<< "ball: "<<ball<<endl;
        }
    }






    return 0;
}