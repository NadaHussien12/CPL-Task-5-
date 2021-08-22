#include <stdio.h>


float Your_GPA(int Math_Credit_Hours, int Programming_Credit_Hours, float Math_Score, float Programming_Score)
{
	float GPA;
	GPA = ((Math_Score*Math_Credit_Hours) + (Programming_Score*Programming_Credit_Hours)) / (Math_Credit_Hours+Programming_Credit_Hours);
	return GPA;
}
//structure about course details
struct Course
{
    int Credit_Hours[2];
    float Score[2];
};
//structure about student details
struct Student
{
    char course[2];
    float GPA;
    struct Course courses;
};

int main()
{
    float Score[2] , GPA;//declaration of score and variable GPA
    int Credit_Hours[2];//declaration of credit hours of courses

    struct Student S;//make variable from student

    //Enroll student to courses
    S.course[0] = "Mathematics";
    S.course[1] = "Programming";

    //details about math course
    Score[0] = S.courses.Credit_Hours[0] ;
    printf("Enter your score in math (out of 4)\n");
    scanf("%f" , &Score[0]);
    Credit_Hours[0] = S.courses.Credit_Hours[0] = 3;

    //details about programming course
    Score[1] = S.courses.Score[1];
    printf("\nEnter your score in programming (out of 4)\n");
    scanf("%f" , &Score[1]);
    Credit_Hours[1] = S.courses.Credit_Hours[1] = 4;


    //calling function Calc_GPA to calculate GPA and print it
    GPA= Your_GPA(Credit_Hours[0] , Credit_Hours[1] , Score[0] , Score[1]);
    printf("\nYour GPA is %f \n" , GPA);

    return 0;
}
