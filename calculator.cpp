#include<iostream>
using namespace std;
void cal()
{
    
    float a,b,operation,option;
    cout<<"ENTER NO A :";
    cin>>a;
    cout<<"ENTER NO B :";
    cin>>b;
    cout<<"CHOOSE WHICH OPERATION YOU ARE GOING TO PERFORM"<<endl;
    cout<<"1.ADDITION"<<endl<<"2.SUBSTRACTION"<<endl<<"3.MULTIPLICATION"<<endl<<"4.DIVISION"<<endl;
    cout<<"enter 1 for addition"<<endl<<" 2 for substraction"<<endl<<" 3 for multiplication"<<endl<<" 4 for division"<<endl;
    cout<<"YOUR OPTION IS :";
    cin>>option;
    if(option==1)
        {
         cout<<"LETS DO ADDITION"<<endl; 
         cout<<"YOUR A IS :"<<a<<endl;
         cout<<"YOUR B IS :"<<b<<endl;
         cout<<"ADDITION OF THESE TWO NUMBERS IS :"<<a+b<<endl;
        
        }
    else if(option==2)  
        {
         cout<<"LETS DO SUBSTRACTION"<<endl; 
         cout<<"YOUR A IS :"<<a<<endl;
         cout<<"YOUR B IS :"<<b<<endl;
         cout<<"SUBSTRACTION OF THESE TWO NUMBERS IS :"<<a-b<<endl;
         
        }  
    else if(option==3)
        {
         cout<<"LETS DO MULTIPLICATION"<<endl; 
         cout<<"YOUR A IS :"<<a<<endl;
         cout<<"YOUR B IS :"<<b<<endl;
         cout<<" MULTIPLICATION OF THESE TWO NUMBERS IS :"<<a*b<<endl;
         
        }
    else if(option==4)
        {
         cout<<"LETS DO DIVISION"<<endl; 
         cout<<"YOUR A IS :"<<a<<endl;
         cout<<"YOUR B IS :"<<b<<endl;
         cout<<" DIVISION OF THESE TWO NUMBERS IS :"<<a/b<<endl;
         
        }
    else
        {
         cout<<"YOU CHOOSE WRONG OPTION"<<endl;   
        }
  
}

int main()

{
   cout<<"                          **CALCULATOR**"<<endl;
    cal();
    char choice;
    for(int i=0;i<=20;i++)
        {
            cout<<"do you want to continue this process(press y/n) :";
            cin>>choice;
            if(choice=='y')
                {
                    cal();
                }
            else if(choice=='n')
                {
                    cout<<"THANKYOU!"<<endl;
                    break;
                }    
        }
}    