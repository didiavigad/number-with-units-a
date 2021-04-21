#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <algorithm>
#include "NumberWithUnits.hpp"

using namespace std;

namespace ariel{

    void NumberWithUnits::read_units(ifstream& file){}

   //bool functions overloading
    bool operator<(const NumberWithUnits& x, const NumberWithUnits& y) {
        return false;
    }
    bool operator>(const NumberWithUnits& x, const NumberWithUnits& y){
        return false;
    }
    
    bool operator<=(const NumberWithUnits& x, const NumberWithUnits& y){
       return false;
    }
    
    bool operator>=(const NumberWithUnits& x, const NumberWithUnits& y){
       return false;
    }
    
    bool operator==(const NumberWithUnits& x, const NumberWithUnits& y){
        return false;
    }
    
    bool operator!=(const NumberWithUnits& x, const NumberWithUnits& y){
        return false;
    }

    //arithmetic functions overloading
    const NumberWithUnits operator+(const NumberWithUnits& x, const NumberWithUnits& y){
       return x;
    }

    NumberWithUnits operator+(const NumberWithUnits& other){
        return other;
    }
    
    NumberWithUnits& operator+=(NumberWithUnits& x, const NumberWithUnits& y){
       return x;
    }
    
    const NumberWithUnits operator-(const NumberWithUnits& x, const NumberWithUnits& y){
        return x;
    }
    
    NumberWithUnits operator-(const NumberWithUnits& other){
        return other;
    }
    
    NumberWithUnits& operator-=(NumberWithUnits& x, const NumberWithUnits& y){
        return x;
    }
    
    NumberWithUnits operator++(NumberWithUnits& other){
        return other;
    }

    NumberWithUnits operator++(NumberWithUnits& other, int num){
        return other;
    }
    
    NumberWithUnits operator--(NumberWithUnits& other){
        return other;
    }

    NumberWithUnits operator--(NumberWithUnits& other, int num){
        return other;
    }
    
    NumberWithUnits operator*(NumberWithUnits& other, double num){
        return other;
    }
    
    NumberWithUnits operator*(double num, NumberWithUnits& other){
        return other;
    }
    
    NumberWithUnits operator*=(NumberWithUnits& other, double num){
        return other;
    }
    
    NumberWithUnits operator*=(double num, NumberWithUnits& other){
        return other;
    }

    //stream overloading
    ostream& operator<<(ostream& cout, const NumberWithUnits& other){ 
        return cout;
    }
    
    istream& operator>>(istream& cin, NumberWithUnits& other){
        return cin;
    }
    
}