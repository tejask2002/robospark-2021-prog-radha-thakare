#include<bits/stdc++.h>
using namespace std;

class prof_data{
public:
     prof_data()
     {
         organization="ISRO";
         job_profile="scientist-engineer";
         project="space reaserch";
     }
     void get_prof_data()
     {
         cout<<"\nyour professional data:";
         cout<<"\noragaization name:"<<organization;
         cout<<"\njob profile:"<<job_profile;
         cout<<"\nproject:"<<project<<endl;
     }
protected:
    string organization;
    string job_profile;
    string project;


};
class acad_data{
 public:
     acad_data()
     {
         pass_year="2020";
         cgpa=9.5;
         college_name="VIT pune";
         branch="computer engineering";
     }
     void  get_acad_data()
     {
         cout<<"\nYour acadamic data:";
         cout<<"\npass year:"<<pass_year;
         cout<<"\nCGPA:"<<cgpa;
         cout<<"\ncollege name:"<<college_name;
         cout<<"\nbranch name:"<<branch<<endl;
     }
protected:
    string pass_year;
    float cgpa;
    string college_name;
    string branch;
};
class personal_data{
public:
    personal_data()
    {
        name="tejas";
        surname="katkade";
        adress=" city:nashik state:maharashtra india";
        DOB="25/5/2002";
    }
    void get_personal_data()
    {
        cout<<"\nYour personal data";
        cout<<"\nname:"<<name;
        cout<<"\nsurname:"<<surname;
        cout<<"\nadress:"<<adress;
        cout<<"\n date og birth:"<<DOB<<endl;

    }
protected:
    string name;
    string surname;
    string adress;
    string mobile_no;
    string DOB;

};
class bio_data:public prof_data,public acad_data ,public personal_data
{
public:
       bio_data()
       {
       }
       void all_data()
       {
           get_prof_data();
           get_personal_data();
           get_acad_data();
       }
};
int main()
{
    bio_data obj;
    obj.get_acad_data();
    obj.get_personal_data();
    obj.get_prof_data();
    obj.all_data();
}

