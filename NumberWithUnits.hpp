#include <iostream>
#include <string>
#include<map>
using namespace std;

namespace ariel{
    
    class NumberWithUnits{
        
       	public:
            static inline map<string, double> table;
            string sys;
            double size;
            
        
                    //constructor with params
            NumberWithUnits(double size, string sys){
                this->size = size;
                this->sys = sys;
            }
            //destructor with paramms
            ~NumberWithUnits(){}
            //read file
            static void read_units(ifstream& file);
            //bool functions overloading
            friend bool operator<(const NumberWithUnits& x, const NumberWithUnits& y);
            friend bool operator>(const NumberWithUnits& x, const NumberWithUnits& y);
            friend bool operator<=(const NumberWithUnits& x, const NumberWithUnits& y);
            friend bool operator>=(const NumberWithUnits& x, const NumberWithUnits& y);
            friend bool operator==(const NumberWithUnits& x, const NumberWithUnits& y);
            friend bool operator!=(const NumberWithUnits& x, const NumberWithUnits& y);

            //arithmetic functions overloading

            //plus
            friend const NumberWithUnits operator+(const NumberWithUnits& x, const NumberWithUnits& y);
            friend NumberWithUnits operator+(const NumberWithUnits& other);
            friend NumberWithUnits& operator+=(NumberWithUnits& x, const NumberWithUnits& y);
            friend NumberWithUnits operator++(NumberWithUnits& other);
            friend NumberWithUnits operator++(NumberWithUnits& other, int num);
            //minus
            friend const NumberWithUnits operator-(const NumberWithUnits& x, const NumberWithUnits& y);
            friend NumberWithUnits operator-(const NumberWithUnits& other);
            friend NumberWithUnits& operator-=(NumberWithUnits& x, const NumberWithUnits& y);
            friend NumberWithUnits operator--(NumberWithUnits& other);
            friend NumberWithUnits operator--(NumberWithUnits& other, int num);
            //multiply
            friend NumberWithUnits operator*(NumberWithUnits& other, double num);
            friend NumberWithUnits operator*(double num, NumberWithUnits& other);
            friend NumberWithUnits operator*=(NumberWithUnits& other, double num);
            friend NumberWithUnits operator*=(double num,NumberWithUnits& other);
            
            //stream funstions overloading
            friend std::ostream& operator<<(ostream& out, const NumberWithUnits& other);
            friend std::istream& operator>>(istream& in, NumberWithUnits& other);

    };
}