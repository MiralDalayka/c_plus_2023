#include <iostream>
using namespace std;
// #include <string>
#include <vector>
void AdminFunction();
void viewOperationsForAdmin();
void Continue(){
cout<<"\ndo you want to continue?(Y/N)"<<endl;
        char c;
        cin>>c;
        if (c == 'Y' || c == 'y'){
            cout<<endl;
            viewOperationsForAdmin();
        }
        else if(c == 'N' || c == 'n'){
            cout<<"\nGood bye!"<<endl;
            exit(0);
        }
        else{
            cout<<"\ninvalid !,Try again"<<endl;
            Continue();
        }
}
void logInAS();

class testPaper{
   int id;
   string name;
   float duration;
   int classID; 

   public:
   testPaper(int id, string name,float duration,int classID){
    testPaper::id=id;
    testPaper::name = name;
    testPaper::duration = duration;
    testPaper::classID = classID;
   }
};

class Student {
    int id;
   string name;
   int PhNo;
   string address;
    public:
    Student (int id  =0 , string name ="", int PhNo=0 , string address=""){
        Student :: id = id;
        Student :: name = name;
        Student :: PhNo = PhNo;
        Student :: address = address;
    }
    void setIDStudent(int modifyID){id = modifyID;}
    void setNameStudent(string modifyName){name = modifyName;}
    void setPhStudent(int modidyPh){PhNo = modidyPh;}
    void setAddStudent(string modifyAdd){address = modifyAdd;}

    int getIDStudent(){return id;}
    string getNameStudent(){return name;}
    int getPhoneStudent(){return PhNo;}
    string getAddressStudent(){return address;}

    void FillAdmissionForm(Student s){}

    void GetEnrolled(){}

    void WriteExam(){}
};


class Teachers
{
//attributes for teacher class 
   int id,PhNo;
   string name,address;
  
   
//methods for teacher class
    public:
    Teachers (int id=0 , string name="" , int PhNo=0 , string address=""){
        Teachers :: id = id;
        Teachers :: name = name;
        Teachers :: PhNo = PhNo;
        Teachers :: address = address;
    }

     int getId(){return id;}

     string getName(){return name;}

     int getPhNo(){return PhNo;}

     string getAddress(){return address;}

     void setID(int setid){id = setid;}
     void setName(string setName){name = setName;}
     void setPhone(int setPhone){PhNo = setPhone;}
     void setAddress(string setAddress){address = setAddress;}
     
     void PrepareTestPaper(){
      
        vector <Teachers> Questions ;
      //= {1,{"- Function overloading is used when different functions have the same implementation" , false}
      //                                 2,{"- Friend functions of a class have access to its private members",true}
     

     }

     void MakeAttendance(){}

     void CheckPapers(){}

     void PrepareRecordCards(){}

     void DeclareResult(){}
};


class Subject{
    int id,classID;
    string name;
    public:
    Subject(int id,string name,int classID){
        Subject::id = id;
        Subject::name = name;
        Subject::classID = classID;
    }

    int getID(){ return id;}

    string getName(){return name;}

    int getClassID(){return classID;}

    void setIDSub(int IDsub){id = IDsub;}
    void setName(string Namesub){name = Namesub;}
    void setIDClass(int IDClass){classID = IDClass;}
};

class Class{
    int id,division;
    string name;
    public:
    Class(int id,string name,int division){
        Class::id = id;
        Class::name = name;
        Class::division = division;
    }

    void setID(int IDClass){id = IDClass;}
    void setNameClass(string NameClass){name = NameClass;}

    void setIDDiv(int DivClass){division = DivClass;}

    int getID(){return id;}
    string getName(){return name;}
    int getDiv(){return division;}
    
};

class Division{
    int id;
    string name;
    
    public:
    Division(int id , string name){
    Division::id = id;
    Division::name = name;
    }
    void setIDdiv(int ID){id = ID;}
    void setNameDiv(string n){name = n;}
    int getID(){return id;}
    string getName(){return name;}
};

