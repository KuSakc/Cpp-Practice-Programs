#include<iostream>
class Student
{
    private:
        int rollNo;
        int age;

    public:
        void setData(int rollNo)
        {
            this -> rollNo = rollNo;
        }

        void setData(int rollNo, int age)
        {
            this -> rollNo = rollNo;
            this ->  age = age;
        }

        void displayData()
        {
            std::cout << rollNo << std::endl;
            std::cout << age << std::endl;
        }
};

int main()
{
    Student s1;
    s1.setData(15);
    s1.displayData();

    s1.setData(16, 20);
    s1.displayData();

    return 0;
}