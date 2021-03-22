#include <stdio.h>
#include <iostream>
using namespace std;

class Numbers {
    double m_a, m_b, m_c;
    
public:
    void setValues (int a, int b, int c) {
        m_a = a;
        m_b = b;
        m_c = c;
    }
    
    bool isEqual ( const Numbers &point) {
        return (m_a == point.m_a && m_b == point.m_b && m_c == point.m_c )
    }
};

int main()
{
    Numbers point1;
    point1.setValues(3.0, 4.0, 5.0);
 
    Numbers point2;
    point2.setValues(3.0, 4.0, 5.0);
 
    if (point1.isEqual(point2))
        std::cout << "point1 and point2 are equal\n";
    else
        std::cout << "point1 and point2 are not equal\n";
 
    Numbers point3;
    point3.setValues(7.0, 8.0, 9.0);
 
    if (point1.isEqual(point3))
        std::cout << "point1 and point3 are equal\n";
    else
        std::cout << "point1 and point3 are not equal\n";
 
    return 0;
}
