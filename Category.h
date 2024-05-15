//Angie Diaz 
//Summer 2024
//To-Do List Project: Category.h
//Class that will contain the name of the category sent in by user and a linked list of task objects
//Must allow user to add/delete tasks to this category and later on modify certain tasks
//Must also let each task be added with a deadline 

#include <string>
#include <list>
#include <iostream>
#include "Task.h"

class Category {
    private:
        std::string name="To-Do";
        std::list<Task>goals;

    public:
        //default constructor
        Category()=default;
        //constructor where user sends in the name of this new category 
        Category(std::string n) : name(n) {}

        //goals methods
        void addTasks(std::string, Date d);
        void deleteTasks(int n);
        void completeTask(); 
        void printList();

        //error handling methods
        bool goalsEmpty();
        bool taskComplete();
        bool taskExist(std::string);


};
