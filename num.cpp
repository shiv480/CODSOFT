#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void easy(int random)
{
    int a;
    cout<<"now guess the number"<<endl;
    for(int i=0;i<100;i++)
    {
    cout<<"your no :";
    cin>>a;
    if(a==random)
        {
            cout<<"congratulations!"<<endl<<" you guessed coreect number"<<endl;
            break;
        }
    else if(random<a) 
        {
            cout<<"your guess is too high "<<endl;
        } 
    else if(random>a)
        {
            cout<<"your guess is too low "<<endl;
        } 
    }         
}
void medium(int random)
{
    int a;
    cout<<"now guess the number"<<endl;
    for(int i=0;i<100;i++)
    {
    cout<<"your no :";
    cin>>a;
    if(a==random)
        {
            cout<<"congratulations!"<<endl<<" you guessed coreect number"<<endl;
            break;
        }
    else if(random<a) 
        {
            cout<<"your guess is too high "<<endl;
        } 
    else if(random>a)
        {
            cout<<"your guess is too low "<<endl;
        } 
    }        
}
void hard(int random)
{
  int a;
    cout<<"now guess the number"<<endl;
    for(int i=0;i<100;i++)
    {
    cout<<"your no :";
    cin>>a;
    if(a==random)
        {
            cout<<"congratulations!"<<endl<<" you guessed coreect number"<<endl;
            break;
        }
    else if(random<a) 
        {
            cout<<"your guess is too high "<<endl;
        } 
    else if(random>a)
        {
            cout<<"your guess is too low "<<endl;
        } 
    }          
}
int main()
{
    
    srand(time(0));
    int random1 = 1+(rand()%100);
    int random2 =1+(rand()%500);
    int random3 =1+(rand()%1000);

    cout<<"                                                 ** NUMBER GUESSING GAME **"<<endl;
    cout<<"enter your no between '1 to 100  lets start the game"<<endl;
    cout<<"CHOOSE LEVEL"<<endl;
    for(int i=0;i<100;i++)
    {
    cout<<"1.easy                                                        2.medium"<<endl;
    cout<<"3.hard                                                        4.terminate this game"<<endl<<endl;
    cout<<"now enter "<<endl<<"1.for easy level    2.for medium level     3.for hard level      4.for terminate this game"<<endl;
    int choice;
    cout<<"enter your choice :";
    cin>>choice;
    if(choice==1)
        {
            cout<<"                                                 EASY LEVEL"<<endl;
            cout<<"INSTRUCTION : In this level you should have to guess the number between 1 to 100 "<<endl;
            easy(random1);
        }
    else if(choice==2)    
        {
            cout<<"                                                 MEDIUM LEVEL"<<endl;
            cout<<"INSTRUCTION : In this level you should have to guess the number between 1 to 500"<<endl;
            medium(random2);
        }
    else if(choice==3)
        {
            cout<<"                                                 HARD LEVEL"<<endl;
            cout<<"INSTRUCTION : In this level you should have to guess the number between 1 to 1000"<<endl;
            hard(random3);
        }  
    else if(choice==4)
        {
            cout<<"end of this game"<<endl;
            break;
        }    
    }  
}