class Admin{
//attributes for admin class
    char id;
    char name;
    char password;
    vector <Teachers> teachersList;
    vector <Student> studentsList;
    vector <Subject> subjectsList;
    vector <Class> classesList;
    vector <Division> divisionsList;
//methods for admin class
    public:
    Admin(char id = '0', char name='0', char password='0'){
        Admin::id = id;
        Admin::name = name;
        Admin::password = password;
        // cout<<"hello from admain default constructor\n";
        
    }
     
    
    
    void Login(){
        string username,password;
        cout<<"\nPlease enter username and password"<<endl;
        cin>>username>>password;
        while (username !="admin" && password != "admin")
        {
          cout<<"\nusername or password invalid, please try again!"<<endl;
          cin>>username>>password;
          if (username =="admin" && password == "admin"){
          cout<<"\nLogin success, Welcome !"<<endl;
          Continue();
          }
        }

    }

    void Logout(){
        cout<<"\nLogout success, Bye !"<<endl; 
        Continue();
    }
    

    void AddNewTaechers(Teachers t){
        if(teachersList.size()==0){
         teachersList.push_back(t);
         cout<<"\n______________________________________________"<<endl;
         cout<<"\nTeacher add succssfully!"<<endl;
         cout<<"\n______________________________________________"<<endl;
         Continue();
        }

        else{
        bool flag = true;
        for  (int i = 0; i < teachersList.size(); i++){
            if(teachersList[i].getId() == t.getId()){
            flag = false;
            }
          else{
             teachersList.push_back(t);
             break;
              }

        }
        if (flag){
         cout<<"\n______________________________________________"<<endl;
         cout<<"\nTeacher add succssfully!"<<endl;    
         cout<<"\n______________________________________________"<<endl;
            Continue();}
        else {  
         cout<<"\n______________________________________________"<<endl;
         cout<<"\nThis id already exist!"<<endl;
         cout<<"\n______________________________________________"<<endl;
        Continue();}
}
        }
    // }
    
    void ModifyTeachers(){
        
        for (int i=0; i<teachersList.size(); i++){
            cout<<teachersList[i].getId()<<"-  "<<teachersList[i].getName()<<" | "<<teachersList[i].getPhNo()<<" | "<<teachersList[i].getAddress()<<endl;
        }
        int idToModify;
        bool flag = true;
        cout<<"Enter the ID for teacher you want to modify information : ";
        cin>>idToModify;
        for (int i=0; i<teachersList.size(); i++){
        if (teachersList[i].getId() == idToModify){
            flag = false;
            int newID, newPhone;
            string newName,newAddress;
            cout<<"Eneter New ID & New name & New Phone number && New Address : ";
            cin>>newID>>newName>>newPhone>>newAddress;
            teachersList[i].setID(newID);
            teachersList[i].setName(newName);
            teachersList[i].setPhone(newPhone);
            teachersList[i].setAddress(newAddress);
        }
       
        }
        if(flag){cout<<"This ID not exist in Data"<<endl;}
    }

    void AddNewStudent(Student s){
       if(studentsList.size()==0){
         studentsList.push_back(s);
         cout<<"Student add succssfully!"<<endl;
         Continue();
        }

        else{
        bool flag = true;
        for  (int i = 0; i < studentsList.size(); i++){
          if(studentsList[i].getIDStudent() == s.getIDStudent()){
            flag = false;
  
          }
          else{
             studentsList.push_back(s);
             break;
              }
        }
        if(flag){
            cout<<"Student add succssfully!"<<endl;
             Continue();
        }
        else{
             cout<<"This id already exist!"<<endl;
             Continue();
        }
        }
        }   
    
    void ModifyStudent(){
        for (int i=0; i<studentsList.size(); i++){
            cout<<studentsList[i].getIDStudent()<<"-  "<<studentsList[i].getNameStudent()<<" | "<<studentsList[i].getPhoneStudent()<<" | "<<studentsList[i].getAddressStudent()<<endl;
        }
        int idToModify;
        bool flag = true;
        cout<<"Enter the ID for student you want to modify information : ";
        cin>>idToModify;
        for (int i=0; i<studentsList.size(); i++){
        if (studentsList[i].getIDStudent() == idToModify){
            flag = false;
            int newID, newPhone;
            string newName,newAddress;
            cout<<"Eneter New ID & New name & New Phone number && New Address : ";
            cin>>newID>>newName>>newPhone>>newAddress;
            studentsList[i].setIDStudent(newID);
            studentsList[i].setNameStudent(newName);
            studentsList[i].setPhStudent(newPhone);
            studentsList[i].setAddStudent(newAddress);
        }
       
        }
        if(flag){cout<<"This ID not exist in Data"<<endl;}
    }

