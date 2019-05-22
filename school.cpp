#include<iostream>
#include<string.h>

using namespace std;

class student
{
	protected:
		int roll_no=0,age=0,marks=0;
		char name[100];
	
	public:
		int get_roll_no()
		{
			return this->roll_no;
		}
		int get_age()
		{
			return this->age;
		}
		int get_marks()
		{
			return this->marks;
		}
		char* get_name()
		{
			return this->name;
		}
		void enter_roll(int roll_no)
		{
			this->roll_no=roll_no;
		}
		void enter_age(int age)
		{
			this->age=age;
		}
		void enter_marks(int marks)
		{
			this->marks=marks;
		}
		void enter_name(char *a)
		{
			strcpy(this->name,a);
		}
		
		
};

class teacher
{
	protected:
		int id=0,aget=0,credits=0;
		char namet[100];
	
	public:
		int get_id()
		{
			return this->id;
		}
		int get_aget()
		{
			return this->aget;
		}
		int get_credits()
		{
			return this->credits;
		}
		char* get_namet()
		{
			return this->namet;
		}
		void enter_id(int id)
		{
			this->id=id;
		}
		void enter_aget(int age)
		{
			this->aget=age;
		}
		void enter_credits(int credits)
		{
			this->credits=credits;
		}
		void enter_namet(char *a)
		{
			strcpy(this->namet,a);
		}
		
		
};

class attendence
{
	private:
		int attendance[300];
	public:
		attendence()
		{
			for(int i=0;i<300;i++)
				attendance[i]=0;
		}	
		
	public:
		int get_attendence(int id)
		{
			return attendance[id];
		}
		void modify_attendence(int id , int  val)
		{
			attendance[id-1]=val;
		}
	
	
};


int main()
{
	int c=0,s_count=0,t_count=0,roll,val;
	
	char n[100];
	
	student s[100];
	teacher t[100];
	attendence a;
	
	cout<<"                                                  SCHOOL MANAGEMENT SYSTEM"<<endl;
	
	while(1)
	{
		cout<<"\nSelect your option:-"<<endl<<"1.Enroll a student"<<endl<<"2.Enroll a teacher"<<endl<<"3.Enter Marks of a Student"<<endl<<"4.Enter Credits of a Student"<<endl;
		cout<<"5.Modify attendence by roll_no in case of student or id in case of teacher"<<endl<<"6.Get Students info"<<endl<<"7.Get Teachers info"<<endl<<"8.Exit";
		
		cin>>c;
		
		if(c==1)
		{
			cout<<"\nEnter Student roll no : ";
			cin>>roll;
			s[s_count].enter_roll(roll);
			cout<<"\nEnter Student Name : ";
			cin>>n;
			s[s_count].enter_name(n);
			cout<<"\n!!!Enrolled Successfully !!!\n";
			s_count++;
		}
		
		else if(c==2)
		{
			cout<<"\nEnter Teacher id: ";
			cin>>roll;
			t[t_count].enter_id(roll);
			cout<<"\nEnter Teacher Name : ";
			cin>>n;
			t[t_count].enter_namet(n);
			cout<<"\n!!!Enrolled Successfully !!!\n";
			t_count++;
		}
		
		else if(c==3)
		{
			cout<<"\nEnter Student roll no : ";
			cin>>roll;
			cout<<"\nEnter Student Marks : ";
			cin>>val;
			s[roll-1].enter_marks(val);
			cout<<"!!! Done !!! \n";
		}
		else if(c==4)
		{
			cout<<"\nEnter Teacher id : ";
			cin>>roll;
			cout<<"\nEnter Teacher Credits : ";
			cin>>val;
			t[roll-1].enter_credits(val);
			cout<<"!!! Done !!! \n";

		}
		else if(c==5)
		{
			cout<<"\nEnter roll no/id : ";
			cin>>roll;
			cout<<"\nEnter Attendence : ";
			cin>>val;
			a.modify_attendence(roll,val);
			cout<<"!!! Done !!! \n";

		}
		else if(c==6)
		{
			for(int i=0;i<s_count;i++)
			{
				cout<<"\nRoll - "<<s[i].get_roll_no()<<" , Name - "<<s[i].get_name()<<" , Marks - "<<s[i].get_marks()<<" , Attendence - "<<a.get_attendence(i);
			}
			cout<<endl;
		}
		else if(c==7)
		{
			for(int i=0;i<t_count;i++)
			{
				cout<<"\nid - "<<t[i].get_id()<<" , Name - "<<t[i].get_namet()<<" , Credits - "<<t[i].get_credits()<<" , Attendence - "<<a.get_attendence(i);
			}
			cout<<endl;
		}
		else if(c==8)
		{
			exit(0);
		}
		
		else
		{
			cout<<"\nInvalid Choice\n";
		}
		
	}
	
	
	return 0;
	
}
