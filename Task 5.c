#include<stdio.h>

//Defining function(Your_GPA) that calculates your GPA
float Your_GPA(int Math_Credit_Hours, int Programming_Credit_Hours, float Math_Score, float Programming_Score)
{
	float GPA;
	GPA = ((Math_Score*Math_Credit_Hours) + (Programming_Score*Programming_Credit_Hours)) / (Math_Credit_Hours+Programming_Credit_Hours);
	return GPA;
}

//Define Course structure that has its credit hours and score
struct Course
{
	
//Declaration of some variables in the structure (Course)
	int Math_Credit_Hours;
	int Programming_Credit_Hours;
	float Math_Score;
	float Programming_Score;
};


//Define Student structure that has its array of courses and GPA and Course structure with variable (courses)
struct Student
{
	
//Declaration of some variables in the structure (Student)
	char course[2];
	float GPA;
	struct Course courses;	
};

int main()
{
	
//Declaration of some variables(credit_hours and score) with different data types(integer and float)
	int Math_Credit_Hours ,Programming_Credit_Hours;
    float Math_Score , Programming_Score;
    
//Make variable from student called (S)
    struct Student S;

//Enroll the student to two courses(Mathematics and Programming)
    S.course[0] = "Mathematics";
    S.course[1] = "Programming";

//Take the math score from the user
    Math_Score = S.courses.Math_Score;
    printf("Enter your score in math (out of 4)\n");
    scanf("%f" , &Math_Score);
    Math_Credit_Hours = S.courses.Math_Credit_Hours = 3;

//Take the programming score from the user
    Programming_Score = S.courses.Programming_Score;
    printf("\nEnter your score in programming (out of 4)\n");
    scanf("%f" , &Programming_Score);
    Programming_Credit_Hours = S.courses.Programming_Credit_Hours = 4;


//Calling function (Your_GPA) with its parameters to calculate GPA and print it on the screen
    float GPA; 
	GPA=Your_GPA(Math_Credit_Hours,  Programming_Credit_Hours,  Math_Score,  Programming_Score);
    printf("\nYour GPA is %f \n" , GPA);

    return 0;
}




