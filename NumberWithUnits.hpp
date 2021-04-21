#include <iostream>
#include <string>
#include<map>
using namespace std;

namespace ariel{
    
    class NumberWithUnits{
        
        private:
            static inline map<string, double> table;
            double size;
            string sys;
        
        public:
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
            friend bool operator<(const NumberWithUnits& n1, const NumberWithUnits& n2);
            friend bool operator>(const NumberWithUnits& n1, const NumberWithUnits& n2);
            friend bool operator<=(const NumberWithUnits& n1, const NumberWithUnits& n2);
            friend bool operator>=(const NumberWithUnits& n1, const NumberWithUnits& n2);
            friend bool operator==(const NumberWithUnits& n1, const NumberWithUnits& n2);
            friend bool operator!=(const NumberWithUnits& n1, const NumberWithUnits& n2);

            //arithmetic functions overloading

            //plus
            friend const NumberWithUnits operator+(const NumberWithUnits& n1, const NumberWithUnits& n2);
            friend NumberWithUnits operator+(const NumberWithUnits& n);
            friend NumberWithUnits& operator+=(NumberWithUnits& n1, const NumberWithUnits& n2);
            friend NumberWithUnits operator++(NumberWithUnits& n);
            friend NumberWithUnits operator++(NumberWithUnits& n, int);
            //minus
            friend const NumberWithUnits operator-(const NumberWithUnits& n1, const NumberWithUnits& n2);
            friend NumberWithUnits operator-(const NumberWithUnits& n);
            friend NumberWithUnits& operator-=(NumberWithUnits& n1, const NumberWithUnits& n2);
            friend NumberWithUnits operator--(NumberWithUnits& n);
            friend NumberWithUnits operator--(NumberWithUnits& n, int);
            //multiply
            friend NumberWithUnits operator*(NumberWithUnits& n, double d);
            friend NumberWithUnits operator*(double d, NumberWithUnits& n);
            friend NumberWithUnits operator*=(NumberWithUnits& n, double d);
            friend NumberWithUnits operator*=(double d, NumberWithUnits& n);
            
            //stream funstions overloading
            friend std::ostream& operator<<(ostream& out, const NumberWithUnits& n);
            friend std::istream& operator>>(istream& in, NumberWithUnits& n);

    };
}