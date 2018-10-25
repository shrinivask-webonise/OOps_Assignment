class Ios:public Smartphone
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