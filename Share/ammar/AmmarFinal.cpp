#include <iostream>
#include <string>
#include <vector>

using namespace std;
void printFrameHeader(const string &title) {
  int titleLength = title.length();
  int frameWidth = titleLength + 4;
  cout << "+";
  for (int i = 0; i < frameWidth; ++i) {
    cout << "-";
  }
  cout << "+" << endl;

  cout << "|  " << title << "  |" << std::endl;

  cout << "+";
  for (int i = 0; i < frameWidth; ++i) {
    cout << "-";
  }
  cout << "+" << endl;
}

class Teacher {
public:
  int id;
  string name;
  int PhNo;
  string address;
  Teacher() {}
  Teacher(int id, string name, int phone, string address) {
    Teacher::id = id;
    Teacher::name = name;
    Teacher::PhNo = phone;
    Teacher::address = address;
  }
  int getId() { return id; }
  string getName() { return name; }
  int getPhone() { return PhNo; }
  string getAddress() { return address; }
  void PrepareTestPaper() {}

  void MarkAttendance() {}
  void CheckPaper() {}
  void DeclareResult() {}
};
class Subject {
public:
  int id;
  string name;
  char classId;

  Subject() {}

public:
  Subject(int id, string name, char classId) {
    Subject::id = id;
    Subject::name = name;
    Subject::classId = classId;
  }
  int getId() { return id; }
  string getName() { return name; }
  char getClassId() { return classId; }
};
class Class {
public:
  int id;
  string name;
  string division;
  Class() {}
  Class(int id, string name, string division) {
    Class::id = id;
    Class::name = name;
    Class::division = division;
  }
  int getId() { return id; }
  string getName() { return name; }
  string getDivision() { return division; }
  void DisplayClass() {}
};
class Student {
public:
  int id;
  string name;
  int PhNo;
  string address;
  Student() {}
  Student(int id, string name, int phone, string address) {
    Student::id = id;
    Student::name = name;
    Student::PhNo = phone;
    Student::address = address;
  }
  int getId() { return id; }
  string getName() { return name; }
  int getPhone() { return PhNo; }
  string getAddress() { return address; }

  void FillAdmissionForm() {}
  void GetEnrolledToClass() {}
  void WriteExam() {}
};
class Division {
public:
  int id;
  string name;
  Division() {}
  Division(int id, string name) {
    Division::id = id;
    Division::name = name;
  }
  int getId() { return id; }
  string getName() { return name; }
};

class Admin {
public:
  int id;
  string name = "Ammar";
  int password = 123;
  bool loggedIn = false;

public:
  vector<Teacher> teachers;
  vector<Subject> Subjects;
  vector<Class> Classes;
  vector<Student> Students;
  vector<Division> Divisions;
  void login() {
    string userName;
    int enteredPassword;

    while (true) {
      cout << "Enter username: ";
      cin >> userName;

      cout << "Enter password: ";
      cin >> enteredPassword;

      if (userName == name && enteredPassword == password) {
        loggedIn = true;
        cout << "Login Successful" << endl;
        break;
      } else {
        cout << "Login Failed. Please try again." << endl;
      }
    }
  }

  void logout() {
    if (loggedIn) {
      loggedIn = false;
      cout << "Logout Successful" << endl;
    } else {
      cout << "You are not logged in." << endl;
    }
  }

  void AddNewTeacher(Teacher tObj) { teachers.push_back(tObj); }

  void ModifyTeacher(Teacher tObj) {
    teachers[tObj.id].name = tObj.name;
    teachers[tObj.id].PhNo = tObj.PhNo;
    teachers[tObj.id].address = tObj.address;
  }

  void getTeachers() {
    for (Teacher t : teachers) {
      cout << "ID =" << +t.id << " "
           << "Name =" + t.name + " "
           << "phone = " << t.PhNo << " "
           << "Address  =" + t.address << endl;
    }
  }

  void AddNewStudent(Student SObj) { Students.push_back(SObj); }

  void ModifyStudent(Student SObj) {
    Students[SObj.id].name = SObj.name;
    Students[SObj.id].PhNo = SObj.PhNo;
    Students[SObj.id].address = SObj.address;
  }
  void getStudents() {
    for (Student S : Students) {
      cout << "ID =" << +S.id << " "
           << "Name =" + S.name + " "
           << "phone = " << S.PhNo << " "
           << "Address  =" + S.address << endl;
    }
  }

  void AddNewSubject(Subject sObj) { Subjects.push_back(sObj); }

