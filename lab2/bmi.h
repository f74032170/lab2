#ifndef bmi_h_include
#define bmi_h_include
using namespace std;

class BMI
{
      public:
             void setheight(double );
             void setmass(double );
             double getbmi();
             
      private:
              double height;
              double mass;
              double bmi;
};
#endif

