#include<iostream>
#include"bmi.h"
#include<fstream>
#include<string>
#include<cstdlib>
using namespace std;
int main(){
    ifstream data("file.in",ios::in);
    ofstream test("file.out",ios::out);
    string buffer;
    double x;
    int i=1;
    BMI d;
    while(data>>buffer){x=atof(buffer.c_str());
                        if((i%2)==1){d.setheight(x);}
                        else {d.setmass(x);
                        if(d.getbmi()<15){test<<d.getbmi()<<"  "<<"very severely underweight"<<endl;}
                        else if(d.getbmi()<16&&d.getbmi()>15){test<<d.getbmi()<<"  "<<"severely underweight"<<endl;}
                        else if(d.getbmi()<18.5&&d.getbmi()>16){test<<d.getbmi()<<"  "<<"underweight"<<endl;}
                        else if(d.getbmi()<25&&d.getbmi()>18.5){test<<d.getbmi()<<"  "<<"normal"<<endl;}
                        else if(d.getbmi()<30&&d.getbmi()>25){test<<d.getbmi()<<"  "<<"overweight"<<endl;}
                        else if(d.getbmi()<35&&d.getbmi()>30){test<<d.getbmi()<<"  "<<"Moderately obese"<<endl;}
                        else if(d.getbmi()<40&&d.getbmi()>35){test<<d.getbmi()<<"  "<<"Severely obese"<<endl;}
                        else {test<<d.getbmi()<<"  "<<"Very severely obese"<<endl;}
                      
                        }i=i+1;}
                   
                        test.close();
}
                        
                                     
                        

