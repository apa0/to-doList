//Angie Diaz Summer 2024

#include "Category.h"

//method that adds a new Task to goals list, might want to add another parameter to take in a deadline 
void addTask(std::string t) {
    //need to instantiate a task object here
    if (!taskExist(t)) {
        Task goal(t);
        goals.push_back(goal);
    } else {
        std::cout<<"Unable to add task, already exists in "<<name<<" category."<<endl;
    }
    
}

//method to iterate over goals and print current list under Category
void printList() {
    std::cout<<name<<endl;
    //call method that underlines the category title depending on letters in name 
    for (const auto task: goals) {
        //call method in Task to print/return string of current task
        std::cout<<'Calling method in task to print current task'<<endl;
    }
}
//method to delete a Task in goals (make sure to call method that checks if task exists in list before deleting)

//method to mark a Task completed 

//ERROR HANDLING METHODS: 

//method to check if goals is empty 
bool goalsEmpty() {
    if (goals.is_empty()) {
        return true;
    } else {
        return false; 
    }
}

//method to check if all Tasks have been completed 
bool taskComplete() {
    int complete=0;
    for (const auto t: goals) {
        if (getCompletion()) {
            complete++;
        }
    }
    if (complete==goals.size()) {
        return true;
    } else {
        return false; 
    }
}

//method to check if task already exists in list, if so return true if not return false 
bool taskExist(std::string input) {
    for (const auto i : goals) {
        if (input==i.getTask()) {
            return true;
        }
    }
    return false; 
}
