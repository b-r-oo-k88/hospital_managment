#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

const int ID[10] = {0123, 1234, 2345, 3456, 4567, 5678, 6789, 7890,8901, 9012};
const int PRICE[10] = {5000, 5000, 5000, 6000, 6000, 6000, 7000, 7000, 7000, 7000};
const string BLOOD_TYPE[8] = {"A+", "A-", "B+", "B-", "AB+", "AB-", "O+", "O-"};
// const string JOB_TYPE[2] = {"Doctor", "Laboratorial"};

struct conditions{
    virtual void condition() = 0;
};

struct reception//:conditions
{
    //variable used in "void date()" function
    int day;

    //variable used in "void new_dr_register()" function
    string d_name;
    int d_phone_number;
    int d_phone_number2;
    char d_address[20];
    char d_official_id[20];
    char d_gender;
    int d_age;
    string job_type;

    //variable used in "void patient_register()" function
    string p_name;
    int p_phone_number;
    char p_address[20];
    char p_gender;
    int p_age;

    //variable used in "void doctors_data()" function
    int d_id;
    string d_job_status;
    string d_appointment_status;
    int d_price;

    //variable used in "void patients_data()" function
    char blood_type[2];
    string p_appointment_status;
    

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
        cout<<"Enter Full name                  : ";
        getline(cin, d_name);
        cout<<"Enter age                        : ";
        cin>>d_age;
        cout<<"Enter gender                     : ";
        cin>>d_gender;
        cout<<"Enter Phone number               : ";
        cin>>d_phone_number;
        cout<<"Enter Second Phone number        : ";
        cin>>d_phone_number2; 
        cout<<"Enter your address               : ";
        cin>>d_address;
        cout<<"Enter official id or kebele id   : ";
        cin>>d_official_id;
        cout<<"Enter Job type                   : ";
        cin>>job_type;
        cout<<endl;
    }

    void patient_register()
    {
        cout<<"Enter Full name       : ";
        getline(cin, p_name);
        cout<<"Enter age             :";
        cin>>p_age;
        cout<<"Enter gender          :";
        cin>>p_gender;
        cout<<"Enter Phone number    :";
        cin>>p_phone_number;
        cout<<"Enter your address    :";
        cin>>p_address;
        cout<<endl;
    }

    void doctors_data()
    {
    cout<<"===========================+"<<endl;
    cout<<" NAME                 :"<<d_name<<endl;
    cout<<" AGE                  :"<<d_age<<endl;
    cout<<" SEX                  :"<<d_gender<<endl;
    cout<<" ID                   :"<<d_id<<endl;
    cout<<" JOB TYPE             :"<<job_type<<endl;
    cout<<" JOB STATUS           :"<<d_job_status<<endl;
    cout<<" PHONE NUMBER         :"<<d_phone_number<<endl;
    cout<<" APPOINTMENT STATUS   :"<<d_appointment_status<<endl;
    cout<<" PRICE                :"<<d_price<<endl;
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
    cout<<" BLOOD TYPE           :"<<blood_type<<endl;
    cout<<" APPOINTMENT STATUS   :"<<p_appointment_status<<endl;
    cout<<" ADDRESS              :"<<p_address<<endl;
    cout<<"====================================="<<endl;
    }

    void data_management()
    {
        char actor;

        cout<<"Which Data could u want to access \'d\' for doctor & \'p\' for patient"<<endl;
        cin>>actor;
        if(actor == 'd')
            doctors_data();
        if(actor == 'p')
            patients_data();
    }

    void dr_appointment_status()
    {
        // for(int i;)
        if(d_appointment_status == "HAVE")
            cout<<d_name<<" have an appointment\n";
        else
            cout<<d_name<<" have not an appointment\n";
    }

    // void condition()
    // {
    //     if()
    // }
}r;

struct doctor
{
    struct reception rec;

    string blood_type; // A+, A-, B+, B-, AB+, AB-, O+, O-
    int sugar_level; //mg/dL - (Milligrams per 100 milliliters) blood sugar level SI unit 
    int blood_pressure; // mmHg - (millimeter mercury) blood pressure SI unit
    int heart_rate; //bpm - (beat per minute) heart rate SI unit

    void dr_name()
    {
     cout<<"Hey "<<rec.p_name<<" my name is Dr. "<<rec.d_name<<". I'm ur doctor now."<<endl;
    }

    void dr_command1()
    {
     cout<<"So now i'll send u to the laboratory\n";   
    }

    void lab_data_receiver()
    {
        cout<<"Blood Type       : "<<blood_type<<endl;
        cout<<"Blood Pressure   : "<<blood_pressure<<"mmHg"<<endl;
        cout<<"Sugar Level      : "<<sugar_level<<"mg/dL"<<endl;
        cout<<"Heart Rate       : "<<heart_rate<<"bpm"<<endl;
    }

    void dr_command2()
    {
        if(heart_rate > 70 || sugar_level > 160 || sugar_level < 70 || blood_pressure >140/90 || blood_pressure < 90/60)
        {
            rec.d_appointment_status = "HAVE\n";  
            rec.p_appointment_status = "HAVE\n";
            cout<<"And so you'll have appointment\n";
        }
        else
        {
            rec.d_appointment_status = "NOTHING\n";  
            rec.p_appointment_status = "NOTHING\n";
        }
    }
}d;

struct laboratory
{
    struct doctor doc;
    struct reception rec;

    void lab_name()
    {
     cout<<"Hey "<<rec.p_name<<" my name is Dr. "<<rec.d_name<<". I'm ur doctor now."<<endl;
    }
    
    void lab_function()
    {
        srand(time(0));
        // int Id[10] = rand() 
    }
};
        
int main()
{
    char log_exit;

    cout<<"+==============================================================+"<<endl;
    cout<<"+                          WELCOME                             +"<<endl;
    cout<<"+                         RECEPTION                            +"<<endl;
    cout<<"+       1. LOGIN                                               +"<<endl;
    cout<<"+       2. EXIT                                                +"<<endl;
    cout<<"+                                                              +"<<endl;
    cout<<"+==============================================================+"<<endl;
    // cout<<"+==============================================================+"<<endl;
    // cout<<"+==============================================================+"<<endl;
    // cout<<"+==============================================================+"<<endl;
    cin>>log_exit;
    if(log_exit == '1')
    {
        //To enter day
        r.date();

        char Choose;

ln_rec:
        cout<<"+==============================================================+"<<endl;
        cout<<"+                         RECEPTION                            +"<<endl;
        cout<<"+                                                              +"<<endl;
        cout<<"+       1. PATIENT REGISTER                                    +"<<endl;
        cout<<"+       2. DOCTOR REGISTER                                     +"<<endl;
        cout<<"+       3. APPOINTMENT STATUS                                  +"<<endl;
        cout<<"+       4. DATA MANAGEMENT                                     +"<<endl;
        cout<<"+                                                              +"<<endl;
        cout<<"+==============================================================+"<<endl;

        cin>>Choose;
        if (Choose == '1')
        {
            line252:
            r.patient_register();
            char again;
            cout<<"Enter 1 to register another patient or 0 to goto reception\n";
            cin>>again;
            if(again == '1')
                goto line252;
            else if(again == '0')
                goto ln_rec;
            else
                cout<<"Wrong input try again\n";
        }
        else if (Choose == '2')
        {
            r.new_dr_register();
        }
        // else if (Choose == '3')
        // {
        //     r.
        // }
        else if (Choose == '2')
        {
            r.data_management();
        }
    }



}