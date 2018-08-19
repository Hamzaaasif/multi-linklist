#include<iostream>
using namespace std;
class student
{
  public:
  student()
  {
    this->name="";
    this->seatno=0;
    this->GPA=0.0;
    this->next=NULL;
  }
  student(student& s)
  {
  this->name=s.name;
  this->seatno=s.seatno;
  this->GPA=s.GPA;
  this->next=s.next;
  }
  void insert(string name,int seat,float gpa,student **start)
  {
    student *ptr=new student;
    ptr->name = name;
    ptr->seatno=seat;
    ptr->GPA=gpa;
    ptr->next=NULL;
    if(*start==NULL)
    {
      *start = ptr;
    }
    else
    {
      student *curr=*start;
      while(curr->next!=NULL)
      {
        curr=curr->next;
      }
      curr->next=ptr;
    }
  }

void operator =(const student& s)
{
  this->name=s.name;
  this->seatno=s.seatno;
  this->GPA=s.GPA;
  this->next=s.next;
}
student* search(int seat,student **start)
{
  student *temp=NULL;
  if(start==NULL)
  {
  }
  else
 {
  student *curr = *start;
  while(curr->seatno!=seat)
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
  void print(student **start)
  {
    if(start==NULL)
    {
      cout<<"List is empty!!"<<endl;
    }
    else
    {
      student *curr=*start;
      cout<<"Name :"<<curr->name<<endl<<"Seat No :" <<curr->seatno<<endl<<"GPA :" <<curr->GPA<<endl;
      while(curr->next!=NULL)
      {
        curr=curr->next;
        cout<<"Name :"<<curr->name<<endl<<"Seat No :" <<curr->seatno<<endl<<"GPA :" <<curr->GPA<<endl;
      }
    }
  }

void del(int seat , student **start)
{
  student *curr = *start;
		if ((*start)->seatno == seat)
		{
			*start = (*start)->next;
      curr=NULL;
			delete[] curr;
		}
		else
		{
			int temp = 0;
			curr = (*start)->next;
			student *perv = *start;
			while (curr->seatno != seat)
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
				curr =NULL;
        delete[] curr;
			}
		}
}

void del(student **start)
{
  if(start==NULL)
  {
  }
  else
  {
      student *curr = *start;
			curr = (*start)->next;
			student *perv = *start;
      perv=NULL;
      free (perv);
			while (1)
			{
        perv = curr;
        perv=NULL;
        free(perv);
				curr = curr->next;
				if (curr == NULL)
				{
         free (curr) ;
					break;
				}
        
  		}	
  	}
}

  string name;
  int seatno;
  float GPA;
  student *next;
};