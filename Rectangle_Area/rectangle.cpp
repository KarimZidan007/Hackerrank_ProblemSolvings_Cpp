#include <iostream>

using namespace std;
class Rectangle 
{
public :
        int width;
        int height;    
        void display()
        {
            cout<<width<<" "<<height<<endl;
        }
};
class RectangleArea :public Rectangle
{
public:
        void read_input()
        {
            
           cin>>Rectangle::width;  
           cin>>Rectangle::height; 
        }
        void display()
        {
            cout<<(Rectangle::width)*(Rectangle::height)<<endl;
        }
};


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}
