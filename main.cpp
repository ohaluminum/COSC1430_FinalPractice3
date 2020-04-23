#include <iostream>
#include <fstream>
#include <sstream>

#include "Student1430.h"

using namespace std;

class FileNotFoundException
{
private:
    string error_message;

public:
    FileNotFoundException()
    {
        error_message = "";
    }

    FileNotFoundException(string error)
    {
        error_message = error;
    }

    string getMessage()
    {
        return error_message;
    }
};


int main() {
    try
    {
        string fileName;
        cin >> fileName;

        ifstream inFS(fileName);
        istringstream inSS;

        if (!inFS.is_open())
        {
            throw FileNotFoundException("File not found.");
        }

        string line;
        string firstName;
        string lastName;
        int exams[4];
        int counter = 0;

        while (!inFS.eof())
        {

            getline(inFS, line);

            inSS.str(line);

            inSS >> firstName >> lastName >> exams[0] >> exams[1] >> exams[2] >> exams[3];
            inSS.clear();
            Student1430 test(firstName, lastName, exams);

            cout << test.getFirstName() << " " << test.getLastName() << " has an average of " << test.getAverage() << " and will get a " << test.finalGrade() << endl;

            if (test.finalGrade() == "A")
            {
                counter++;
            }
        }

        inFS.close();

        cout << endl;
        cout << "Total A in class: " << counter << endl;
    }
    catch (FileNotFoundException e)
    {
        cout << e.getMessage() << endl;
    }

    return 0;
}