  void ModifySubject(Subject sObj) {
    Subjects[sObj.id].name = sObj.name;
    Subjects[sObj.id].classId = sObj.classId;
  }
  void getSubjects() {
    for (Subject t : Subjects) {
      cout << "ID =" << +t.id << " "
           << "Name =" + t.name + " "
           << "classId = " << t.classId << endl;
    }
  }
  void DisplaySubjects() {
    cout << "Subjects:" << endl;
    for (Subject t : Subjects) {
      cout << "ID = " << t.getId() << ", "
           << "Name = " << t.getName() << ", "
           << "Class ID = " << t.getClassId() << endl;
    }
  }

  void AddNewClass(Class cObj) { Classes.push_back(cObj); }

  void ModifyClass(Class SObj) {
    Classes[SObj.id].name = SObj.name;
    Classes[SObj.id].division = SObj.division;
  }
  void getClasses() {
    for (Class t : Classes) {
      cout << "ID =" << +t.id << " "
           << "Name =" + t.name + " "
           << "division = " << t.division << endl;
    }
  }

  void DisplayClasses() {
    cout << "Classes:" << endl;
    for (Class c : Classes) {
      cout << "ID = " << c.getId() << ", "
           << "Name = " << c.getName() << ", "
           << "Division = " << c.getDivision() << endl;
    }
  }

  void AddNewDivision(Division dObj) { Divisions.push_back(dObj); }

  void ModifyDivision(Division dObj) { Divisions[dObj.id].name = dObj.name; }
  void getDivisions() {
    for (Division t : Divisions) {
      cout << "ID =" << +t.id << " "
           << "Name =" + t.name << endl;
    }
  }
  void DisplayDivisions() {
    cout << "Divisions:" << endl;
    for (Division t : Divisions) {
      cout << "ID = " << t.getId() << ", "
           << "Name = " << t.getName() << endl;
    }
  }
};

