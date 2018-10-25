class Smartphone: public Phone
{
  public:
  string fastcharging;
  string fingerprint;
  string wifi;
  string faceunlock;
  string camera;

  Smartphone(string names,string models,string colors,string no_of_sims,string prices,string s):phone(names,models,colors,no_of_sims,prices)
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