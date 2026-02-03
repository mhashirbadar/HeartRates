#include<iostream>
using namespace std;

class HeartRates{

    string firstname;
    int id;
    int day;
    int month;
    int year;
    
    public:
    HeartRates(string name,int identity,int day_,int month_,int year_){
        firstname = name;
        id = identity % 10;
        day = day_;
        month = month_;
        year = year_;
    }
    void setfirstName(string name){
        firstname = name;
    }
    void setDOB(int day_,int month_,int year_){
        day = day_;
        month = month_;
        year = year_;
    }
    
    string getName(){
        return firstname;
    }
    int getID(){
        return id;
    }
    int getDay(){
        return day;
    }
    int getMonth(){
        return month;
    }
    int getYear(){
        return year;
    }
    int getAge(){
        return 2026-year;
    }
    int GetMaximumHeartRate(){
        return 220 - getAge();
    }
    int getTargetHeartRate(){
        int THR = GetMaximumHeartRate();
        cout<<"\nRange of Target Heart Rate: "<<endl;
        cout<< GetMaximumHeartRate()*0.50 << " - " <<GetMaximumHeartRate()*0.85<< " bpm" << endl;
    }
    void display(){
       cout<<"First Name: "<<firstname<<endl;
       cout<<"Idenity number: "<<id<<endl;
       cout<<"Date of Birth: "<<day<<"/"<<month<<"/"<<year<<endl;
       cout<<"Your age in years: "<<getAge()<<"yrs"<<endl;
       cout<<"Your Maximum Heart Rate: "<<GetMaximumHeartRate()<<"bpm"<<endl;
       getTargetHeartRate();
    }
};

int main(){

    string name;
    int id,day,month,year;
    cout<<"Enter first name: ";
    cin>>name;
    cout<<endl<<"Enter Roll Number: ";
    cin>>id;
    cout<<endl<<"Enter Date of Birth: ";
    cin>>day;cin>>month;cin>>year;
    cout<<"\n";
    HeartRates x(name,id,day,month,year);
    x.display();

    return 0;
}