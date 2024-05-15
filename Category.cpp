//Angie Diaz
//Summer 2024
//To-Do List Project: Category.cpp

#include "Category.h"

//method that adds a new Task to goals list, might want to add another parameter to take in a deadline 
void Category::addTask(std::string t) {
    //need to instantiate a task object here
    if (!taskExist(t)) {
        Task goal(t);
        goals.push_back(goal);
    } else {
        std::cout<<"Unable to add task, already exists in "<<name<<" category."<<std::endl;
    }
    
}

//method to iterate over goals and print current list under Category
void Category::printList() {
    std::cout<<name<<std::endl;
    //call method that underlines the category title depending on letters in name 
    for (const auto task: goals) {
        //call method in Task to print/return string of current task
        std::cout<<'Calling method in task to print current task'<<std::endl;
    }
}
//method to delete a Task in goals (make sure to call method that checks if task exists in list before deleting)
void Category::deleteTasks(int n) {
    if (goalsEmpty() || n<=0 || n>goals.size()) {
        std::cout<<"You have no tasks created yet or have entered an invalid number."<<std::endl;
    }
    //first we have to loop thru the goals to find the task specified, then erase 
    auto it=goals.being(); 
    std::advance(it, n-1); 
    goals.erase(it);
}

//method to mark a Task completed 
void Category::completeTask(int n) {
    if (goalsEmpty() || n<=0 || n>goals.size()) {
        std::cout<<"You have no tasks created yet or have entered an invalid number."<<std::endl;
    }
    //need to locate the task specified
    auto it=goals.being(); 
    std::advance(it, n-1);
    //calling task object method to mark complete
    it->markComplete();

}

//ERROR HANDLING METHODS: 

//method to check if goals is empty 
bool Category::goalsEmpty() {
    return goals.empty();
}

//method to check if all Tasks have been completed 
bool Category::taskComplete() {
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
bool Category::taskExist(std::string input) {
    for (const auto i : goals) {
        if (input==i.getTask()) {
            return true;
        }
    }
    return false; 
}
