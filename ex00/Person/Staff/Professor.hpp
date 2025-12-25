#pragma once

#include "Staff.hpp"
#include "Form.hpp"
#include "Course.hpp"

#include <vector>

class Professor : public Staff
{
private:
    Course *_currentCourse;

public:
    void assignCourse(Course *p_course);
    void doClass();
    void closeCourse();
};
