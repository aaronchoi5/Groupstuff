//Author: Aaron Choi Austin Arnett Brian Bauer
//Course title: Data Structures
//Course Number: CS2028
#include <iostream>
#include <fstream>
#include <stdlib.h>
#include <vector>
#include <string>
using namespace std;

class Polygon{

  public:
    virtual int area() = 0;
    virtual int perimeter() = 0;
  

};
class Triangle: public Polygon{
  
  public:
    int area(){
      
     
    }
    
    int perimeter()
    {
    
    }

};
class Scalene: public Triangle{
  
  public:
    int

};
class Quadrilateral: public Polygon{
  
  public:
    int area(){
    
    }
    int perimeter(){
    
    }
    
};
class Pentagon: public Polygon{

  public:
    int area(){
    
    }
    
    int perimeter(){
    
    }

};
class Hexagon: public Polygon{

  public:
    int area(){
    
    }
    int perimeter(){
    
    }
};

class Octagon: public Polygon{

  public:
    int area(){
    
    }

    int perimeter(){
    
    }
};

int main() {
  string polygon_type = "";
  string secondary_type = "";
  
  cout << "Is your polygon a triangle, quadrilateral, pentagon, hexagon or octagon?\n";
  cin >> polygon_type;
  
  if(polygon_type == "triangle"){
    cout << "Is your triangle a scalene or equalateral triangle?";
  
  }
  else if(polygon_type == "quadrilateral"){
    cout << "Is your quadrilateral a square or a rectangle";
    
  }
  else if(polygon_type == "pentagon"){
    cout << "Please enter the length of one of the sides.";
  
  }
  else if(polygon_type == "hexagon"){
  
    cout << "Please enter the length of one of the sides.";
  }
  else if(polygon_type == "octagon"){
  
    cout << "Please enter the length of one of the sides.";
  }
  else{
  
    cout << "Something went wrong. Please try again."
  } 
  
  return 0;
}
