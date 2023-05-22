#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;

 string Doc_name[10] = {"Julien Bieber", "Elias Kefale", "Werku Adinew", "Hewan Seifu", "Surafel Jr"};
 string Job_type[10] = {"Doctor", "Laboratorist", "Doctor", "Laboratorial", "Doctor"};
 string Doc_gender[10] = {"M", "M", "M", "F", "M"};
 string Doc_address[10] = {"Piyasa", "Megenagna", "Mexico", "Mexico", "Bole"};
 int Doc_age[10] = {30, 32, 38, 26, 29};
 int ID[10] = {0123, 1234, 2345, 3456, 4567, 5678, 6789, 7890,8901, 9012};
 int PRICE[10] = {5000, 5000, 5000, 6000, 6000, 6000, 7000, 7000, 7000, 7000};
 long long int Doc_phone[10] = {912121212, 913131313, 914141414 , 915151515, 916161616};

 string Pat_name[10] = {"Julien Bieber", "Elias Kefale", "Werku Adinew", "Hewan Seifu", "Surafel Jr"};
 int Pat_age[10] = {16, 22, 69, 45, 11};
 string Pat_address[10] = {"Jemo", "Megenagna", "Summit", "Goro", "Arabsa"};
 string Pat_gender[10] = {"F", "F", "M", "M", "M"};
 string BLOOD_TYPE[] = {"A+", "A-", "B+", "B-", "AB+", "AB-", "O+", "O-"};
 long long int Pat_phone[10] = {911111111, 910101010, 911114444 , 915155555, 911116666};

// const string JOB_TYPE[2] = {"Doctor", "Laboratorial"};

struct conditions{
    virtual void condition() = 0;
};

struct reception//:conditions
{
    //variable used in "void date()" function
    int day;

    //variable used in "void new_dr_register()" function
    string d_name[10];
    int d_phone_number[10];
    int d_phone_number2[10];
    char d_address[20];
    char d_official_id[20];
    char d_gender[10];
    int d_age[10];
    string job_type[10];
    

    //variable used in "void patient_register()" function
    string p_name[10];
    int p_phone_number[10];
    string p_address[10];
    char p_gender[10];
    int p_age[10];

    //variable used in "void doctors_data()" function
    int d_id[10];
    string d_job_status[10];
    string d_appointment_status[10];
    int d_price[10];

