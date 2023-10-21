#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Admin {

private:
	int id;
	string name = "TestAdmin";
	int password = 123;
	// vector
public:
	
vector<Teacher> teachers; 
public:
	void login(string userName, int password) {
		if (!userName.empty() && password != NULL) {
			if (userName == name && password == password) {
				cout << "Login Successful" << endl;
			}
			else {

				cout << "Login Failed" << endl;
			}
		}
		else {

			cout << "please fill user name and password" << endl;
		}
	}

public:
	void logout(int logOutBtn) {
		if (logOutBtn == 0) {
			cout << "logout Successful" << endl;
		}
	}
public:
	void AddNewTeacher(Teacher tObj) {
		teachers.push_back(tObj);

	}

	void ModifyTeacher(Teacher tObj) 
	{
		teachers[tObj.id].name = tObj.name;
		teachers[tObj.id].PhNo = tObj.PhNo;
		teachers[tObj.id].address = tObj.address;
	}
public: 
	Teacher getTeachers()
	{
		for (Teacher t : teachers) 
		{
			cout <<"ID"+ t.id <<"Name"+ t.name <<"Phone Number"+ t.PhNo <<"Address"+ t.address;
		}
	}

	void AddNewStudent() {}

	void ModifyStudent() {}

	void AddNewSubject() {}

	void ModifySubject() {}

	void AddNewClass() {}

	void ModifyClass() {}

	void AddNewDivision() {}

	void ModifyDivision() {}

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
class Teacher {
public:
	int id;
	string name;
	int PhNo;
	string address;
	Teacher(int id, string name, int phone, string address) 
	{
		Teacher::id = id;
		Teacher::name = name;
		Teacher::PhNo = phone;
		Teacher::address= address;
	}
	Teacher::id = id;
	Teacher::name = name;
	Teacher::PhNo = phone;
	Teacher::address = address;
};
int main() {
	Admin admin;

	int choice;

	while (true) {
		admin.ViewOptions();
		cin >> choice;
		Teacher addObj ;
		Teacher ModifyObj;

		switch (choice) {
		case 1:
			cout << "plaese insert Id , Name , Phone number , Address to Add Teacher";
			cin >> addObj.id >> addObj.name >> addObj.PhNo >> addObj.address;
			admin.AddNewTeacher(addObj);
			break;
		case 2:
			cout << "plaese insert Id , Name , Phone number , Address to Modify Teacher";
			cin >> ModifyObj.id >> ModifyObj.name >> ModifyObj.PhNo >> ModifyObj.address;

			admin.ModifyTeacher(ModifyObj);
			break;
		case 3:
			admin.AddNewStudent();
			break;
		case 4:
			admin.ModifyStudent();
			break;
		case 5:
			admin.AddNewSubject();
			break;
		case 6:
			admin.ModifySubject();
			break;
		case 7:
			admin.AddNewClass();
			break;
		case 8:
			admin.ModifyClass();
			break;
		case 9:
			admin.AddNewDivision();
			break;
		case 10:
			admin.ModifyDivision();
			break;
		case 11:
			cout << "Exiting program..." << endl;
			return 0;
		default:
			cout << "Invalid choice. Please try again." << endl;
		}
	}
	admin.getTeachers();
	return 0;
}
