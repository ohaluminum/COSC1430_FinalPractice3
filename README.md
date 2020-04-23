# COSC1430_FinalPractice3


#### File Input Stream &amp; Error Exception

:pill: *ATTENTION!!!* 

:bomb: *If you want to use `inSS` multiple times to deal with different strings, make sure that adding `inSS.clear()` before play with another string!*

> In this exercise you will have to create from scratch and utilize a class called Student1430. 

### Student1430

*private:*

- `lastName` (string)
- `firstName` (string)
- `exams` (an integer array of fixed size of 4)
- `average` (double)

*public:*

- A default constructor

> It sets `firstName` and `lastName` to empty strings, and all `exams` and `average` to 0.

- A constructor with 3 parameters

> A string for `firstName`, a string for `lastName`, and an array of 4 integers to set the `exams`. 

> After assigning the values to the right attributes, the constructor should also **update** the average using the private helper function `updateAverage` (see below).

- A function `getFirstName` that returns `firstName`.

- A function `getLastName` that returns `lastName`.

- A function `getAverage` that returns the updated `average`, based on the current exam grades.

- A function `finalGrade` that returns the final letter grade of the students based on their average.

> A if >= 90, B if < 90 and >= 80, C if < 80 and >= 70, D if < 70 and >= 60, F if < 60.

- A void function `setFirstName` with one parameter to set `fistName` to a new value.

- A void function `setLastName` with one parameter to set `lastName` to a new value.

- A void function `setExamGrade` with two parameters.

> The first is the new exam grade, the second is the exam number (between 1 and 4).

- A void private helper function `updateAverage`

> Updates the average based on the scores of the four exams when necessary. 

> ***You should consider calling it in the `getAverage` to make sure to always work with the correct average value.***

> ***This function must be private and used only within the class. This is the only private function of the class.***

### Main

> After you are done designing this class, you will create a main function to read student names and exam grades from a file, and print them to standard output. 

> The file name is given as only standard input. 

> If the file does not exists, the program should throw a FileNotFoundException, which is an instance of the trivial class (include this class in the same file as main)

```
class FileNotFoundException
{

};
```

> Include in your main a try/catch block that throws a `FileNotFoundException` if it is not possible to open the file.

> The catch block should print the message `File not found.` and terminate the program.

> If found, the file is in the following format (separate by spaces):
```
<firstName> <lastName> <exam1> <exam2> <exam3> <exam4>
<firstName> <lastName> <exam1> <exam2> <exam3> <exam4>
...
```
> The expected output is:
```
<firstName> <lastName> has an average of <average> and will get a <finalGrade>
<firstName> <lastName> has an average of <average> and will get a <finalGrade>
...
<empty line>
Total A in class: <totalA>
The last line outputs the total number of A in the current file.
```
> ***Hints:***

> ***Loop over the file and store the information of each student into a Student1430 object, then use the get functions of Student1430 to print the desired output.***

> ***You only need one Student1430 object. You can use temporary variables to store the individual data necessary to create the Student1430 object.***

> Use a counter to keep track of the number of A while you are looping over the file.

> There is NO NEED to format the average value for output.
