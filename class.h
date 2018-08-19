#include<iostream>
using namespace std;
#include"student.h"
class Class
{
  public:
   void insert(string name,int students,Class **start)
  {
    Class *ptr=new Class;
    ptr->name = name;
    ptr->totalstudents=students;
    ptr->next=NULL;
    ptr->head=NULL;
    if(*start==NULL)
    {
      *start = ptr;
    }
    else
    {
      Class *curr=*start;
      while(curr->next!=NULL)
      {
        curr=curr->next;
      }
      curr->next=ptr;
    }
  }

/*void addstudent(string Sname,string Cname,string seat,float gpa,Class **start)
{
  student s1;
  Class c;
 // Class *c = c.search(Cname,start);
  s1.insert(Sname,seat,gpa,&head);
}*/

Class* search(string name,Class **start)
{
  Class *temp=NULL;
  if(start==NULL)
  {
  }
  else
 {
  Class *curr = *start;
  while(curr->name!=name)
  {
    if(curr->next==NULL)
    {
      break;
    }
    curr=curr->next;
  }
  if(curr->next!=NULL)
  {
    temp=curr;
  }
 }
 return temp;
}

void print(Class **start)
{
  if(start==NULL)
    {
      cout<<"List is empty!!"<<endl;
    }
    else
    {
      Class *curr=*start;
      student s;
      cout<<"          Class Name :"<<curr->name<<"    Total students :" <<curr->totalstudents<<endl<<endl;
        s.print(&curr->head);
    }
}

void del(string name,Class **start)
{
  Class *curr = *start;
		if ((*start)->name == name)
		{
			*start = (*start)->next;
      if(curr->head!=NULL)
      {
        student s;
        s.del(&curr->head);
      }
      curr=NULL;
			delete[] curr;
		}
		else
		{
			int temp = 0;
			curr = (*start)->next;
			Class *perv = *start;
			while (curr->name != name)
			{
				curr = curr->next;
				perv = perv->next;
				if (curr == NULL)
				{
					temp++;
					break;
				}
			}
			if (temp > 0)
			{
				cout << "Not Found!!" << endl;
			}
			else
			{
				perv->next = curr->next;
        if(curr->head!=NULL)
      {
        student s;
        s.del(&curr->head);
      }
				curr =NULL;
        delete[] curr;
			}
		}
}
  student *head;
  string name;
  int totalstudents;
  Class *next;

};