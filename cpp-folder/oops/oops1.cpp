#include<iostream>
#include <string>
using namespace std;


class Teacher{
  // properties / attributes
  private:
  double salary;

  // constructor is only called once at time of object creation
  // constructor ko kabhi private nhi declare krte h kyuki constructor ko main function se call krte h aur agar private hua to main function ke pass access nhi hoga
  // memory allocation happens when constructor is called
  public:
  Teacher() {
    cout << "Constructor called" << endl;
  }
  public:
  string name; 
  string dept;
  string subject;
  

  // methods
  void changeDept(string newDept) {
    dept = newDept;
  }

  // setter method to set the salary
  // this is called setter method
  // we can set the salary using this method
  // this is a public method, so we can access it from outside the class

  void setSalary(double newSalary) {
    salary = newSalary;
  }

  // we cannot access private members directly, so we create a public method to access it
  // this is called getter method
  double getSalary() {
    return salary;
  }
};

class Account {
  // encapsulation
  // we are using encapsulation to hide the data members of the class
  // we are using private access specifier to hide the data members of the class

  private:
  double balance;
  string password; //data hiding
  public:
    string accountId;
    string username;
};
int main(){
  Teacher t1;
  t1.name = "John Doe";
  t1.dept = "Computer Science";
  t1.subject = "Data Structures";
  // t1.salary = 50000.0; we cannot access private members directly
  t1.setSalary(50000.0); // we can set the salary using the setter method
  cout<<t1.name<<endl;
  cout<<t1.getSalary()<<endl; 
  return 0;
}
