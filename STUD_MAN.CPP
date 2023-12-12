#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<process.h>
class student
{
	public :
		int no,tot,per,ma,p,ch,co,e;
		char s[500],f[500],m[500],ci[500],cl[500];

		void getdata();
		void display();
		int return_roll();
		void search();
		int modify();
};
void student :: getdata()
{
	cout<<"Enter Name Of Student : ";
	cin>>s;
	cout<<endl;

	cout<<"Enter Roll No : ";
	cin>>no;
	cout<<endl;

	cout<<"Enter Father's Student : ";
	cin>>f;
	cout<<endl;

	cout<<"Enter Mother's Student : ";
	cin>>m;
	cout<<endl;

	cout<<"Enter Class : ";
	cin>>cl;
	cout<<endl;

	cout<<"Enter City : ";
	cin>>ci;
	cout<<endl;

	cout<<"Enter 5 Subject Marks(Out Of 100)";
	cout<<endl;

	cout<<"Maths : ";
	cin>>ma;
	cout<<endl;

	cout<<"Physics : ";
	cin>>p;
	cout<<endl;

	cout<<"Chemistry : ";
	cin>>ch;
	cout<<endl;

	cout<<"Computer : ";
	cin>>co;
	cout<<endl;

	cout<<"English : ";
	cin>>e;
	cout<<endl;
}
int student :: return_roll()
{
	return no;
}
void student :: display()
{
	cout<<"Roll No : "<<no<<endl;
	cout<<"Student Name : "<<s<<endl;
	cout<<"Father's Name : "<<f<<endl;
	cout<<"Mother's Name : "<<m<<endl;
	cout<<"Class : "<<cl<<endl;
	cout<<"City : "<<ci<<endl;
	cout<<"Maths : "<<ma<<endl;
	cout<<"Physics : "<<p<<endl;
	cout<<"Chemistry : "<<ch<<endl;
	cout<<"Computer : "<<co<<endl;
	cout<<"English : "<<e<<endl;
}

void student :: search()
{
	cout<<"Student Name : "<<s;
	cout.width(30);
	cout<<"Roll No : "<<no<<endl;
	cout<<"Father's Name : "<<f;
	cout.width(30);
	cout<<"Class : "<<cl<<endl;
	cout<<"Mother's Name : "<<m;
	cout.width(30);
	cout<<"City : "<<ci<<endl;
	cout<<endl;
	cout<<"___________________________________________________________\n";
	cout<<"-----------------------------------------------------------\n";
	cout<<"NAME OF SUBJECTS";
	cout.width(18);
	cout<<"MAXIMUM MARKS";
	cout.width(23);
	cout<<"MARKS OBTAINED\n";
	cout<<"___________________________________________________________\n";
	cout<<"-----------------------------------------------------------\n";
	cout<<endl;
	cout<<"Maths ";
	cout.width(17);
	cout<<"100";
	cout.width(25);
	cout<<ma<<endl;
	cout<<"Physics ";
	cout.width(17);
	cout<<"100";
	cout.width(25);
	cout<<p<<endl;
	cout<<"Chemisrty ";
	cout.width(15);
	cout<<"100";
	cout.width(25);
	cout<<ch<<endl;
	cout<<"Computer ";
	cout.width(19);
	cout<<"100";
	cout.width(25);
	cout<<co<<endl;
	cout<<"English ";
	cout.width(15);
	cout<<"100";
	cout.width(25);
	cout<<e<<endl;
	cout<<"---------------------------------------------------------------\n";
	tot=ma+p+ch+co+e;
	cout.width(27);
	cout<<"Total= 500";
	cout.width(22);
	cout<<"Total= "<<tot<<endl;
	cout<<"_______________________________________________________________\n";
	per=tot/5;
	cout<<endl<<endl;
	cout.precision(2);
	cout<<"Percentage= "<<per<<"%\n";
	if(per>=85)
	{
		 cout<<"Result: Excellent";
	}
	else if(per>=75&&per<85)
	{
		  cout<<"Result: Very Good";
	}
	else if(per>=65&&per<75)
	{
		  cout<<"Result: Good";
	}
	else
	{
		  cout<<"Result: fair";
	}
}
int student :: modify()
{
	  char ch;
	  int b,l=0;
	  cout<<"\nYou are Modifying this Record\n\n";
	  cout<<"Name of Student : "<<s<<endl;
	  cout<<"Father's name : "<<f<<endl;
	  cout<<"Mother's Name : "<<m<<endl;
	  cout<<"Class : "<<cl<<endl;
	  cout<<"City : "<<ci<<endl;
	  cout<<"Subjects Marks(out of 100) : "<<endl;
	  cout<<"Maths : "<<ma<<endl;
	  cout<<"Physics : "<<p<<endl;
	  cout<<"Chemisrty : "<<ch<<endl;
	  cout<<"Computer : "<<co<<endl;
	  cout<<"English : "<<e<<endl;
	  cout<<"\nAre you sure to modify the record(Y/N): ";
	  cin>>ch;
	  if(ch=='y'||ch=='Y')
	  {
		cout<<"\nWhat you want to change\n";
		cout<<"1.Name of Student\n2.Father's Name\n3.Mother's Name\n4.City\n5.Subjects Marks\n\n";
		cout<<"Enter your choice: ";
		cin>>b;
		switch(b)
		{
			 case 1:
				cout<<"\nEnter New Name of Student:";
				gets(s);
				break;
			 case 2:
				cout<<"\nEnter Father's Name: ";
				gets(f);
				break;
			 case 3:
				cout<<"\nEnter Mother's Name: ";
				gets(m);
				break;
			 case 4:
				cout<<"\n Enter City : ";
				gets(ci);
				break;
			 case 5:
				cout<<"Enter New Subjects Marks:\n";
				cout<<"Maths : ";
				cin>>ma;
				cout<<"Physics : ";
				cin>>p;
				cout<<"Chemisrty : ";
				cin>>ch;
				cout<<"Computer : ";
				cin>>co;
				cout<<"English : ";
				cin>>e;
				break;
			 default:
				cout<<"\nWrong Choice";
				break;
		}
	  }
	  else
	  {
		cout<<"\nRecord not Modify";
		l=1;
	  }
	  return(l);
}


