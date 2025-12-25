#pragma once

#include "Person.hpp"
#include <vector>

class Course;
class Classroom;

class Student : public Person
{
private:
    std::vector<Course *> _subscribedCourse;

public:
    void attendClass(Classroom *p_classroom);
    void exitClass();
    void graduate(Course *p_course);
};
