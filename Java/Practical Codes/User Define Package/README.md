# Java Package Example: Accessing Class from Another Package

Program Title

Using Packages in Java: Tiger class in forest package accessed by Animal



# Description
-------------
This program demonstrates how to:
* Use the package keyword to organize Java classes
* Import and use a class (Tiger) from another package (forest)
* Apply basic object-oriented principles with access modifiers



# Folder Structure
------------------
Make sure your files are organized like this:

project_root/
│
├── Animal.java
└── forest/
    └── Tiger.java

Tiger.java belongs to the forest package

Animal.java uses the Tiger class from the forest package



# Code Overview
---------------

1. forest/Tiger.java

package forest;

public class Tiger {
    public void getDetails(String nickName, int weight) {
        System.out.println("Tiger nick name is " + nickName);
        System.out.println("Tiger weight is " + weight);
    }
}


2. Animal.java
java
Copy
Edit
import forest.Tiger;

public class Animal {
    public static void main(String[] args) {
        Tiger t1 = new Tiger();
        t1.getDetails("Everest", 50);
    }
}



# Output
--------
Tiger nick name is Everest
Tiger weight is 50
