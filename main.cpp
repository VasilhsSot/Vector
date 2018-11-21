#include <cstdlib>
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
//
//int main_human(int argc, char** argv) {  
//    cout << "Start of main ----------------------------- " << endl;
//    Human h;                    // valid only if default c-tor exists (no c-tor defined), or defined explicitly
//    Human a("Bob", 10, 20);
//    Human b("Alice", 20, 20);
//    Human * c = new Human("Eva", 30, 40);
//    Human * d = new Human("Tom", 30, 40);
//    
//    Human e(a);                         // to e na einai antigrafo tou a
//    Human f = a;                        // to f na einai antigrafo tou a
//    
//    b=a;
//    
//    delete c;
//    delete d; 
//   
//
//    cout << "End of main ----------------------------- \n" << endl;
//    return 0;
//}
//

// ----------------------------------- vector




class Vector {
private:
    double x,y,z;
public:            '
    // c-tor
    Vector() :x(0.0), y(0.0), z(0.0) {          
        cout << "Vector (" << x << "," << y << "," << z << ") created! " << endl;
    }
    Vector(double x, double y) :x(x), y(y), z(0) {          
        cout << "Vector (" << x << "," << y << "," << z << ") created! " << endl;
    }
    Vector(double x, double y, double z) :x(x), y(y), z(z) {          
        cout << "Vector (" << x << "," << y << "," << z << ") created! " << endl;
    }
    Vector(const Vector & v) : x(v.x), y(v.y), z(v.z) {
        cout << "Vector (" << x << "," << y << "," << z << ") created by copy constructor! " << endl;
    }
    ~Vector() {
        cout << "Vector (" << x << "," << y << "," << z << ") destroyed! " << endl;
    }
    
    // accessors/manipulators
    double getX() const {
        return x;
    }
    void setX(double x) {
        this->x = x;
    }
    double getY() const {
        return y;
    }
    void setY(double y) {
        this->y = y;
    }
    double getZ() const {
        return z;
    }
    void setZ(double z) {
        this->z = z;
    }

    
    double magnitude() {
        return sqrt(x*x+y*y+z*z);
    }
    // operators:
    //       this einai pointer ston aristero teleftaio
    // ara: *this einai o aristeros telestaios
    //       rhs einai o dexia telestaios    
    Vector & operator=(const Vector & rhs) {
        x = rhs.x;
        y = rhs.y;
        z = rhs.z;
        return *this;
    }
    
    Vector operator+(const Vector & rhs) const {
//         Vector temp(x + rhs.x, y+rhs.y, z+rhs.z); same ...
        Vector temp;
        temp.x = this->x + rhs.x;
        temp.y = this->y + rhs.y;
        temp.z = this->z + rhs.z;
        return temp;
    }
    
    Vector operator-(const Vector & rhs) const {
//         Vector temp(x + rhs.x, y+rhs.y, z+rhs.z); same ...
        Vector temp;
        temp.x = this->x - rhs.x;
        temp.y = this->y - rhs.y;
        temp.z = this->z - rhs.z;
        return temp;
    }
    
    double operator*(const Vector & rhs) const {
        double temp;
        temp = x*rhs.x + y*rhs.y + z*rhs.z;
        return temp;
    }
    
    Vector operator*(const double rhs) const {
        Vector temp;
        temp.x = x*rhs;
        temp.y = y*rhs;
        temp.z = z*rhs;
        return temp;
    }
    
    friend Vector operator*(double lhs, const Vector & rhs);
    
    bool operator==(const Vector & rhs) const {
        if (x == rhs.x && y == rhs.y && z == rhs.z) {
            return true;
        } else {
            return false;
        }
    }
    
     bool operator!=(const Vector & rhs) const {
//        if (x == rhs.x && y == rhs.y && z == rhs.z) {
//            return false;
//        } else {
//            return true;
//        }
         return !(*this == rhs);
    }
     
    Vector & operator+=(const Vector & rhs) {
        this->x = this->x + rhs.x;
        this->y = this->y + rhs.y;
        this->z = this->z + rhs.z;
        
        return *this;
    }
    Vector & operator-=(const Vector & rhs) {
        this->x = this->x - rhs.x;      // x -= rhs.x   
        this->y = this->y - rhs.y;
        this->z = this->z - rhs.z;
        
        return *this;
    }
    
    
    // a++
    Vector operator++(int) {
        Vector temp(x,y,z);
        x++;
        y++;
        z++;
        return temp;                
    }
    
    // ++a    
    Vector & operator++() {
        x++;
        y++;
        z++;
        return *this;
    }
    
    // a++
    Vector operator--(int) {
        Vector temp(x,y,z);
        x--;
        y--;
        z--;
        return temp;                
    }
    
    // ++a    
    Vector & operator--() {
        x--;
        y--;
        z--;
        return *this;
    }
    
    
    // op > < >= <=
};

//Vector operator+(const Vector & lhs, const Vector & rhs) {
//    Vector temp;
//    temp.x = this->x + rhs.x;
//    temp.y = this->y + rhs.y;
//    temp.z = this->z + rhs.z;
//    return temp;
//}

Vector operator*(double lhs, const Vector & rhs) {
    Vector temp;
    temp.x = lhs * rhs.x;
    temp.y = lhs * rhs.y;
    temp.z = lhs * rhs.z;
    return temp;
}

// op   =  +  -  *  += -=  ++ -- == !=    >    <  
//    me matrix kai me vector
// op <<  >>
class Matrix {
private:
    double data[3][3];
public:
    
};

int main(int argc, char * argv[]) {
    cout << " ------------------ Start of main " << endl;
    Vector o;           // empty c-tor
    Vector p(5,5,5);    // custom c-tor with x,y,z
    Vector q = p;       // copy c-tor    same as: Vector q(p)
    Vector a(1,2,3);
    Vector b(10,20,30);
    
    a=b;
    
    a==b;
    
    
    
    cout << " ------------------ End of main " << endl;
    return 0;
}