void main()
{
	clrscr();
	int x,no,no1,k;
	long pos;
	student s1;
	while(1)
	{
		clrscr();
		cout<<"\t\t\t*************************\n";
		cout<<"\t\t\tSTUDENT MANAGEMENT SYSTEM\n";
		cout<<"\t\t\t**************************\n\n\n";
		cout<<"MENU\n\n";
		cout<<"1.Press 1 for Add a New Record of Studemt\n";
		cout<<"2.Press 2 for Search a Record of Student\n";
		cout<<"3.Press 3 for Edit Record of Student\n";
		cout<<"4.Press 4 for Delete the Record of Student\n";
		cout<<"5.Press 5 for Exit\n\n";
		cout<<"Enter your choice: ";
		cin>>x;

		switch(x)
		{
			case 1:
				clrscr();
				cout<<"Adding a New Record\n\n";
				ofstream f1;
				f1.open("student.txt",ios::app|ios::binary);
				s1.getdata();
				f1.write((char*)&s1,sizeof(s1));
				f1.close();
				cout<<"\n\nDetails that you have added\n\n";
				s1.display();
				break;
			case 2:
				int f=0;
				clrscr();
				cout<<"Searching the Details of Student\n\n";
				ifstream f2;
				f2.open("student.txt",ios::in|ios::binary);
				cout<<"Enter Student Roll Number: ";
				cin>>no;

				while(f2.read((char*)&s1,sizeof(s1)))
				{
					no1=s1.return_roll();
					if(no1==no)
					 {
						cout<<"\nRecord found !!!\n\n";
						s1.search();
						f=1;
						getch();
						break;
					 }
				}
				f2.close();
				if(f==0)
					cout<<"\nSorry ! Record Not Found\n";
					getch();
					break;
			case 3:
				int y=0;
				clrscr();
				cout<<"Editing the Student Record\n\n";
				fstream f3;
				f3.open("student.txt",ios::out|ios::in|ios::binary);
				cout<<"\nEnter Roll No. of Student: ";
				cin>>no;
				while(f3)
				{
					pos=f3.tellg();
					f3.read((char*)&s1,sizeof(s1));
					no1=s1.return_roll();
					if(no1==no)
					{
						k=s1.modify();
						y=1;
						f3.seekg(pos);
						f3.write((char*)&s1,sizeof(s1));
						getch();
						if(k==0)
						{
							cout<<"\nRecord Modified Successfully";
							getch();
							clrscr();
							cout<<"Modify Record is shown below-\n\n";
							s1.search();
							getch();
						}
						break;
					}
				}
				f3.close();
				if(y==0)
				cout<<"\nSorry ! Record not Found";
				getch();
				break;
			case 4:
				int g=0;
				char d;
				clrscr();
				cout<<"Deleting the Student Record\n\n";
				ofstream f4;
				f4.open("temp.txt",ios::out|ios::binary);
				ifstream f5;
				f5.open("student.txt",ios::out|ios::binary);
				cout<<"Enter Student Roll no. you want to delete from record: ";
				cin>>no;
				while(f5.read((char*)&s1,sizeof(s1)))
				{
					no1=s1.return_roll();
					if(no1==no)
					{
						g=1;
						cout<<"\nThe record you want to delete is:\n\n";
						s1.display();
						cout<<"\nAre you sure to delete the record(Y/N):";
						cin>>d;
						if(d=='n'||d=='N')
						{
							f4.write((char*)&s1,sizeof(s1));
							cout<<"\nThe Record is not deleted";
						}
						else
							cout<<"\nStudent Record successfully Deleted";
					}
					else
						f4.write((char*)&s1,sizeof(s1));
				}
				if(g==0)
					cout<<"\nSorry ! The Record you want to delete is not Found";
					f4.close();
					f5.close();
					remove("student.txt");
					rename("temp.txt","student.txt");
				getch();
				break;

			case 5:
				exit(0);
				break;
			default:
				cout<<"Wrong choice";
				getch();
				break;
		}
		getch();
	  }
}





