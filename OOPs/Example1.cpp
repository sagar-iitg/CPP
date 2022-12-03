#include<iostream>
using namespace std;

class codehelp{



        public:
            int subs;
            int views;

        codehelp()
        {
            cout<<"I am in constructor"<<endl;


        }


        int getSubs()
        {
            return subs;

        }

        void setSubs(int value){
            subs=value;
        }

        void print(){
            cout<<subs<<endl;

        }
};

int main()
{


    // cout<<"hello";
    // std:cout<<sizeof(codehelp);
    codehelp a;
    codehelp *b=new codehelp();
    




}