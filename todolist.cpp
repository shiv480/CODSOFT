#include<iostream>
#include<string.h>
#include<string>
using namespace std;
void printshow(string task[],int count)
{
    if(count==0)
        {
            cout<<"                         LIST IS EMPTY THERE IS NO TASK TO VIEW"<<endl;
            cout<<"____________________________________________________________________________________"<<endl;
        }
    else
    {        
    for(int i=0;i<count;i++)
        {
            cout<<"Task "<<i<<":"<<task[i]<<endl<<endl;
        }
        cout<<"____________________________________________________________________________________"<<endl;
    }

}
void print(string complete[],int count)
{
    if(count==0)
        {
            cout<<"                         LIST IS EMPTY THERE IS NO TASK TO VIEW"<<endl;
            cout<<"____________________________________________________________________________________"<<endl;
        }
    else
    {        
    for(int i=0;i<count;i++)
        {
            cout<<"Task "<<i<<":"<<complete[i]<<endl<<endl;
        }
        cout<<"____________________________________________________________________________________"<<endl;
    }
}

int main()
{
    cout<<"____________________________________________________________________________________"<<endl;
    cout<<"                                   *TO DO LIST*"<<endl;
    cout<<"____________________________________________________________________________________"<<endl;
    string tasks[10];
    string complete[10];
    
    int count=0;
    int sum=0;
    int option=-1;
    while(option!=0)
    {
        cout<<"1.Add task"<<endl;
        cout<<"2.View task"<<endl;
        cout<<"3.Delete task"<<endl;
        cout<<"4.Mark Task As Completed"<<endl;
        cout<<"5.See Completed Task List"<<endl;
        cout<<"0.Exit"<<endl;
        cout<<"Enter your option :";
        cin>>option;
        
        switch(option)
        {
            case 1:
                    cout<<"____________________________________________________________________________________"<<endl;
                    cout<<"                                   Add Task"<<endl;
                    cout<<"____________________________________________________________________________________"<<endl;
                    if(count>9)
                    {
                        cout<<"Task is full"<<endl<<endl;
                        cout<<"____________________________________________________________________________________"<<endl;
                        break;
                    }
                    else
                    {
                        cout<<"ENTER YOUR TASK"<<endl;
                        cin.ignore();
                        getline(cin,tasks[count]);
                        count++;
                        cout<<"Task added successfully!"<<endl<<endl;
                        cout<<"____________________________________________________________________________________"<<endl;
                        break;
                    } 

            case 2:
                    cout<<"____________________________________________________________________________________"<<endl;
                    cout<<"                                   View Task"<<endl;
                    cout<<"____________________________________________________________________________________"<<endl;
                    printshow(tasks,count);   
                    break;  

            case 3:
                    cout<<"____________________________________________________________________________________"<<endl;
                    cout<<"                                   Delete Task"<<endl;
                    cout<<"____________________________________________________________________________________"<<endl;
                    if(count==0)
                    {
                        cout<<"                                 LIST IS EMPTY THERE IS NO TASK TO DELETE"<<endl;
                        cout<<"____________________________________________________________________________________"<<endl;
                    }
                    else
                    {  
                        cout<<"Enter your task index to delete task :";
                        int choice;
                        cin>>choice; 
                            if(choice<0||choice>9)
                                {
                                cout<<"There is no task at this index please check your index no"<<endl;
                                cout<<"____________________________________________________________________________________"<<endl;
                                break;  
                                } 
                            else
                                {
                                    for(int i=choice;i<count;i++)
                                    {
                                        tasks[i]=tasks[i+1];
                                    }
                                    cout<<"Task deleted successfully"<<endl;
                                }
                        count--;
                        cout<<"____________________________________________________________________________________"<<endl;
                    }
                    break;
                case 4:

                    cout<<"____________________________________________________________________________________"<<endl;
                    cout<<"                                  Mark Task As Completed"<<endl;
                    cout<<"____________________________________________________________________________________"<<endl;
                    cout<<"Enter task index to show that the task is completed:";
                    int select;
                    cin>>select;
                    complete[sum]=tasks[select];
                    sum++;
                    if(select<0||select>9)
                        {
                          cout<<"There is no task at this index please check your index no"<<endl;  
                        } 
                    else
                        {
                            cout<<"Task "<<select<<":"<< tasks[select]<<endl;
                                cout<<"Do you complete your task(y/n) :";
                                char a,b;
                                cin>>a;
                                if(a=='y')
                                    {
                                    cout<<"YOUR Task "<<select<<" is completed"<<endl;
                                    cout<<"____________________________________________________________________________________"<<endl;
                                    for(int i=select;i<count;i++)
                                        {
                                            tasks[i]=tasks[i+1];
                                        }
                                    }    
                                else if (a=='n')
                                break; 
                        }       
                        count--;
                        break; 
                case 5:

                        cout<<"____________________________________________________________________________________"<<endl;
                        cout<<"                                  Completed Task"<<endl;
                        cout<<"____________________________________________________________________________________"<<endl;
                        print(complete,sum);
                        break;
        }
    }
}