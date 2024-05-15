//Angie Diaz 
//Summer 2024
//To-Do List Project: Date.h
//Class that tracks date of when something is due, must be able to set a month, day, year and return these dates, print, and potentially modify later on 
//Need to have some input validation (maybe do this in main so we dont deal with it here)
#include <iostream>
#include <string>

class Date {
    private:
        int day=1; 
        int month=1;
        int year=2000; 
    public: 
        Date()=default;
        //format of input by user must be: MM/DD/YYYY
        Date(std::string time) {
            //need to parse thru the format to set the month/day/year

        }

        //Accessor functions
        int getDay();
        int getMonth();
        int getYear();
        void printDate();


};