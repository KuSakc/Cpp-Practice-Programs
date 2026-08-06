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
        void scream(){
            std::cout << "Roar!!" << std::endl;
        }
};

int main()
{
    Tiger t;
    t.eat();
    t.scream();
    return 0;
}