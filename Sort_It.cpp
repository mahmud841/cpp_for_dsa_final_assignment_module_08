#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    int total_marks;
    void calculateTotalMarks()
    {
        total_marks = math_marks + eng_marks;
    }
};

bool StudentsComparison(Student a, Student b)
{
    if (a.total_marks != b.total_marks)
    {
        return a.total_marks > b.total_marks; // descending sort
    }
    else
    {
        return a.id < b.id; // same mark,ascending sort
    }
}

int main()
{
    int N;
    cin >> N;
    Student students[N];
    // student data
    for (int i = 0; i < N; i++)
    {
        cin >> students[i].nm >> students[i].cls >> students[i].s >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
        students[i].calculateTotalMarks();
    }
    sort(students, students + N, StudentsComparison);

    // sorted output
    for (int i = 0; i < N; i++)
    {
        cout << students[i].nm << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " "
             << students[i].math_marks << " " << students[i].eng_marks << endl;
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// struct Student

//  {
//     string name;
//     int cls;
//     char s;
//     int id;
//     int math_marks;
//     int eng_marks;
// };

// bool StudentsMarkCompare(Student a, Student b)
//  {
//     int totalA = a.math_marks + a.eng_marks;
//     int totalB = b.math_marks + b.eng_marks;

//     //descending order
//     if (totalA != totalB)
//      {
//         return totalA > totalB;
//     }
//     return a.id < b.id;
// }

// int main()
// {
//     int N;
//     cin >> N;
//     Student students[100];

//     //Student data
//     for (int i = 0; i < N; i++)
//      {
//         cin >> students[i].name >> students[i].cls >> students[i].s >> students[i].id >> students[i].math_marks >> students[i].eng_marks;
//     }
// //Custom Operator
//     sort(students, students + N, StudentsMarkCompare);

//     //sorted data
//     for (int i = 0; i < N; i++)
//      {
//         cout << students[i].name << " " << students[i].cls << " " << students[i].s << " " << students[i].id << " "
//              << students[i].math_marks << " " << students[i].eng_marks << endl;
//     }

//     return 0;
// }

//                         //***HappY Coding***