 /*To perform Multiple Inheritance in C++. Create a student class representing student roll number,
name and branch and an exam class (derived class of student)
representing the scores of the student in various subjects 
(maths, physics and chemistry) and sports class representing the score in  sports.
The sports and exam class is inherited by a result class which adds the exam marks and 
sports score to generate the final result.*/

#include<iostream>
using namespace std;

class Student{   //creating a class
	public:     //access specifier
		int roll_no;  //attributes
		string name;  //attributes
		string branch;  //attributes
		 
		Student(){  //constructor 
			cout<<"Enter roll number: "<<endl;  
			cin>>roll_no;  
			cout<<"Enter name: " <<endl;   
			cin>>name;    
			cout<<"Enter branch:  "<<endl;   
			cin>>branch;   
		}
};
class exam: public Student {   //exam class is inheriting the student class
	public:       //access specifier
		int physics,chemistry,maths;  //attributes
		    exam(){   //constructor 
		
			cout<<"Enter Marks obtained in Physics out of 100 :"<<endl;
			cin>>physics;  
			if(physics>100)
			{
				cout<<"Please Enter a value between 0-100 "<<endl;
				cout<<"Enter Marks obtained in Physics out of 100 :"<<endl;
			    cin>>physics;   
			}
			cout<<"Enter Marks obtained in Chemistry out of 100 :"<<endl;
			cin>>chemistry;
			if(chemistry>100)
			{
				cout<<"Please Enter a value between 0-100 "<<endl;
				cout<<"Enter Marks obtained in Chemistry out of 100 :"<<endl;
			    cin>>chemistry;
			}
			cout<<"Enter Marks obtained in Maths out of 100 :"<<endl;
			cin>>maths;
			if(maths>100)
			{
				cout<<"Please Enter a value between 0-100 "<<endl;
				cout<<"Enter Marks obtained in Maths out of 100 : "<<endl;
			    cin>>maths;
			}
		}
};
class sports{
	public:       //access specifier
		int sports_marks;  //attributes
		sports(){    //constructor 
				cout<<"Enter the marks obtained in Sports out of 100 : "<<endl;
			    cin>>sports_marks;
			    if(sports_marks>100)
			{
				cout<<"Please Enter a value between 0-100 "<<endl;
				cout<<"Enter Marks obtained in Sports out of 100 : "<<endl;
			    cin>>sports_marks;
			}
		
		}
};
class Result: public exam , public sports {  //Result class is inheriting exam class and sports class using multiple inheritance
	int	total_marks;   //attributes
	float percentage;  //attributes
	public:     //access specifier 
		Result_obtained(){
			total_marks=physics+chemistry+maths+sports_marks;  //calculating the total marks obtained
			percentage=((float)total_marks* 100)/400 ;  //calculating the percentage
			/*  Displaying the Output */
			cout<<"\n\n Name of the Student: "<<name<<endl;
			cout<<"Roll No. of the student :" <<roll_no<<endl;
			cout<<"Branch of the student: "<<branch<<endl;
			cout<<"Marks obtained in Physics: "<<physics<<" / 100"<<endl;
			cout<<"Marks obtained in Chemistry: "<<chemistry<<" / 100"<<endl;
			cout<<"Marks obtained in Maths: "<<maths<<" / 100"<<endl;
			cout<<"Marks obtained in Sports: "<<sports_marks<<" / 100"<<endl;
			cout<<"Total Marks obtained : "<<total_marks<<" / 400 "<<endl;
			cout<<"The percentage obtained by the student is : "<<percentage<<" %"<<endl;
		}
};

int main()
{
	Result object;  //creating  a object of the class Result
	object.Result_obtained();  //calling the method using the object created
	return 0;
}