    //variable used in "void patients_data()" function
    string blood_type[8];
    string p_appointment_status[10];
    

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
        //'i' to be static 
        static int i;
        //for inputting doctor information starting from array of index 5
        for(i = 5; i < 10; i++)
        {
            cout<<"Enter Full name                  : ";
            // cin.get(d_name, 100);
            cin>>d_name[5];
            cout<<"Enter age                        : ";
            cin>>d_age[5];
            cout<<"Enter gender                     : ";
            cin>>d_gender[5];
            cout<<"Enter Phone number               : ";
            cin>>d_phone_number[5];
            cout<<"Enter Second Phone number        : ";
            cin>>d_phone_number2[5]; 
            cout<<"Enter your address               : ";
            cin>>d_address[5];
            cout<<"Enter official id or kebele id   : ";
            cin>>d_official_id[5];
            cout<<"Enter Job type                   : ";
            cin>>job_type[5];
            cout<<endl;
            break;
        }
    }

    void patient_register()
    {
        //'i' to be static 
        static int i;
        //for inputting patient information starting from array of index 5
        for(i = 5; i < 10; i++)
        {
            cout<<"Enter Full name       : ";
            getline(cin, p_name[5]);
            cout<<"Enter age             :";
            cin>>p_age[5];
            cout<<"Enter gender          :";
            cin>>p_gender[5];
            cout<<"Enter Phone number    :";
            cin>>p_phone_number[5];
            cout<<"Enter your address    :";
            cin>>p_address[5];
            cout<<endl;
            break;
        }
    }

    void doctors_data()
    {
        //
        cout<<"===========================+"<<endl;
        srand(time(NULL));
        int index = rand() % 5;
        cout<<" NAME                 :"<<d_name[index]<<endl;
        cout<<" AGE                  :"<<d_age[index]<<endl;
        cout<<" SEX                  :"<<d_gender[index]<<endl;
        cout<<" ID                   :"<<d_id[index]<<endl;
        //something for display job status
        cout<<" JOB STATUS           :"<<d_job_status<<endl;
        cout<<" PHONE NUMBER         :"<<d_phone_number[index]<<endl;
        //something condition for displaying appointment status
        cout<<" APPOINTMENT STATUS   :"<<d_appointment_status<<endl;
        srand(time(NULL));
        int price = rand() % 10;
        d_price[0] = PRICE[price];
        cout<<" PRICE                :"<<d_price[0]<<endl;
        cout<<" PRICE RELEASED DAY   :"<<day<<endl;
        cout<<"==========================="<<endl;
    }

    void patients_data()
    {
        cout<<"==============================================="<<endl;
        srand(time(NULL));
        int index = rand() % 5;
        cout<<" NAMe                 :"<<p_name[index]<<endl;
        cout<<" AGE                  :"<<p_age[index]<<endl;
        cout<<" SEX                  :"<<p_gender[index]<<endl;
        cout<<" PHONE NUMBER         :"<<p_phone_number[index]<<endl;
        srand(time(NULL));
        int random_b_t = rand() % 8;
        blood_type[0] = BLOOD_TYPE[random_b_t];
        cout<<" BLOOD TYPE           :"<<blood_type[0]<<endl;
        //some condition for displaying patient appointment status
        cout<<" APPOINTMENT STATUS   :"<<p_appointment_status<<endl;
        cout<<" ADDRESS              :"<<p_address[index]<<endl;
        cout<<"================================================"<<endl;
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
        if(d_appointment_status[0] == "HAVE")
            cout<<d_name[0]<<" have an appointment\n";
        else
            cout<<d_name[0]<<" have not an appointment\n";
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
        //some statement to check the doctor is free

        srand(time(NULL));
        int index = rand() % 5;
        cout<<"Hey "<<rec.p_name[index]<<" my name is Dr. "<<rec.d_name[index]<<". I'm ur doctor now."<<endl;
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
            srand(time(NULL));
            int index = rand() % 10;
            rec.d_appointment_status[index] = "HAVE\n";  
            rec.p_appointment_status[index] = "HAVE\n";
            cout<<"And so you'll have appointment\n";
        }
        else
        {
            srand(time(NULL));
            int index = rand() % 10;
            rec.d_appointment_status[index] = "NOTHING\n";  
            rec.p_appointment_status[index] = "NOTHING\n";
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
        cout<<"+       5. EXIT PROGRAM                                        +"<<endl;
        cout<<"+                                                              +"<<endl;
        cout<<"+==============================================================+"<<endl;

        cin>>Choose;
        if (Choose == '1')
        {
            line252:
            r.patient_register();
            char again;
            cout<<"Enter 1 to register another patient or 0 to goto reception\n";
            ln_in:
            cin>>again;
            if(again == '1')
                goto line252;
            else if(again == '0')
                goto ln_rec;
            else{
                cout<<"Wrong input try again\n";
                goto ln_in; 
                }
        }
        else if (Choose == '2')
        {
            line272:
            r.new_dr_register();
            char again;
            cout<<"Enter 1 to register another doctor or 0 to goto reception\n";
            ln_inn:
            cin>>again;
            if(again == '1')
                goto line272;
            else if(again == '0')
                goto ln_rec;
            else{
                cout<<"Wrong input try again\n";
                goto ln_inn; 
                }
        }
        // else if (Choose == '3')
        // {
        //     r.
        // }
        else if (Choose == '4')
        {
            line292:
            r.data_management();
            char again;
            cout<<"Enter 1 to look again or 0 to goto reception\n";
            ln_innn:
            cin>>again;
            if(again == '1')
                goto line292;
            else if(again == '0')
                goto ln_rec;
            else{
                cout<<"Wrong input try again\n";
                goto ln_innn; 
                }
        }
    }
}