#include<iostream>
using namespace std;
#include"class.h"
int main()
{
  Class hamza;
  student s;
  Class *start=NULL;
  
  hamza.insert("BSCS 2nd year",54,&start);
  hamza.insert("BSCS 3rd year",54,&start);
  hamza.insert("BSCS 4th year",54,&start);
  //hamza.print(&start);
  Class *a = hamza.search("BSCS 2nd year",&start);
  if(a==NULL)
  {
    cout<<"Class not found !!"<<endl;
  }
  else
  {
  s.insert("Hamza Asif",48,3.02,&a->head);
  s.insert("Fahad",90,2.02,&a->head);
  s.insert("osama ",130,3.32,&a->head);
  s.insert("sufi ",18,3.42,&a->head);
  }
  if(s.search(48,&a->head)!=NULL)
  {
    cout<<"Name : "<<s.search(48,&a->head)->name<<endl;
  }
  hamza.print(&a);
  cout<<""<<endl<<endl;
  s.del(&a->head);
  hamza.print(&a);


/*  cout<<"Please insert a new class !!"<<endl;
   int input=1;
   // while(temp!= "no" )
    //{
    cout<<"Enter class name  : ";
    getline(cin,temp);
    cout<<"Enter Total no of students  : ";
    cin>>input;
    hamza.insert(temp,input,&start);
    cout<<"Want to add another class?? (1 for Yes/2 for no)"<<endl;
    //cin>>temp;
    //} 
    cout<<"Please insert students in class !!"<<endl;
    cout<<"Enter class name to add students : ";
    cin>>temp;
    Class *ptr = hamza.search(temp,&start);
    if(ptr==NULL)
    {
      cout<<"Class not found !!"<<endl;
    }
    else
    {
      temp="Yes";
      while(temp!="no" || temp !="No")
      {
      cout<<"Enter student's name !!";
      cin>>temp;
      cout<<"Enter student's seatno !!";
      cin>>input;
      cout<<"Enter student's GPA !!";
      float f;
      cin>>f;
      s.insert(temp,input,f,&ptr->head);
      cout<<"Want to add more students in same class ?? (yes/no)"<<endl;
      cin>>temp;
      }
    }

    cout<<"Enter class name to print students in a class :";
    cin>>temp;
    ptr = hamza.search(temp,&start);
    if(ptr==NULL)
    {
      cout<<"Class not found !!"<<endl;
    }
    else
    {
      hamza.print(&ptr);
    }
*/
  system("pause");
}