    void AddNewSubject(Subject sub){
      
            subjectsList.push_back(sub);
            cout<<"Subject add succssfully!"<<endl;
            Continue();
        
    }

    void ModifySubject(){
      for (int i=0; i<subjectsList.size(); i++){
            cout<<subjectsList[i].getID()<<"-  "<<subjectsList[i].getName()<<" | "<<subjectsList[i].getClassID()<<endl;
        }
        int idToModify;
        bool flag = true;
        cout<<"Enter the ID for Subject you want to modify information : ";
        cin>>idToModify;
        for (int i=0; i<subjectsList.size(); i++){
        if (subjectsList[i].getID() == idToModify){
            flag = false;
            int newID, newIDClass;
            string newName;
            cout<<"Eneter New ID & New name & New ID for class : ";
            cin>>newID>>newName>>newIDClass;
            subjectsList[i].setIDSub(newID);
            subjectsList[i].setName(newName);
            subjectsList[i].setIDClass(newIDClass);

        }
       
        }
        if(flag){cout<<"This ID not exist in Data"<<endl;}
    }

    void AddNewClass(Class c){
       
    if (classesList.size() == 0){
        classesList.push_back(c);
        cout<<"Class add successfully!"<<endl;
        Continue();
    }
    else{
         bool flag = true;
        for(int i=0;i<classesList.size();i++){
            if (classesList[i].getID() == c.getID()){
                flag = false;
                
            }
            else{
                classesList.push_back(c);
                break;
            }
        }

        if(flag){
            cout<<"Class add succssfully!"<<endl;
            Continue();
        }
        else{
            cout<<"This id already exist!"<<endl;
            Continue();
        }
    }

    }
    
    void ModifyClass(){
        for (int i=0; i<classesList.size(); i++){
            cout<<classesList[i].getID()<<"-  "<<classesList[i].getName()<<" | "<<classesList[i].getDiv()<<endl;
        }
        int idToModify;
        bool flag = true;
        cout<<"Enter the ID for Class you want to modify information : ";
        cin>>idToModify;
        for (int i=0; i<classesList.size(); i++){
        if (classesList[i].getID() == idToModify){
            flag = false;
            int newID, newIDDiv;
            string newName;
            cout<<"Eneter New ID & New name & New ID for Division : ";
            cin>>newID>>newName>>newIDDiv;
            classesList[i].setID(newID);
            classesList[i].setNameClass(newName);
            classesList[i].setIDDiv(newIDDiv);

        }
       
        }
        if(flag){cout<<"This ID not exist in Data"<<endl;}
    }
    

    void  AddNewDivision(Division d){
     if (divisionsList.size() == 0){
        divisionsList.push_back(d);
        cout<<"Division add successfully!"<<endl;
        Continue();
    }
    else{
        bool flag = true;
        for(int i=0;i<divisionsList.size();i++){
            if (divisionsList[i].getID() == d.getID()){
                flag = false;
            }
            else{
                divisionsList.push_back(d);
                break;
            }
        }
    if(flag){
        cout<<"Division add succssfully!"<<endl;
        Continue();
    }
        else{
            cout<<"This id already exist!"<<endl;
            Continue();
        }
    
    }
    }
    

    void ModifyDivision(){
     for (int i=0; i<divisionsList.size(); i++){
            cout<<divisionsList[i].getID()<<"-  "<<divisionsList[i].getName()<<endl;
        }
        int idToModify;
        bool flag = true;
        cout<<"Enter the ID for Division you want to modify information : ";
        cin>>idToModify;
        for (int i=0; i<divisionsList.size(); i++){
        if (divisionsList[i].getID() == idToModify){
            flag = false;
            int newID;
            string newName;
            cout<<"Eneter New ID & New name  : ";
            cin>>newID>>newName;
            divisionsList[i].setIDdiv(newID);
            divisionsList[i].setNameDiv(newName);
        }
       
        }
        if(flag){cout<<"This ID not exist in Data"<<endl;}
    }
    
