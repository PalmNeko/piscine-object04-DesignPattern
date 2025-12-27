#pragma once

#include "SingletonList.hpp"
#include "Student.hpp"
#include "Staff.hpp"
#include "Course.hpp"
#include "Room.hpp"

using StudentList = SingletonList<Student>;
using StaffList = SingletonList<Staff>;
using CourseList = SingletonList<Course>;
using RoomList = SingletonList<Room>;
