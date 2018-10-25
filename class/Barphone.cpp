class Barphone: public Phone
{
    public:
    string torch;
    string keypad;
    string radio;

    Barphone(string names,string models,string colors,string no_of_sims,string prices,string avail):phone(names,models,colors,no_of_sims,prices)
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