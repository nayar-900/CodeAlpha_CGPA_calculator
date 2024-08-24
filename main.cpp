#include <iostream>
using namespace std;
double grade_to_point(char grade)
{
    switch(grade)
    {
        case 'A': return 4.0;
        case 'B': return 3.0;
        case 'C': return 2.0;
        case 'D': return 1.0;
        case 'F': return 0.0;
        default: return 0.0;
    }
}
int main()
{
    cout << "Hey welcome to nayar's calculator ... Here you can calculate your CGPA and grade" << endl;
    int courses;
    cout << endl;
    cout << "Enter the number of courses taken: ";
    cin >> courses;
    cout << endl;
    string names[courses];
    int credits[courses];
    char grades[courses];
    for (int i = 0; i < courses; i++)
    {
        cout << "Enter details for course " << i + 1 << endl;
        cout << endl;
        cout << "Course name: ";
        cin >> names[i];
        cout << "Course credits: ";
        cin >> credits[i];
        cout << "Course grade (A, B, C, D, F): ";
        cin >> grades[i];
        cout << endl;
    }
    double total_points = 0.0;
    int total_credits = 0;
    cout << endl;
    cout << "Course details:" << endl;
    cout << endl;
    for (int i = 0; i < courses; i++)
    {
        double grade_points = grade_to_point(grades[i]) * credits[i];
        total_points += grade_points;
        total_credits += credits[i];
        cout << "Course: " << names[i] << endl;
        cout << "Credits: " << credits[i] << endl;
        cout << "Grade: " << grades[i] << endl;
        cout << "Grade Points: " << grade_points << endl;
        cout << endl;
    }
    double CGPA = total_points / total_credits;
    cout << "Total Credits: " << total_credits << endl;
    cout << "Total Grade Points: " << total_points << endl;
    cout << "CGPA: " << CGPA << endl;
    return 0;
}
