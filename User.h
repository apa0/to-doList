//Angie Diaz 
// Summer 2024 
// To-Do List Project: User.h
//Class that contains a list/vector of Category class objects (which will contain tasks)

//Still not sure if I want to make this a public thing, but I want this class to have user information so I can save it and reopen later on  
//Feel like this class might be simple enough to declare inclass instead of seperate file but not sure 

#ifndef USER_H
#define USER_H

#include <iostream>
#include <list>
#include <string>
#include "Category.h"

class User {
    public:
        std::string fileName;  //contains the name of the user's data text file
        //do my categories have to be in a list format? or is there a better option 
        std::list<Category>types; //contains all the categories a user has 

        //need methods that will add a category and remove a category

        //need a method that will check if a certain category is empty 

        //need a method that will open and read in from a file

        //need a method that will add new information to text file (write to)




};

#endif // USER_H