   void FinalVersion(){

    cout<<"\n\nThis is the final list for Teachers"<<endl;
    cout<<"_________________________________________________________________________\n"<<endl;
    for (int i=0; i<teachersList.size(); i++){
            cout<<teachersList[i].getId()<<"-  "<<teachersList[i].getName()<<" | "<<teachersList[i].getPhNo()<<" | "<<teachersList[i].getAddress()<<endl;
        }
    cout<<"_________________________________________________________________________\n"<<endl;
    cout<<"This is the final list for Students"<<endl;
    cout<<"_________________________________________________________________________\n"<<endl;
   
    for (int i=0; i<studentsList.size(); i++){
            cout<<studentsList[i].getIDStudent()<<"-  "<<studentsList[i].getNameStudent()<<" | "<<studentsList[i].getPhoneStudent()<<" | "<<studentsList[i].getAddressStudent()<<endl;
        }
    cout<<"_________________________________________________________________________\n"<<endl;
    cout<<"This is the final list for Subjects"<<endl;
    cout<<"_________________________________________________________________________\n"<<endl;
    for (int i=0; i<subjectsList.size(); i++){
        cout<<subjectsList[i].getID()<<"-  "<<subjectsList[i].getName()<<" | "<<subjectsList[i].getClassID()<<endl;
        } 
    cout<<"_________________________________________________________________________\n"<<endl;
    cout<<"This is the final list for Classes"<<endl;
    cout<<"_________________________________________________________________________\n"<<endl;   
    for (int i=0; i<classesList.size(); i++){
        cout<<classesList[i].getID()<<"-  "<<classesList[i].getName()<<" | "<<classesList[i].getDiv()<<endl;
        }
    cout<<"_________________________________________________________________________\n"<<endl;
    cout<<"This is the final list for Divisions"<<endl;
    cout<<"_________________________________________________________________________\n"<<endl;   
     for (int i=0; i<divisionsList.size(); i++){
        cout<<divisionsList[i].getID()<<"-  "<<divisionsList[i].getName()<<endl;
        }

    }
};

void welcome(){
    cout<<"-------------------------------------------------------------------"<<endl;
    cout<<"Welcome to School managment system"<<endl;
    cout<<"-------------------------------------------------------------------"<<endl;
}

void viewOperationsForAdmin(){
    cout<<"1- Login"<<endl;
    cout<<"2- Logout"<<endl;
    cout<<"3- Add new teacher"<<endl;
    cout<<"4- modify teacher"<<endl;
    cout<<"5- Add new student"<<endl;
    cout<<"6- Modify student"<<endl;
    cout<<"7- Add new subject"<<endl;
    cout<<"8- Modify subject"<<endl;
    cout<<"9- Add new class"<<endl;
    cout<<"10- Modify class"<<endl;
    cout<<"11- Add new division"<<endl;
    cout<<"12- Modify division"<<endl;
    cout<<"13- Print All Sections"<<endl;
    cout<<"14- Exist"<<endl;
    cout<<"15-Return to menu"<<endl;
}

void viewOperationsForTeacher(){
    cout<<"1- Prepare Test Paper"<<endl;
    cout<<"2- Make Attendance"<<endl;
    cout<<"3- Check Papers"<<endl;
    cout<<"4- Declare Result"<<endl;
    cout<<"5- Return to menu"<<endl;
    cout<<"6- Exist"<<endl;
} 
void logInASFun(){
  cout<<"\n1- Admin"<<endl;
  cout<<"2- Teacher"<<endl;
  cout<<"3- Student"<<endl;
  cout<<"4- Exit\n"<<endl;
  cout<<"Please Enter  ID To login :"<<endl;

  int LoginAS;
  cin>>LoginAS;
  switch (LoginAS)
  {
  case 1:{
    AdminFunction();
    break;
  }

  case 4: 
  {exit (0);}
  default:{
  cout<<"This ID Not Found, Try Again:"<<endl;
  logInASFun();
    break;
  }
  }
}

