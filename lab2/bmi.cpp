#include"bmi.h"

               void BMI::setheight(double Height){height=Height/100;}
               void BMI::setmass(double Mass){mass=Mass;}
               double BMI::getbmi(){bmi=mass/(height*height);return bmi;}
               
              

