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
};

int main()
{
    Student s1(10);
    s1.displayRollNo();
    return 0;
}