void AdminFunction(){
 cout<<"\n__________________________________Welcome To Admin Section_______________________________________________\n"<<endl;
  Admin a = Admin();
  viewOperationsForAdmin();
      while(true){
      int choice;
      cout<<"\nEnter your choice:";   
      cin>>choice;
      switch(choice)
      {
      case 1: 
        { cout<<"\n__________________________________Welcome___________________________________________________"<<endl;
          a.Login();
          break;}
      case 2:
        { a.Logout();
          break;}
      case 3:
      {cout<<"\n_________________________________________Teachers Information____________________________________________"<<endl;
          string n,ad;
          int p,i;
          cout<<"\nPlease enter the following information : \nID: ";
          cin >>i;
          cout<<"name: ";
          cin>>n;
          cout<<"phone number: ";
          cin>>p;
          cout<<"address: ";
          cin>>ad;
          a.AddNewTaechers(Teachers(i,n,p,ad));
          break;
  }
      case 4: 
      {cout<<"\nThis is the Teacher list"<<endl;
      a.ModifyTeachers();
      break;}

      case 5:
        { cout<<"\n_________________________________________Students Information____________________________________________"<<endl;
              string nS,adS;
              int pS,iS;
              cout<<"\nPlease enter the following information : \nID: ";
              cin >>iS;
              cout<<"name: ";
              cin>>nS;
              cout<<"phone number: ";
              cin>>pS;
              cout<<"address: ";
              cin>>adS;
              
              a.AddNewStudent(Student(iS,nS,pS,adS));
              break;
      }
      case 6:
      {
          {cout<<"\nThis is the Student list"<<endl;
          a.ModifyStudent();
          break;}
      }
      case 7:
        {  cout<<"\n_________________________________________Subjects Information____________________________________________"<<endl;
          int iSub,idclass;
          string nSub;
          cout<<"\nPlease enter the following information : \nID: ";
              cin >>iSub;
              cout<<"name: ";
              cin>>nSub;
              cout<<"Class ID: ";
              cin>>idclass;
          a.AddNewSubject(Subject(iSub,nSub,idclass));
          break;}
      case 8:{
          {cout<<"\nThis is the Subjects list"<<endl;
          a.ModifySubject();
          break;}
      }
      case 9:
        {  cout<<"\n_________________________________________Classes Information____________________________________________"<<endl;
          int iC,divC;
          string nC;
          cout<<"Please enter the following information : \nID: ";
              cin >>iC;
              cout<<"name: ";
              cin>>nC;
              cout<<"Division: ";
              cin>>divC;
          a.AddNewClass(Class(iC,nC,divC));
          break;}
      case 10:
      {
          cout<<"\nThis is the Classes list"<<endl;
          a.ModifyClass();
          break;
      }
      case 11:
        { cout<<"\n_________________________________________Divisions Information____________________________________________"<<endl;
          int iDiv;
          string nDiv;
          cout<<"\nPlease enter the following information : \nID: ";
          cin>>iDiv;
          cout<<"name: ";
          cin>>nDiv;
          a.AddNewDivision(Division(iDiv,nDiv));
          break;}
      case 12:
      {
          cout<<"\nThis is the Division list"<<endl;
          a.ModifyDivision();
          break;
      }
      case 13:{
        a.FinalVersion();
        break;
      }
      case 14:
        { cout<<"\nGood bye, Thank you for your visit"<<endl;
          exit(0);}
      case 15:
      {
        logInASFun();
      }
}
      }
}

void TeacherFunction(){
  Teachers t = Teachers();
  viewOperationsForTeacher();
  while (true)
  {
     int choice;
    cout<<"\nEnter your choice:";   
    cin>>choice; 
    switch (choice)
    {
    case 1:{
      t.PrepareTestPaper();
      break;
    }
    default:{
      cout<<"This ID Not Found"<<endl;
    }
      break;
    }
  }
  
}


int main(){
    welcome();
    logInASFun();


    
    // Teachers t = Teachers();
    // Student s = Student();
    

    
 
   
    return 0;
}
