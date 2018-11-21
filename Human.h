
#ifndef HUMAN_H
#define	HUMAN_H
#include <string>

using namespace std;

class Human {
private:
    string name;
    int height;
    int age;
    
public:
    Human();
    Human(string n, int h);
    Human(string name, int height, int age);
    Human(const Human & h);
    
    ~Human();

    string getName();
    void setName(string name) ;
    
    int getAge() ;
    void setAge(int age);

    int getHeight();
    void setHeight(int height) ;

    void operator=(const Human & rhs) ;
};


#endif	/* HUMAN_H */