int main() {
  int choice1;
  int choice3;
  int choice4;
  Teacher addObj;
  Teacher ModifyObj;
  Subject addSubObj;
  Subject ModifySubObj;
  Student addStudObj;
  Student ModifyStudObj;
  Class addClassObj;
  Class ModifyClassObj;
  Division addDivObj;
  Division ModifyDivObj;
  Admin admin;

  Teacher ResultObj;
main_menu:
  string headerText = "School Management System";

  printFrameHeader(headerText);
  while (true) {
    cout << "Choose an option:" << endl;
    cout << "1. Admin" << endl;
    cout << "2. Teacher" << endl;
    cout << "3. Student" << endl;
    cout << "4. Exit" << endl;
    cin >> choice1;

    switch (choice1) {
    case 1: {
      if (!admin.loggedIn) {
        admin.login();
        if (!admin.loggedIn) {
          break;
        }
      }
      int choice2;
      while (true) {
        cout << "Choose an option:" << endl;
        cout << "1. Add New Teacher" << endl;
        cout << "2. Modify Teacher" << endl;
        cout << "3. Add New Student" << endl;
        cout << "4. Modify Student" << endl;
        cout << "5. Add New Subject" << endl;
        cout << "6. Modify Subject" << endl;
        cout << "7. Add New Class" << endl;
        cout << "8. Modify Class" << endl;
        cout << "9. Add New Division" << endl;
        cout << "10. Modify Division" << endl;
        cout << "11. Display Subject" << endl;
        cout << "12. Display Division" << endl;
        cout << "13. Display Classes" << endl;
        cout << "14. Return to Main Menu" << endl;
        cout << "15. To Logout " << endl;
        cin >> choice2;

        switch (choice2) {
        case 1:
          cout << "Please insert Teacher Id : ";
          cin >> addObj.id;
          cout << "Please insert Teacher Name : ";
          cin >> addObj.name;
          cout << "Please insert Tacher Phone Number : ";
          cin >> addObj.PhNo;
          cout << "Please insert Teacher Address : ";
          cin >> addObj.address;
          admin.AddNewTeacher(addObj);
          admin.getTeachers();
          break;
        case 2:
          cout << "Please insert Teacher Id : ";
          cin >> ModifyObj.id;
          cout << "Please insert Teacher Name : ";
          cin >> ModifyObj.name;
          cout << "Please insert Teacher Phone Number : ";
          cin >> ModifyObj.PhNo;
          cout << "Please insert Teacher Address : ";
          cin >> ModifyObj.address;
          admin.ModifyTeacher(ModifyObj);
          admin.getTeachers();
          break;
        case 3:
          cout << "Please insert Student Id : ";
          cin >> addStudObj.id;
          cout << "Please insert Student Name : ";
          cin >> addStudObj.name;
          cout << "Please insert Student Phone Number : ";
          cin >> addStudObj.PhNo;
          cout << "Please insert Student Address : ";
          cin >> addStudObj.address;
          admin.AddNewStudent(addStudObj);
          admin.getStudents();
          break;
        case 4:
          cout << "Please insert Student Id : ";
          cin >> ModifyStudObj.id;
          cout << "Please insert Student Name : ";
          cin >> ModifyStudObj.name;
          cout << "Please insert Student Phone Number : ";
          cin >> ModifyStudObj.PhNo;
          cout << "Please insert Student Address : ";
          cin >> ModifyStudObj.address;
          admin.ModifyStudent(ModifyStudObj);
          admin.getStudents();
          break;
        case 5:
          cout << "Please insert Subject Id : ";
          cin >> addSubObj.id;
          cout << "Please insert Subject Name : ";
          cin >> addSubObj.name;
          cout << "Please insert Subject Class Id : ";
          cin >> addSubObj.classId;
          admin.AddNewSubject(addSubObj);
          admin.getSubjects();
          break;
        case 6:
          cout << "Please insert Subject Id : ";
          cin >> ModifySubObj.id;
          cout << "Please insert Subject Name : ";
          cin >> ModifySubObj.name;
          cout << "Please insert Subject Class Id : ";
          cin >> ModifySubObj.classId;
          admin.ModifySubject(ModifySubObj);
          admin.getSubjects();
          break;
        case 7:
          cout << "Please insert Id to add class : ";
          cin >> addClassObj.id;
          cout << "Please insert Name to add class : ";
          cin >> addClassObj.name;
          cout << "Please division to add class : ";
          cin >> addClassObj.division;
          admin.AddNewClass(addClassObj);
          admin.getClasses();
          break;
        case 8:
          cout << "Please insert Id to modify class : ";
          cin >> ModifyClassObj.id;
          cout << "Please insert Name to modify class : ";
          cin >> ModifyClassObj.name;
          cout << "Please insert division to modify class : ";
          cin >> ModifyClassObj.division;
          admin.ModifyClass(ModifyClassObj);
          admin.getClasses();
          break;
        case 9:
          cout << "Please insert Id to add new division : ";
          cin >> addDivObj.id;
          cout << "Please insert Name to add new division : ";
          cin >> addDivObj.name;
          admin.AddNewDivision(addDivObj);
          admin.getDivisions();
          break;
        case 10:
          cout << "Please insert Id to modify division : ";
          cin >> ModifyDivObj.id;
          cout << "Please insert Name to modify division : ";
          cin >> ModifyDivObj.name;
          admin.ModifyDivision(ModifyDivObj);
          admin.getDivisions();
          break;
        case 11:
          admin.DisplaySubjects();
          admin.getSubjects();
          break;
        case 12:
          admin.DisplayDivisions();
          admin.getDivisions();
          break;
        case 13:
          admin.DisplayClasses();
          admin.getClasses();
          break;
        case 14:
          goto main_menu;
        case 15:
          admin.logout();
          return 0;
          break;
        default:
          cout << "Invalid choice. Please try again." << endl;
        }
        if (!admin.loggedIn)
          break;
      }
    }
    case 2: {
      while (true) {
        cout << "Choose an option:" << endl;
        cout << "1. Prepare Test Paper" << endl;
        cout << "2. Mark Attendance" << endl;
        cout << "3. Check Papers" << endl;
        cout << "4. Declare Result" << endl;
        cout << "5. Return to Main Menu" << endl;
        cin >> choice3;
        switch (choice3) {

        case 1: {
          cout << "Please insert Data of Exam : " << endl;
          break;
        }
        case 2: {
          cout << "Please Enter Class ID To take Attendance" << endl;
          break;
        }
        case 3: {
          cout << "Wlecome To check Paper" << endl;
          break;
        }
        case 4: {
          int Score;
          cout << "Enter Student Score: ";
          cin >> Score;
          if (Score < 50) {
            cout << "Student Fail" << endl;
            return 0;
          } else {
            cout << "Student Pass" << endl;
            return 0;
          }

          break;
        }
        case 5:
          goto main_menu;
        }
        break;
      }
    case 3: {
      while (true) {

        cout << "Choose an option:" << endl;
        cout << "1. Fill Admission Form" << endl;
        cout << "2. Get Enrolled To class" << endl;
        cout << "3. Write Exam" << endl;
        cout << "4. Return to Main Menu" << endl;
        cin >> choice4;
        switch (choice4) {
        case 1: {
          cout << "Fill Admission Form Complete" << endl;
          break;
        }
        case 2: {
          cout << "You have Got Enrolled to class" << endl;
          break;
        }
        case 3: {
          cout << "Good Look With Your Exam" << endl;
          break;
        }
        case 4:
          goto main_menu;
        }
        break;
      }

    }

    break;
    }
    case 4:
      cout << "Exiting program Good bye " << endl;
      return 0;
    default:
      cout << "Invalid choice. Please try again." << endl;
    }
  }

  return 0;
}
