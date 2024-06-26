#include<iostream>
using namespace std;
void game(char p1,char p2)
{
    int choice1,choice2;
        char a[3][3]={{'1','2','3'},{'4','5','6'},{'7','8','9'}};
        cout<<"\t\t       |       |        "<<endl;
        cout<<"\t\t"<<"   "<<a[0][0]<<"   |   "<<a[0][1]<<"   |    "<<a[0][2]<<endl;
        cout<<"\t\t-------|-------|------  "<<endl;
        cout<<"\t\t       |       |        "<<endl;
        cout<<"\t\t"<<"   "<<a[1][0]<<"   |   "<<a[1][1]<<"   |    "<<a[1][2]<<endl;
        cout<<"\t\t-------|-------|-------  "<<endl;
        cout<<"\t\t       |       |        "<<endl;
        cout<<"\t\t"<<"   "<<a[2][0]<<"   |   "<<a[2][1]<<"   |    "<<a[2][2]<<endl;
    cout<<"now locate your symbol at position where you want using the no shown in the table"<<endl;
        for(int i=0;i<5;i++)
        {
                cout<<"player 1 enter proper no from table to locate your symbol :";
                        cin>>choice1;
                        switch(choice1)
                        {
                        case 1:
                                 a[0][0]=p1;
                                 break;
                        case 2:
                                 a[0][1]=p1;
                                break;
                         case 3:
                                  a[0][2]=p1;
                                 break;
                         case 4:
                                a[1][0]=p1;
                                break;
                         case 5:
                                 a[1][1]=p1;
                                break;
                        case 6:
                                 a[1][2]=p1;
                                break; 
                         case 7:
                                 a[2][0]=p1;
                                 break;
                         case 8:
                                 a[2][1]=p1;
                                break;
                         case 9:
                                a[2][2]=p1;
                                 break;  
                        default:
                                cout<<"invalid input"<<endl;                
                        }       

                        cout<<"\t\t       |       |        "<<endl;
                        cout<<"\t\t"<<"   "<<a[0][0]<<"   |   "<<a[0][1]<<"   |    "<<a[0][2]<<endl;
                        cout<<"\t\t-------|-------|------  "<<endl;
                        cout<<"\t\t       |       |        "<<endl;
                        cout<<"\t\t"<<"   "<<a[1][0]<<"   |   "<<a[1][1]<<"   |    "<<a[1][2]<<endl;
                        cout<<"\t\t-------|-------|-------  "<<endl;
                        cout<<"\t\t       |       |        "<<endl;
                        cout<<"\t\t"<<"   "<<a[2][0]<<"   |   "<<a[2][1]<<"   |    "<<a[2][2]<<endl;

                        if((a[0][0]==a[0][1]&&a[0][1]==a[0][2]) ||(a[1][0]==a[1][1]&&a[1][1]==a[1][2])||(a[0][0]==a[1][0]&&a[1][0]==a[2][0])||(a[2][0]==a[2][1]&&a[2][1]==a[2][2])||(a[0][2]==a[1][2]&&a[1][2]==a[2][2])||(a[0][0]==a[1][1]&&a[1][1]==a[2][2])||(a[0][2]==a[1][1]&&a[1][1]==a[2][0])||(a[0][1]==a[1][1]&&a[1][1]==a[2][1]))
                            {
                                cout<<"PLAYER 1 IS WINNER"<<endl;
                                break;
                            }

                if(i==4)
                break;                
                cout<<"player 2 enter proper no from table to lacate your symbol :";
                cin>>choice2;
                
                         switch(choice2)
                         {
                            case 1:
                                 a[0][0]=p2;
                                 break;
                            case 2:
                                 a[0][1]=p2;
                                 break;
                            case 3:
                                 a[0][2]=p2;
                                 break;
                             case 4:
                                a[1][0]=p2;
                                 break;
                            case 5:
                                 a[1][1]=p2;
                                 break;
                            case 6:
                                a[1][2]=p2;
                                 break; 
                             case 7:
                                 a[2][0]=p2;
                                 break;
                             case 8:
                                     a[2][1]=p2;
                                     break;
                             case 9:
                                    a[2][2]=p2;
                                     break;  
                            default:
                                     cout<<"invalid input"<<endl;                     
                            }     
                            
                            cout<<"\t\t       |       |        "<<endl;
                            cout<<"\t\t"<<"   "<<a[0][0]<<"   |   "<<a[0][1]<<"   |    "<<a[0][2]<<endl;
                            cout<<"\t\t-------|-------|------  "<<endl;
                            cout<<"\t\t       |       |        "<<endl;
                            cout<<"\t\t"<<"   "<<a[1][0]<<"   |   "<<a[1][1]<<"   |    "<<a[1][2]<<endl;
                            cout<<"\t\t-------|-------|-------  "<<endl;
                            cout<<"\t\t       |       |        "<<endl;
                            cout<<"\t\t"<<"   "<<a[2][0]<<"   |   "<<a[2][1]<<"   |    "<<a[2][2]<<endl;
                            if((a[0][0]==a[0][1]&&a[0][1]==a[0][2]) ||(a[1][0]==a[1][1]&&a[1][1]==a[1][2])||(a[0][0]==a[1][0]&&a[1][0]==a[2][0])||(a[2][0]==a[2][1]&&a[2][1]==a[2][2])||(a[0][2]==a[1][2]&&a[1][2]==a[2][2])||(a[0][0]==a[1][1]&&a[1][1]==a[2][2])||(a[0][2]==a[1][1]&&a[1][1]==a[2][0])||(a[0][1]==a[1][1]&&a[1][1]==a[2][1]))
                            {
                                cout<<"PLAYER 2 IS WINNER"<<endl;
                                break;
                            }
        }
}
int main()
{
    cout<<"                           TIC TAC TOE GAME"<<endl;
    char player1,player2,symbol1,symbol2;
    for(int i=0;i<100;i++)
    {
        cout<<"CHOOSE YOUR SYMBOL FROM X OR O TO PLAY THIS GAME "<<endl;
        cout<<"PLAYER 1 ENTER YOUR SYMBOL :";
        cin>>symbol1;
        cout<<"PLAYER 2 ENTER YOUR SYMBOL :";
        cin>>symbol2;

        if(symbol1=='O'&&symbol2=='X')
            {
            game(symbol1,symbol2);
            }
        else if(symbol1=='X'&&symbol2=='O')
            {
                    game(symbol1,symbol2);
            }
        else
            {
                    cout<<"sorry there is some mistake when you choose your symbol"<<endl;
            }
       
        cout<<"do you want to repeat this game again(press Y/N):";
        char option;
        cin>>option;
        if(option=='N')
            {
                cout<<"THANKYOU!"<<endl;
                break;
            }    
    }
}