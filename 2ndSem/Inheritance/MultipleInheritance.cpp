#include<iostream>
class Animal
{
    public:
        void eat(){
            std::cout << "Eating"<< std::endl;
        }
        
};

class Tiger: public Animal
{
    public:
        void sound(){
            std::cout << "Roar!!" << std::endl;
        }
};

class Cow: public Animal
{
    public:
        void sound(){
            std::cout << "Mooo!!" << std::endl;
        }
};

int main()
{
    Tiger t;
    Cow c;
     
    t.sound();
    c.sound();

    return 0;
}