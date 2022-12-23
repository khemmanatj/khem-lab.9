#include<iostream>
#include<string>
using namespace std;
  int main(){
    double old;
     string one;
     cout<<"Enter your age: ";
    cin>> old;
    if(old<=25){
        double tall;
        cout<<"Enter your height: ";
        cin>>tall;
         
        if(tall<100){
           one="Chopper";
        }else if(tall<180){
           one="Usopp";
        }else{
            double bath;
            cout<<"Enter your bounty: ";
            cin>> bath;
        
             
            if(bath>1100000000){
                one="Zoro";
            }else{
                one="Sanji";
            }
        }
    }else if(old<=60){
        double dollar;
          cout<<"Enter your bounty: ";
            cin>> dollar;
           
        if(dollar>500000000){
           one="Jinbe";
        }else{
            one="Franky";
        }
    }else{
        one="Brook";
    }
     
     cout<<"Your character = "<< one ;

  }

