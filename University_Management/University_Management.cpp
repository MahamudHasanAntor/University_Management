
#include<iostream>
using namespace std;
class Person{
protected:
    string name;
    int age;
    string Gender;
public:
    Person(string name,
           int age,
           string Gender){
               cout<<"Person Constructor is called "<<endl;
    this->name=name;
    this->age=age;
    this->Gender=Gender;
    }
    void setname(string name){this->name=name;}
    string getname(){return name;}
    void setage(int age){this->age=age;}
    int getage(){return age;}
    void setGender(string Gender){this->Gender=Gender;}
    string getGender(){return Gender;}

    void showPerson(){
    cout<<"Name:"<<name<<endl;
    cout<<"Age:"<<age<<endl;
    cout<<"Gender:"<<Gender<<endl;
    }
    };
class Employee:virtual public Person{
protected:
    int Employeesalary;
    string EmployeeId;
    string designation;
    int Workinghour;
    string Email;
    string Joiningdate;
    string Companyname;
public:
    Employee(string name,
             int age,
             string Gender,
             int Employeesalary,
             string EmployeeId,
             string designation,
             int Workinghour,
             string Email,
             string Joiningdate,
             string Companyname):Person(name,age,Gender){
                 cout<<"Employee Constructor is called "<<endl;
             this->Employeesalary=Employeesalary;
             this->EmployeeId=EmployeeId;
             this->designation=designation;
             this->Workinghour=Workinghour;
             this->Email=Email;
             this->Joiningdate=Joiningdate;
             this->Companyname=Companyname;
             }
    void  setEmployeesalary(int Employeesalary){this-> Employeesalary= Employeesalary;}
    int getEmployeesalary(){return Employeesalary;}
     void setEmployeeId(string EmployeeId){this->EmployeeId=EmployeeId;}
    string getEmployeeId(){return EmployeeId;}
     void setdesignation(string designation){this->designation=designation;}
    string getdesignation(){return designation;}
     void setWorkinghour(int Workinghour){this->Workinghour=Workinghour;}
    int getWorkinghour(){return Workinghour;}
     void setEmail(string Email){this->Email=Email;}
    string getEmail(){return Email;}
     void setJoiningdate(string Joiningdate){this->Joiningdate=Joiningdate;}
    string getJoiningdate(){return Joiningdate;}
     void setCompanyname(string Companyname){this->Companyname=Companyname;}
    string getCompanyname(){return Companyname;}

    void showEmployee(){
    showPerson();
    cout<<"Employee Salary:"<<Employeesalary<<endl;
    cout<<"Employee Id:"<<EmployeeId<<endl;
    cout<<"Designation:"<<designation<<endl;
    cout<<"Working Hour:"<<Workinghour<<endl;
    cout<<"Email:"<<Email<<endl;
    cout<<"Joining Date:"<<Joiningdate<<endl;
    cout<<"Company Name:"<<Companyname<<endl;
    }
};
class Faculty: public Employee{
    protected:
    int numberofcourse;
    string Mobileno;
    int numberofdepartment;
public:
    Faculty(string name,
             int age,
             string Gender,
             long int Employeesalary,
             string EmployeeId,
             string designation,
             int Workinghour,
             string Email,
             string Joiningdate,
             string Companyname,
             int numberofcourse,
              string Mobileno,
              int numberofdepartment):Employee(name,age,Gender,Employeesalary,EmployeeId,designation,Workinghour,Email,Joiningdate,Companyname),
              Person(name,age,Gender){
                  cout<<"Faculty Constructor is called "<<endl;
              this->numberofcourse=numberofcourse;
              this->Mobileno=Mobileno;
              this->numberofdepartment=numberofdepartment;
              }
              void setnumberofcourse(int numberofcourse){this->numberofcourse =numberofcourse;}
              int getnumberofcourse(){return numberofcourse;}
              void setMobileno(string Mobileno){this->Mobileno =Mobileno;}
              string getMobileno(){return Mobileno;}
              void setnumberofdepartment(int numberofdepartment){this->numberofdepartment =numberofdepartment;}
             int getnumberofdepartment(){return numberofdepartment;}

