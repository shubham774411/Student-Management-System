/****************STUDENT MANAGEMENT SYSTEM*******************/
#include <iostream>
using namespace std;
struct Student
{
 int id;
 char name[50];
 int roll;
 long long int mobile;
};
class DYP
{
    Student stu[50];
    int n,i,x,y;
    public:
    void getdata()
    {
        cout<<"\nEnter total no. of students ";
        cin>>n;
        cout<<"\nEnter given information";
        for(i=0;i<n;i++)
        {
            cout<<"\nEnter Name of Student: ";
            cin>>stu[i].name;
            cout<<"\nEnter ID No.of Student: ";
            cin>>stu[i].id;
            stu[i].roll=i+1;
            cout<<"\nEnter Contact no. of Student: ";
            cin>>stu[i].mobile;
        }
    }
    void putdata()
    {
        cout<<"\nThe given information are:";
        for(i=0;i<n;i++)
        cout<<"\nName: "<<stu[i].name<<"\tID No.: "<<stu[i].id<<"\tRoll No.: "<<stu[i].roll<<"\tMobile No.: "<<stu[i].mobile;
    }
    void search()
    {
        int flag=0;
        cout<<"\nEnter the Roll no. of Student: ";
        cin>>x;
        for(i=0;i<n;i++)
        {
            if(x==stu[i].roll)
            {
                flag=1;
                cout<<"\nName: "<<stu[i].name<<"\tID No.: "<<stu[i].id<<"\tRoll No.: "<<stu[i].roll<<"\tMobile No.: "<<stu[i].mobile;
            }
        }
        if(flag==0)
        {
            cout<<"\nData not found";
        }
    }
    void update()
    {
        cout<<"\nEnter the Roll no. to be updated: ";
        cin>>y;
        int flag=0;
        for(i=0;i<n;i++)
        {
            if(y==stu[i].roll)
            {
                flag=1;
                cout<<"\nEnter Name of Student: ";
            cin>>stu[i].name;
            cout<<"\nEnter ID No.of Student: ";
            cin>>stu[i].id;
            cout<<"\nEnter Roll No. of Student: ";
            cin>>stu[i].roll;
            cout<<"\nEnter Contact no. of Student: ";
            cin>>stu[i].mobile;
            }
        }
        if(flag==0)
        cout<<"\nRoll no. not found";
    }
};
int main()
{
    int ch,choice=1;
    DYP info;
    info.getdata();
    info.putdata();
    while(choice==1)
    {
    cout<<"\n1 Search 2 Update info";
    cout<<"\nEnter your Choice: ";
    cin>>ch;
    switch(ch)
    {
        case 1: info.search();
                break;
        case 2: info.update();
                info.putdata();
                break;
        default: cout<<"\nEnter correct choice.";
    }
    cout<<"\nDo you wish to continue..If YES press 1";
    cin>>choice;
    }
    return 0;
}










