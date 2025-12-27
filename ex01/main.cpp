#include <thread>
#include <iostream>
#include <cassert>

#include "Person.hpp"
#include "Professor.hpp"
#include "Headmaster.hpp"
#include "Secretary.hpp"
#include "Student.hpp"
#include "Staff.hpp"
#include "SubscriptionToCourseForm.hpp"
#include "CourseFinishedForm.hpp"
#include "FormType.hpp"
#include "NeedCourseCreationForm.hpp"
#include "NeedMoreClassRoomForm.hpp"
#include "Form.hpp"
#include "Classroom.hpp"
#include "Courtyard.hpp"
#include "HeadmasterOffice.hpp"
#include "Room.hpp"
#include "SecretarialOffice.hpp"
#include "StaffRestRoom.hpp"
#include "Course.hpp"
#include "Event.hpp"
#include "singetons.hpp"

void testSingleton();

/** include test */
int main()
{
    testSingleton();
    return (0);
}

void testSingleton()
{
    Room object1;
    RoomList &objList = RoomList::getInstance();
    objList.add(object1);
    const std::list<Room *> &objects1 = objList.getAll();
    assert(objects1.size() == 1);
    std::cout << "main: " << objects1.size() << std::endl;
    std::thread t([]
                  {
        Room object2;
        RoomList &objList = RoomList::getInstance();
        objList.add(object2);
        const std::list<Room *> &objects2 = objList.getAll();
        assert(objects2.size() == 1);
        std::cout << "th: " << objects2.size() << std::endl; });
    t.join();
}
