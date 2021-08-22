#include <stdio.h>

//Defining function(Your_GPA) that calculates your GPA
float Your_GPA(int Math_Credit_Hours, int Programming_Credit_Hours, float Math_Score, float Programming_Score)
{
	float GPA;
	GPA = ((Math_Score*Math_Credit_Hours) + (Programming_Score*Programming_Credit_Hours)) / (Math_Credit_Hours+Programming_Credit_Hours);
	return GPA;
}


//Define (Course) structure that has its credit hours(array) and score(array)
struct Course
{
	
//Declaration of tthe two arrays in the structure (Course)
    int Credit_Hours[2];
    float Score[2];
};


//Define (Student) structure that has its array of courses and GPA and Course structure with object (courses)
struct Student
{
	
//Declaration of some variables in the structure (Student)
    char course[2];
    float GPA;
    struct Course courses;
};


int main()
{
	
//Declaration of the two arrays(credit_hours and score) with different data types(integer and float)
	int Credit_Hours[2]; 
    float Score[2];
    
//Make object from student called (S)
    struct Student S;

//Enroll the student to two courses(Mathematics and Programming)
    S.course[0] = "Mathematics";
    S.course[1] = "Programming";

//Take the math score from the user
    Score[0] = S.courses.Credit_Hours[0] ;
    printf("Enter your score in math (out of 4)\n");
    scanf("%f" , &Score[0]);
    Credit_Hours[0] = S.courses.Credit_Hours[0] = 3;

//Take the programming score from the user
    Score[1] = S.courses.Score[1];
    printf("\nEnter your score in programming (out of 4)\n");
    scanf("%f" , &Score[1]);
    Credit_Hours[1] = S.courses.Credit_Hours[1] = 4;


//Calling function (Your_GPA) with its parameters to calculate GPA and print it on the screen
	float GPA;
    GPA= Your_GPA(Credit_Hours[0] , Credit_Hours[1] , Score[0] , Score[1]);
    printf("\nYour GPA is %f \n" , GPA);

    return 0;
}



