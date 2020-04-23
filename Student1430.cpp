#include "Student1430.h"

Student1430::Student1430()
{
    firstName = "";
    lastName = "";

    for (int i = 0; i < 4; i++)
    {
        exams[i] = 0;
    }

    average = 0;
}

Student1430::Student1430(string first, string last, int arr[])
{
    firstName = first;
    lastName = last;

    for (int i = 0; i < 4; i++)
    {
        exams[i] = arr[i];
    }

    updateAverage();
}

string Student1430::getFirstName()
{
    return firstName;
}

string Student1430::getLastName()
{
    return lastName;
}

double Student1430::getAverage()
{
    updateAverage();
    return average;
}

string Student1430::finalGrade()
{
    string letterGrade;

    if (average >= 90)
    {
        letterGrade = "A";
    }
    else if (average >= 80)
    {
        letterGrade = "B";
    }
    else if (average >= 70)
    {
        letterGrade = "C";
    }
    else if (average >= 60)
    {
        letterGrade = "D";
    }
    else
    {
        letterGrade = "E";
    }

    return letterGrade;
}

void Student1430::setFirstName(string first)
{
    firstName = first;
}

void Student1430::setLastName(string last)
{
    lastName = last;
}

void Student1430::setExamGrade(int grade, int examNumber)
{
    exams[examNumber - 1] = grade;
}

void Student1430::updateAverage()
{
    int total = 0;
    for (int i = 0; i < 4; i++)
    {
        total += exams[i];
    }

    average = (double)total / 4;
}





