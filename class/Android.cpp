class Android:public Smartphone
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