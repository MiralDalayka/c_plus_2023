#include <iostream>
#include <string>
#include <vector>

using namespace std;

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
class Student{
public:
    int id;  
    string name;
    int PhNo;
    string address;
Student(){}
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

};
class Division{
public:
int id;
string name;
Division(){}
Division(int id, string name) 
{
  Division::id = id;
  Division::name = name;
}
int getId() { return id; }
string getName() { return name; }


};

class Admin {
private:
  int id;
  string name = "TestAdmin";
  int password = 123;

public:
  vector<Teacher> teachers;
  vector<Subject> Subjects;
  vector<Class> Classes;
  vector<Student> Students;
  vector<Division> Divisions;
  void login(string userName, int password) {
    if (!userName.empty() && password != NULL) {
      if (userName == name && password == password) {
        cout << "Login Successful" << endl;
      } else {
        cout << "Login Failed" << endl;
      }
    } else {
      cout << "please fill user name and password" << endl;
    }
  }

  void logout(int logOutBtn) {
    if (logOutBtn == 0) {
      cout << "logout Successful" << endl;
    }
  }

  void AddNewTeacher(Teacher tObj) 
{
  
  teachers.push_back(tObj); 


}

  void ModifyTeacher(Teacher tObj) 
  {
    teachers[tObj.id].name = tObj.name;
    teachers[tObj.id].PhNo = tObj.PhNo;
    teachers[tObj.id].address = tObj.address;
  }

  void getTeachers() 
  {
    for (Teacher t : teachers) 
    {
      cout << "ID =" << +t.id << " "
           << "Name =" + t.name + " "
           << "phone = " << t.PhNo << " "
           << "Address  =" + t.address << endl;
    }
  }

  void AddNewStudent(Student SObj) {Students.push_back(SObj);}

  void ModifyStudent(Student SObj) {
    Students[SObj.id].name = SObj.name;
    Students[SObj.id].PhNo = SObj.PhNo;
    Students[SObj.id].address = SObj.address;
  }
  void getStudents() {
    for(Student S: Students) {
      cout << "ID =" << +S.id << " "
           << "Name =" + S.name + " "
           << "phone = " << S.PhNo << " "
           << "Address  =" + S.address << endl;
    }
  }

  void AddNewSubject(Subject sObj) {Subjects.push_back(sObj);}

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

  void AddNewClass(Class cObj) 
{

    Classes.push_back(cObj);
}

  void ModifyClass(Class SObj) {
     Classes[SObj.id].name = SObj.name;
      Classes[SObj.id].division= SObj.division;
  }
  void getClasses() {
     for (Class t : Classes) {
       cout << "ID =" << +t.id << " "
           << "Name =" + t.name + " "
           << "division = " << t.division << endl;
       
     }
  }
    

  void AddNewDivision(Division dObj) {
    Divisions.push_back(dObj);
  }

  void ModifyDivision(Division dObj) {
    Divisions[dObj.id].name = dObj.name;
    
  }
  void getDivisions() {
    for (Division t : Divisions) {
      cout << "ID =" << +t.id << " "
           << "Name =" + t.name << endl;

    }

    
  }
  void ViewOptions() {
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
  }
};

int main() {
  Admin admin;
  int choice;

  while (true) {
    admin.ViewOptions();
    cin >> choice;

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
    switch (choice) {
    case 1:
      cout << "Please insert Id, Name, Phone number, Address to Add Teacher: ";
      cin >> addObj.id >> addObj.name >> addObj.PhNo >> addObj.address;
      admin.AddNewTeacher(addObj);
      admin.getTeachers();

      break;
    case 2:
      cout << "Please insert Id, Name, Phone number, Address to Modify "
              "Teacher: ";
      cin >> ModifyObj.id >> ModifyObj.name >> ModifyObj.PhNo >>
          ModifyObj.address;
      admin.ModifyTeacher(ModifyObj);
      admin.getTeachers();
      break;
    case 3:
      cout << "Please insert Id, Name, Phone number, Address to Add Student: ";
      cin >> addStudObj.id >> addStudObj.name >> addStudObj.PhNo >>
          addStudObj.address;
      admin.AddNewStudent(addStudObj);
      admin.getStudents();
      break;
    case 4:
      cout << "Please insert Id, Name, Phone number, Address to Modify Student: ";
      cin >> ModifyStudObj.id >> ModifyStudObj.name >> ModifyStudObj.PhNo >>
          ModifyStudObj.address;
      admin.ModifyStudent(ModifyStudObj);
      admin.getStudents();
      break;
    case 5:
      cout << "Please insert Id, Name, Class ID to Add Subject: ";
      cin >> addSubObj.id >> addSubObj.name >> addSubObj.classId;
      admin.AddNewSubject(addSubObj);
      admin.getSubjects();
      break;
    case 6:
      cout << "Please insert Id, Name, Class ID to Modify Subject: ";
      cin >> ModifySubObj.id >> ModifySubObj.name >> ModifySubObj.classId;
      admin.ModifySubject(ModifySubObj);
      admin.getSubjects();
      break;
    case 7:
      cout << "Please insert Id, Name, Division to Add Class: ";
      cin>>addClassObj.id>>addClassObj.name>>addClassObj.division;
      admin.AddNewClass(addClassObj);
      admin.getClasses();
      break;
    case 8:
      cout << "Please insert Id, Name, Division to Modify Class: ";
      cin>>ModifyClassObj.id>>ModifyClassObj.name>>ModifyClassObj.division;
      admin.ModifyClass(ModifyClassObj);
      admin.getClasses();
      break;
    case 9:
      cout << "Please insert Id, Name to Add Division: ";
      cin>>addDivObj.id>>addDivObj.name;
      admin.AddNewDivision(addDivObj);
      admin.getDivisions();
      break;
    case 10:
      cout << "Please insert Id, Name to Modify Division: ";
      cin>>ModifyDivObj.id>>ModifyDivObj.name;
      admin.ModifyDivision(ModifyDivObj);
      admin.getDivisions();
      break;
    case 11:
      cout << "Exiting program..." << endl;
      return 0;
    default:
      cout << "Invalid choice. Please try again." << endl;
    }
  }

  return 0;
}
