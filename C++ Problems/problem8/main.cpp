
#include<bits/stdc++.h>
using namespace std;
struct date{
    int year;
    int month;
    int day;

};
struct student{
    int id;
    string name;
    date birth_date;
    bool gender;
    double GPA;

};
void input_all_students(student*students_array,int number_of_students) {
    for (int i = 0; i < number_of_students; i++) {
        cout << "enter the students ID";
        cin >> students_array[i].id;
        cout << "enter the students name";
        cin >> students_array[i].name;
        cout << "enter the birth date";
        cin >> students_array[i].birth_date.day>>students_array[i].birth_date.month>>students_array[i].birth_date.year;
        cout << "enter the students gender(0 for male : 1 for female ";
        cin >> students_array[i].gender;
        cout << "enter the students GPA";
        cin >> students_array[i].GPA;
    }
}
void outputAllStudents(student* studentsArray, int number_of_students){
         for(int i=0;i<number_of_students;i++) {
             cout << studentsArray[i].id << " " << studentsArray[i].name << " " << studentsArray[i].birth_date.day
                  << "/" << studentsArray[i].birth_date.month << "/" << studentsArray[i].birth_date.year << " "
                  << (studentsArray[i].gender ? "female" : "male") << " " << studentsArray[i].GPA << '\n';
         }


}
void sortStudentsByGpa(student* s, int n){
    for(int i=0;i<n-1;i++){
        for(int k=0;k<n-i-1;k++){
            if(s[k].GPA>s[k+1].GPA){
                student temp=s[k];
                s[k]=s[k+1];
                s[k+1]= temp;
            }
        }
    }
}
bool isolder(student* s1, student* s2) {
    if (s1->birth_date.year < s2->birth_date.year) {
        return true;
    } else if (s1->birth_date.year == s2->birth_date.year && s1->birth_date.month < s2->birth_date.month) {
        return true;
    } else if (s1->birth_date.year == s2->birth_date.year && s1->birth_date.month < s2->birth_date.month &&
               s1->birth_date.day < s2->birth_date.day) {
        return true;
    } else {
        return false;
    }
}
void sortStudentsByBirthdate(student* s, int n){
        for (int i = 0; i < n - 1; i++) {
            for (int k = i + 1; k < n; k++) {
                if (isolder(&s[k], &s[i])) {
                    student temp = s[i];
                    s[i] = s[k];
                    s[k] = temp;
                }
            }
        }
}
student* searchStudentsById(student* s, int n, int ID){
    for (int i = 0; i < n; i++) {
        if (s[i].id == ID) {
            return &s[i];
        }
    }
    return nullptr;
}
int main() {
    int number_of_students;
    cout << "Enter the number of students: ";
    cin >> number_of_students;
    student* studentsArray = new student[number_of_students];
    input_all_students(studentsArray, number_of_students);
    int option=-1;
    while (option!=5) {
        cout<<"choose an option"<<endl;
        cout<<"Output all the student data."<<endl;
        cout<<"Sort students by birth date."<<endl;
        cout<<"Sort students by GPA."<<endl;
        cout<<"Search students by ID."<<endl;
        cout<<"Exit the program."<<endl;
        cout<<"write your choice"<<endl;
        cin>>option;
        switch(option){
            case 1:{
                cout<<"Data of students"<<endl;
                outputAllStudents(studentsArray, number_of_students);

                break;}
            case 2:{
                cout<<"data sorted by date of birth"<<endl;
                sortStudentsByBirthdate(studentsArray, number_of_students);
                outputAllStudents(studentsArray, number_of_students);
                break;}
            case 3:{
                sortStudentsByGpa(studentsArray, number_of_students);
                cout<<"data sorted by GPA"<<endl;
                outputAllStudents(studentsArray, number_of_students);
                break;}
            case 4:{
                int search;
                cout<<"enter id ";
                cin>>search;
                student* foundStudent = searchStudentsById(studentsArray, number_of_students, search);
                if (foundStudent != nullptr) {
                    cout << "ID: " << foundStudent->id<<endl;
                    cout << "Name: " << foundStudent->name <<endl;
                    cout<<"Birth Date: " << foundStudent->birth_date.month << "/"
                                   << foundStudent->birth_date.day << "/" << foundStudent->birth_date.year << '\n';
                    cout << "Gender: " << (foundStudent->gender? "female" : "male")<<endl ;
                    cout << "GPA: " << foundStudent->GPA<<endl;
                }
                else{
                    cout<< "this id"<<search<<"not found"<<endl;

                }
                break;}

            case 5:{
                cout << "Exiting the program.\n";
                break;}
            default:
                cout<<"you should choose one of the previous /try again ";
                break;
        }
    }
    delete []studentsArray;
    return 0;



}






