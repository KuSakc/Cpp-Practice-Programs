#include<iostream>
class Student
{
    private:
        int rollNo;

    public:
        void setRollNo(int value)
        {
            rollNo = value;
        }
        void displayRollNo()
        {
            std::cout << rollNo << std::endl;
        }
};

int main()
{
    Student s;
    s.setRollNo(10);
    s.displayRollNo();
    return 0;
}