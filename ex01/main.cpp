#include <thread>
#include <iostream>
#include <cassert>

#include "Student.hpp"
#include "Staff.hpp"
#include "Room.hpp"
#include "Course.hpp"
#include "singetons.hpp"

template <typename Type, typename TypeList>
void testSingleton();

/** include test */
int main()
{
    testSingleton<Room, RoomList>();
    testSingleton<Student, StudentList>();
    testSingleton<Course, CourseList>();
    testSingleton<Staff, StaffList>();
    return (0);
}

template <typename Type, typename TypeList>
void testSingleton()
{
    std::cout << "=== " << typeid(Type).name() << std::endl;
    Type object1;
    TypeList &objList = TypeList::getInstance();
    objList.add(object1);
    const std::list<Type *> &objects1 = objList.getAll();
    assert(objects1.size() == 1);
    std::cout << "main: " << objects1.size() << std::endl;
    std::thread t([]
                  {
        Type object2;
        TypeList &objList = TypeList::getInstance();
        objList.add(object2);
        const std::list<Type *> &objects2 = objList.getAll();
        assert(objects2.size() == 1);
        std::cout << "th: " << objects2.size() << std::endl; });
    t.join();
}
