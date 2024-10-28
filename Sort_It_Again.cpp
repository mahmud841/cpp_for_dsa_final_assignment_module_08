#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm, cls, sec;
    int id, math_marks, eng_marks;
};
void swap(Student &a, Student &b)
{
    Student temp = a;
    a = b;
    b = temp;
}

int main()
{
    int N;
    cin >> N;
    Student students[1000];
    // Students data
    for (int i = 0; i < N; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].sec >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
    }
    // Custom sort
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = i + 1; j < N; j++)
        {
            // eng_marks (descending)
            if (students[i].eng_marks < students[j].eng_marks)
            {
                swap(students[i], students[j]);
            }
            else if (students[i].eng_marks == students[j].eng_marks && students[i].math_marks < students[j].math_marks)
            {
                swap(students[i], students[j]);
            }
            // sort by id (ascending)
            else if (students[i].eng_marks == students[j].eng_marks && students[i].math_marks == students[j].math_marks && students[i].id > students[j].id)
            {
                swap(students[i], students[j]);
            }
        }
    }
    // sorted  data
    for (int i = 0; i < N; i++)
    {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].sec << " " << students[i].id << " " << students[i].math_marks << " " << students[i].eng_marks << endl;
    }
    return 0;
}
//**HappY Coding */