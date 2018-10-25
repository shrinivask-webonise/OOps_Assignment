class Phone
{
    public:
    string price;
    string name;
    string color;
    string model;
    string no_of_sim;

    Phone(string names,string models,string colors,string no_of_sims,string prices)
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