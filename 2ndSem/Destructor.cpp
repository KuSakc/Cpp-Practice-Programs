#include<iostream>
class Student
{
    private:
        int rollNo;

    public:
        Student(int rollNo)
        {
            this -> rollNo = rollNo;
        }
        void displayRollNo()
        {
            std::cout << rollNo << std::endl;
        }

        // Destructuor is called automatically when Object is destroyed

};

int main()
{
    Student s1(10);
    s1.displayRollNo();
    return 0;
}

Incomplete - Pointer not learned for effective example