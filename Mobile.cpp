#include <iostream>

using namespace std;
class phone
{
    public:
    string price;
    string name;
    string color;
    string model;
    string no_of_sim;
 
    phone(string names,string models,string colors,string no_of_sims,string prices)
    {
        name=names;
        model=models;
        color=colors;
        no_of_sim=no_of_sims;
        price=prices;
        
    }
    void sendsms()
    {
        cout<<"sending sms...."<<endl;
    }
    void call()
    {
        cout<<"calling...."<<endl;
    }
    void config()
    {
        cout<<"configuration"<<endl;
        cout<<"name"<<" "<<name<<endl<<"model"<<" "<<model<<endl<<"color"<<" "<<color<<endl<<"no_of_sims"<<" "<<no_of_sim<<endl<<"price"<<" "<<price<<endl;
    }
};
class smartphone: public phone
{
  public:
  string fastcharging;
  string fingerprint;
  string wifi;
  string faceunlock;
  string camera;
  
  smartphone(string names,string models,string colors,string no_of_sims,string prices,string s):phone(names,models,colors,no_of_sims,prices)
  {
      fastcharging=s;
      wifi=s;
      faceunlock=s;
      camera=s;
      
  }
  
  void browseinternet()
  {
      cout<<"Internet Browsing...."<<endl;
  }
  void sendemail()
  {
      cout<<"sending Email....."<<endl;
  }
  void takepicture()
  {
      cout<<"Taking picture..."<<endl;
  }
  void features()
  {   config();
      cout<<endl<<"fastcharging"<<" "<<fastcharging<<endl<<"fingerprint"<<" "<<fingerprint<<endl<<"wifi"<<" "<<wifi<<endl<<"faceunlock"<<" "<<faceunlock<<endl<<"camera"<<" "<<camera<<endl;
  }
};

class android:public smartphone
{
  public:
  string android_version;
  
  android(string names,string models,string colors,string no_of_sims,string prices,string s,string android_versn): smartphone(names,models,colors,no_of_sims,prices,s)
  {
    android_version=android_versn ; 
  }
  void android_details()
  {
      
      features();
      cout<<"features"<<endl;
      cout<<endl<<"android_version"<<android_version<<endl;
  }
};

class Ios:public smartphone
{
  public:
  string ios_version;
  
  Ios(string names,string models,string colors,string no_of_sims,string prices,string s,string ios_versn): smartphone(names,models,colors,no_of_sims,prices,s)
  {
    ios_version=ios_versn ; 
  }
  void ios_details()
  {
      
      features();
      cout<<"features"<<endl;
      cout<<endl<<"ios_version"<<ios_version<<endl;
  }
};


class barphone: public phone
{
    public:
    string torch;
    string keypad;
    string radio;
    
    barphone(string names,string models,string colors,string no_of_sims,string prices,string avail):phone(names,models,colors,no_of_sims,prices)
    {
        torch=avail;
        keypad=avail;
        radio=avail;
    }
    
    void torchon()
    {
        cout<<"Turning Torch on..."<<endl;
    }
    void playradio()
    {
        cout<<"Playing Radio..."<<endl;
    }
    void features()
    {   config();
        cout<<"Features"<<endl;
        cout<<"torch"<<" "<<torch<<endl<<"radio"<<" "<<radio<<endl;
    }
};


int main()
{
    int choice;
    cout<<"select phone- 1.smartphone"<<endl<<" 2.barphone"<<endl;
    std::cin>> choice;
    switch(choice)
    {
        case 1:cout<<"select smartphone"<<endl<<"1. android"<<endl<<" 2.ios"<<endl;
               cin>>choice;    
               switch(choice)
               {
                   case 1: cout<<"select brand 1.Samsung"<<endl<<" 2.xiaomi"<<endl;
                          std::cin >> choice;
                          switch(choice)
                          {
                            case 1:cout<<"select model:"<<endl<<" 1) S8"<<endl;  
                            std::cin >> choice;
                            switch(choice)
                            {
                             case 1:android a("samsung","s8","Blue","2","45000","yes","7.1");
                                   a.android_details();
                                  do{
                                  cout<<endl<<"what you want to do"<<endl<<"1)Browse Internet"<<endl<<"2)Send Email"<<endl<<"3)Make a Call"<<endl<<"4)Exit"<<endl;     
                                  cin>>choice;
                                  switch(choice)
                                  {
                                      case 1:a.browseinternet(); break;
                                      case 2:a.sendemail(); break;
                                      case 3:a.call(); break;

                                  }}while(choice!=4);
                                  break;
                            } break;
                           
                            case 2:cout<<"select model 1.Mi6"<<endl;
                            std::cin >> choice;
                            switch(choice)
                            {
                             case 1:android a("xiaomi","Mi6","Red","2","15000","yes","android_one");
                                  a.android_details();
                                 do{ 
                                 cout<<endl<<"what you want to do"<<endl<<"1)Browse Internet"<<endl<<"2)Send Email"<<endl<<"3)Make a Call"<<endl<<"4)Exit"<<endl;     
                                  cin>>choice;
                                  switch(choice)
                                  {
                                      case 1:a.browseinternet(); break;
                                      case 2:a.sendemail(); break;
                                      case 3:a.call(); break;

                                  }}while(choice!=4);
                            }
                           
                          }
                          break;
                    case 2:cout<<"Ios Device   1.iphone 8"<<endl;
                           cin>>choice;
                           switch(choice)
                           {
                               case 1:Ios iphone("apple","iphone 8","Rose Gold","2","55000","yes","12");
                                  iphone.ios_details();
                                  do{
                                   cout<<endl<<"what you want to do"<<endl<<"1)Browse Internet"<<endl<<"2)Send Email"<<endl<<"3)Make a Call"<<endl<<"4)Exit"<<endl;     
                                  cin>>choice;
                                  switch(choice)
                                  {
                                      case 1:iphone.browseinternet(); break;
                                      case 2:iphone.sendemail(); break;
                                      case 3:iphone.call(); break;

                                  }}while(choice!=4);

                                  break;
                           }
               }
               break;
               
        case 2:barphone barphone1("samsung","Guru","Black","2","1500","yes");       
               barphone1.features();
               cout<<endl;
               do{
               cout<<"What you want to do?"<<endl<<"1)torchon"<<endl<<"2)playradio"<<"3) Make a Call"<<endl<<"4) Exit"<<endl;
               cin>>choice;
               switch(choice)
               {
                case 1:
                barphone1.torchon();
                cout<<endl; break;
                case 2:
                barphone1.playradio(); break;
                case 3:
                barphone1.call(); break;
               }}while(choice!=4);    
           break;
    }          
    
    return 0;
}

