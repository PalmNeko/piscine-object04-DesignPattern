#pragma once

#include "Form.hpp"
#include "Staff.hpp"

#include <vector>

class Course;

class Professor : public Staff
{
private:
    Course *_currentCourse;

public:
    void assignCourse(Course *p_course);
    void doClass();
    void closeCourse();
};
