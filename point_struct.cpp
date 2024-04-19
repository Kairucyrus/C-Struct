//commented out code indicates the previous attempt, compare with the final

#include <iostream>
#include <string>
#include <iomanip> //used to set the width of each column in the table (setw() function)


using namespace std;


struct db {
    static int nextPrimaryKey; // instead of having to assgn every employee a primary key, we can do this by use of an auto increment primary key
    //the static int nextPrimaryKey keeps track of the next available primary key. With every instance of db this will be incremented

    int PRIM_KEY; //
    string name;
    int age;
    float salary; 
    string category;
    
    string position;//
    string department;//
    string status;
    bool eligible_for_promotion; //


    db(string eName, string eCategory, string eDepartment, string ePosition, string eStatus, bool eEligible_for_promotion, float eSalary, int eAge){
        PRIM_KEY = nextPrimaryKey++;

        age = eAge;
        // salary = stof(eSalary);
        salary = eSalary;


        name = eName;
        category = eCategory;
        department = eDepartment;
        position = ePosition;
        status = eStatus;
        eligible_for_promotion = eEligible_for_promotion;
    }

    void display_details(){
        
        cout <<left << setw(15) <<name << setw(10) <<PRIM_KEY << setw(6) <<age << setw(16) <<department << setw(12) <<position << setw(10) <<status << setw(12) <<category << setw(10) <<salary << setw(10) <<eligible_for_promotion <<endl;
        
        /* First shot
        cout<<"Name: "<<name<<endl;
         cout<<"PRIM_KEY: "<<PRIM_KEY<<endl;
         cout<<"Age: "<<age<<endl;
         cout<<"Salary: "<<salary<<endl;
         cout<<"Category: "<<category<<endl;
         cout<<"Department: "<<department<<endl;
         cout<<"Position: "<<position<<endl;
         cout<<"Status: "<<status<<endl;
         cout<<"Eligible for promotion: "<<eligible_for_promotion<<endl;
         cout<<"\n";
         */
    }
};
int db::nextPrimaryKey = 1; //static member initialized outside class definition


int main() {
    // int x;
    // int *p;
    // p = &x;
    // cout << "Enter an int: ";
    // cin>>x;
    // cin.ignore();
    // cout<<"Value entered: "<<*p<< "\n";

    // cin.get();
    //creating struct instances for every employee

    db dbs("Zakwangu", "Banking", "Finance", "Manager", "Active", true, 10000, 25);
    db db2("Zakwao", "Farming", "Agriculture", "CEO", "Active", true, 102000, 22);
    db db3("Zakwenu", "Farming", "Agriculture", "Farmer", "Active", false, 12000, 32);
    db db4("Zakwetu", "Farming", "Agriculture", "Farmer", "Active", false, 14000, 27);
    db db5("Zakwako", "Management", "Infrastructure", "Care Taker", "Active", true, 21000, 28);
    db db6("Zakwake", "Fitness", "Health", "Masseur", "Active", true, 19000, 36);
     db *pt, *pt1, *pt2, *pt3, *pt4, *pt5; //creating pointers for each struct instance
     pt = &db2;
     pt1 = &dbs;
     pt2 = &db3;
     pt3 = &db4;
     pt4 = &db5;
     pt5 = &db6;
    

     cout <<left << setw(15)<<"NAME" << setw(10) <<"PRIM_KEY" << setw(6) <<"AGE" << setw(16) <<"Department" << setw(12) <<"Position" << setw(10) <<"Status" << setw(12) <<"Category"<< setw(10) <<"Salary" << setw(10)<<"Eligibility" <<endl;
     pt1->display_details();
    //  cout<<"\n";
    //print employee details using corresponding pointers
     pt->display_details();
     pt2->display_details();
     pt3->display_details();
     pt4->display_details();
     pt5->display_details();
     cout<<"\n";

    /*below was the first trial without the use of the constructor for the structure. Exhausting, innit?
    if we had more categories than we do, it would look tedious (listing categories per line)

    
    dbs.name = "Leave'Em Alone";
    
     dbs.age = 25;
    dbs.salary = 10000;
    dbs.PRIM_KEY = 1;
    dbs.category = "Banking";
    dbs.position = "Manager";
    dbs.department = "Finance";
    dbs.status = "Active";
    dbs.eligible_for_promotion = true;


   pt = &dbs;

    

    cout << "Name: " << dbs.name << "\n";
    cout << "Age: " << dbs.age << "\n";
    cout << "Salary: " << dbs.salary << "\n";
    cout << "PRIM_KEY: " << dbs.PRIM_KEY << "\n";
    cout<<"AGE: "<<pt ->age << "\n";
    cout<<"NAME: "<<pt ->name << "\n";
    cout<<"SALARY: "<<pt ->salary << "\n";
    cout<<"CATEGORY: "<<pt ->category << "\n";
    cout<<"POSITION: "<<pt ->position << "\n";
    cout<<"DEPARTMENT: "<<pt ->department << "\n";
    cout<<"STATUS: "<<pt ->status << "\n";
    cout<<"ELIGIBILITY: "<<pt ->eligible_for_promotion << "\n";
    cout<<"PRIM_KEY: "<<pt ->PRIM_KEY << "\n";
    dbs.display_details();
    db2.display_details();
    */

    
    return 0;

}
