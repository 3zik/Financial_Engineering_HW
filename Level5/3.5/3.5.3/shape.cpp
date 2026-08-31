// shape.cpp

#include "shape.hpp"
#include <cstdlib>
#include <sstream>
#include <iostream>

namespace Ethan::CAD {


Shape::Shape() : m_id(rand()){
	std::cout << "Shape() default ctor, id = " << m_id << "\n";
}

Shape::Shape(const Shape& s) : m_id(s.m_id) {
	std::cout << "Shape copy ctor, id = " << m_id << "\n";
}

Shape& Shape::operator=(const Shape& s) {
	m_id = s.m_id;
	std::cout << "Shape assignment operator called!" << "\n";
	return *this;
}

Shape::~Shape() {
	std::cout << "~Shape() dtor, id=" << m_id << "\n";
}

std::string Shape::ToString() const {
	std::stringstream ss;
	ss << "ID: " << m_id;
	return ss.str();
}

int Shape::ID() const {
	return m_id;
}

}