             void showFaculty(){

              showEmployee();
              cout<<"Number of course:"<<numberofcourse<<endl;
              cout<<"Mobile number:"<<Mobileno<<endl;
              cout<<"Number of department:"<<numberofdepartment<<endl;

            }


              };
  class Officer:public Employee{
      protected:
      int numberofAnnex;
  public:
      Officer(string name,
             int age,
             string Gender,
             long int Employeesalary,
             string EmployeeId,
             string designation,
             int Workinghour,
             string Email,
             string Joiningdate,
             string Companyname,
             int numberofcourse,
              string Mobileno,
              int numberofdepartment,
              int numberofAnnex):Employee(name,age,Gender,Employeesalary,EmployeeId,designation,Workinghour,Email,Joiningdate,Companyname),
              Person(name,age,Gender){
                  cout<<"Officer Constructor is called "<<endl;
              this->numberofAnnex=numberofAnnex;
              }
              void setnumberofAnnex(int numberofAnnex){this->numberofAnnex=numberofAnnex;}
              int getnumberofAnnex(){return numberofAnnex;}

              void showOfficer(){
                  showEmployee();
                  cout<<"number of annex:"<<numberofAnnex<<endl;

              }

      };
      class Student:virtual public Person{
      protected:
      float CGPA;
    string section;
    string Id;
    string Department;
    string Institution;
    string semester;
    string BloodGroup;
  public:
    Student(string name,
            int age,
            string Gender,
            float CGPA,
            string section,
            string Id,
            string Department,
            string Institution,
            string semester,
            string BloodGroup):Person(name,age,Gender){
                cout<<"Student Constructor is called "<<endl;
              this->CGPA=CGPA;
              this->section=section;
              this->Id=Id;
              this->Department=Department;
              this->Institution=Institution;
              this->semester=semester;
              this->BloodGroup=BloodGroup;
              }
              void setCGPA(float CGPA){this->CGPA =CGPA;}
              float getCGPA(){return CGPA;}
              void setsection(string section){this->section =section;}
              string getsection(){return section;}
              void setId(string Id){this->Id =Id;}
              string getId(){return Id;}
              void setDepartment(string Department){this->Department =Department;}
              string getDepartment(){return Department;}
              void setInstitution(string Institution){this->Institution =Institution;}
              string getInstitution(){return Institution;}
              void setsemester(string semester){this->semester =semester;}
             string getsemester(){return semester;}
              void setBloodGroup(string BloodGroup){this->BloodGroup =BloodGroup;}
              string getBloodGroup(){return BloodGroup;}

              showStudent(){
              showPerson();
              cout<<"CGPA:"<<CGPA<<endl;
              cout<<"Section:"<<section<<endl;
              cout<<"ID:"<<Id<<endl;
              cout<<"Department:"<<Department<<endl;
              cout<<"Institution:"<<Institution<<endl;
              cout<<"Current Semester:"<<semester<<endl;
              cout<<"Blood Group:"<<BloodGroup<<endl;
              }
      };
   class ScholarshipStudent:public Student{
   protected:
       float Minimumcgpa;
       string Scholarshipyear;
       float Scholarshippercentage;
   public:
     ScholarshipStudent(string name,
            int age,
            string Gender,
            float CGPA,
            string section,
            string Id,
            string Department,
            string Institution,
            string semester,
            string BloodGroup,
            float Minimumcgpa,
            string Scholarshipyear,
            float Scholarshippercentage):Student(name,age,Gender,CGPA,section,Id,Department,Institution,semester,BloodGroup),Person(name,age,Gender){
            cout<<"Scholarship Student Constructor is called "<<endl;
            this->Minimumcgpa=Minimumcgpa;
            this->Scholarshipyear=Scholarshipyear;
            this->Scholarshippercentage=Scholarshippercentage;
            }

            void setMinimumcgpa(float Minimumcgpa){this->Minimumcgpa =Minimumcgpa;}
              float getMinimumcgpa(){return Minimumcgpa;}
              void setScholarshipyear(string Scholarshipyear){this->Scholarshipyear =Scholarshipyear;}
             string getScholarshipyear(){return Scholarshipyear;}
              void setScholarshippercentage(float Scholarshippercentage){this->Scholarshippercentage =Scholarshippercentage;}
              float getScholarshippercentage(){return Scholarshippercentage;}

              void showScholarshipStudent(){
              showStudent();
              cout<<"Minimum CGPA Required for Scholarship:"<<Minimumcgpa<<endl;
              cout<<"Year of Getting Scholarship:"<<Scholarshipyear<<endl;
              cout<<"Percentage of Scholarship:"<<Scholarshippercentage<<endl;
              }
   };


class TeachingAssistant:public Employee,public Student{
protected:
    string Task;
public:

    TeachingAssistant(string name,
            int age,
            string Gender,
            float CGPA,
            string section,
            string Id,
            string Department,
            string Institution,
            string semester,
            string BloodGroup,
             long int Employeesalary,
             string EmployeeId,
             string designation,
             int Workinghour,
             string Email,
             string Joiningdate,
             string Companyname,
             string Task):Employee(name,age,Gender,Employeesalary,EmployeeId,designation,Workinghour,Email,Joiningdate,Companyname),Student(name,age,Gender,CGPA,section,Id,Department,Institution,semester,BloodGroup),Person(name,age,Gender){
              cout<<"Teaching Assistant Constructor is called "<<endl;
              this->Task=Task;
              }

              void setTask(string Task){this->Task=Task;}
              string getTask(){return Task;}

              void showTeachingAssistant(){
              showStudent();
              showEmployee();
              cout<<"task:"<<Task<<endl;
              }
};


int main(){
    Person p("Mahamud Hasan",20,"Male");
    p.showPerson();
    Employee e("Bahar Uddin",48,"Male",20000,"298876","Dhaka",8,"Baharuddin@gmail.com","7 Auguest","Delloite Ltd");
    e.showEmployee();
    Faculty f("Rifath Mahmud",32,"Male",65000,"201-267-1","Dhaka",20,"rifath.mahmud.aiub.edu","16th january","American International University-Bangladesh",2,"016174433333",10);
    f.showFaculty();
    Officer o("Azgar Shuvo",29,"Male",44000,"108-234-54","Dhaka",9,"azgarshuvo@gmail.com","25 March","American International University-Bangladesh",2,"017129345667",10,20);
    o.showOfficer();
    Student st("Mahamud Hasan",20,"Male",0.00,"B7","20-42202-1","CSE","American International University-Bangladesh","SPRING 2019-20","O+");
    st.showStudent();
    ScholarshipStudent ss("Monayem Siam",21,"Male",0.00,"B7","20-42222-1","CSE","American International University-Bangladesh","SPRING 2019-20","O+",3.75,"2020",10.0);
    ss.showScholarshipStudent();
    TeachingAssistant TA("Sanzida Rahman",19,"Female",3.94,"B7","741-5-963","CSE","American International University-Bangladesh","Summer 2015-16","AB-",0000,"15-31169-2","",6,"sithiyaspriha420@gmail.com","19th january","American International University-Bangladesh","Reviewing");
    TA.showTeachingAssistant();



return 0;
}
