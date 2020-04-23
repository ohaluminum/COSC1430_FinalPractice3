#include <iostream>
using namespace std;

class Student1430
{
private:

    string lastName;
    string firstName;
    int exams[4];
    double average;
    void updateAverage();

public:

    Student1430();
    Student1430(string first, string last, int arr[]);
    string getFirstName();
    string getLastName();
    double getAverage();
    string finalGrade();
    void setFirstName(string first);
    void setLastName(string last);
    void setExamGrade(int grade, int examNumber);

};

