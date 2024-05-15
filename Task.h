//Angie Diaz 
//Summer 2024
//To-Do List Project: Task.h 
//Class that contains a task specified by the user and deadline 
//Must be able to return string of the task getTask(), markComplete(), return deadline, modify deadline and task, 
//Unsure about whether to have the deadline as a string or as a Date object 

#include <iostream>
#include <string>
#include "Date.h"

class Task {
    private:
        std::string description="";
        bool completion=false;
        Date date; 
    public: 
        //default constructor
        Task()=default;
        //constructor 
        Task(std::string g, Date d): description(g), date(d) completion(false) {}
        void markComplete();
        //void changeDeadline(); changing Date
        //void changeTask(); changing description


        //Accessor functions: 
        std::string getTask(); //returns the task description
        bool getCompletion(); //returns the completion 
        std::string getDeadline();






};