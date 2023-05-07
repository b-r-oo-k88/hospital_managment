#include<iostream>
using namespace std;

struct recieption
{
    //variable used in "void date()" function
    int day;

    //variable used in "void new_dr_register()" function
    char d_name[30];
    int d_phone_number;
    int d_phone_number2;
    char d_address[20];
    char d_official_id[20];
    char d_gender;
    int d_age;
    string type;

    //variable used in "void new_patient_register()" function
    char p_name[30];
    int p_phone_number;
    char p_address[20];
    char p_gender;
    int p_age;

    void date()
    {
        int month;
        int year;

        cout<<"ENTER DAY"<<endl;
        cout<<"DD   :";
        cin>>day;
        cout<<"MM   :";
        cin>>month;
        cout<<"YYYY :";
        cin>>year;
        
    }
    
    void new_dr_register()
    {
        cout<<"Enter Full name      :";
        cin.get(d_name,30);
        cout<<"\nEnter age";
        cin>>d_age;
        cout<<"\nEnter gender";
        cin>>d_gender;
        cout<<"\nEnter Phone number :";
        cin>>d_phone_number;
        cout<<"\nEnter Second Phone number :";
        cin>>d_phone_number2;
        cout<<"\nEnter your address :";
        cin>>d_address;
        cout<<"\nEnter official id or kebele id :";
        cin>>d_official_id;
        cout<<"\nEnter Job type     :";
        cin>>type;
    }

    void patient_register()
    {
        cout<<"Enter Full name      :";
        cin.get(p_name,30);
        cout<<"\nEnter age";
        cin>>p_age;
        cout<<"\nEnter gender";
        cin>>p_gender;
        cout<<"\nEnter Phone number :";
        cin>>p_phone_number;
        cout<<"\nEnter your address :";
        cin>>p_address;
    }

    void doctors_data()
    {
    cout<<"===========================+"<<endl;
    cout<<" NAME                 :"<<d_name<<endl;
    cout<<" AGE                  :"<<d_age<<endl;
    cout<<" SEX                  :"<<d_gender<<endl;
    cout<<" ID                   :"<<""<<endl;
    cout<<" JOB TYPE             :"<<type<<endl;
    cout<<" JOB STATUS           :"<<""<<endl;
    cout<<" PHONE NUMBER         :"<<d_phone_number<<endl;
    cout<<" APPOINTMENT STATUS   :"<<""<<endl;
    cout<<" PRICE                :"<<""<<endl;
    cout<<" PRICE RELEASED DAY   :"<<day<<endl;
    cout<<"==========================="<<endl;
    }

    void patients_data()
    {
    cout<<"====================================="<<endl;
    cout<<" NAMe                 :"<<p_name<<endl;
    cout<<" AGE                  :"<<p_age<<endl;
    cout<<" SEX                  :"<<p_gender<<endl;
    cout<<" PHONE NUMBER         :"<<p_phone_number<<endl;
    cout<<" BLOOD TYPE           :"<<""<<endl;
    cout<<" APPOINTMENT STATUS   :"<<""<<endl;
    cout<<" ADDRESS              :"<<p_address<<endl;
    cout<<"====================================="<<endl;
    }

    void data_managment()
    {
        char actor;

        cout<<"Which Data could u want to access \'d\' for doctor & \'p\' for patient"<<endl;
        cin>>actor;
        if(actor == 'd')
            doctors_data();
        if(actor == 'p')
            patients_data();
    }
}r;

struct doctor
{

};

struct labratory
{

};

int main()
{
    r.date();
}