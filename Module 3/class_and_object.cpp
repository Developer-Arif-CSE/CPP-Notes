// #include<bits/stdc++.h>
// using namespace std;
// class Student
// {
//     public:
// char name [100];
// int roll;
// double cgpa;
// };
// int main()
// {
//      Student a;
//      a.roll=29;
//      a.cgpa=3.95;
//      char tmp[100]="arif";
//      strcpy (a.name,tmp);
//      cout<< a.name<<" "<<a.roll<<" "<<a.cgpa<<endl;

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// class Student
// {
//    public:
//    char name [100];
//    int roll;
//    double cgpa;
// };
// int main()
// {
//      Student a,b;

//     cin>>getline(a.name,100);
//     cin>>a.roll>>a.cgpa;
//     getchar();

//     cin>>getline(b.name,100)
//     cion>>b.roll>>b.cgpa;

//     cout<<a.name<<" "<<a.roll<<" "<<a.cgpa << endl;
//     cout<<b.name<<" "<<b.roll<<" "<<b.cgpa << endl;
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    char name[100];
    int roll;
    double cgpa;
};
int main()
{
    Student a, b;
    cin.getline(a.name, 100);
    cin >> a.roll >> a.cgpa;
    getchar();
    cin.getline(b.name, 100);
    cin >> b.roll >> b.cgpa;

    cout << a.name << " " << a.roll << " " << a.cgpa << endl;
    cout << b.name << " " << b.roll << " " << b.cgpa << endl;
    return 0;
}