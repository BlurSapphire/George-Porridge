#include "../include/header.h"
#include<iostream>

namespace Operations {
	Add::Add(int x, int y) {
		m_x = x;
		m_y = y;
		
	}
	void Add::PrintResult(int total){
		total = m_x + m_y;
		m_total = total;
		std::cout << "Index x is: " << m_x << std::endl;
		std::cout << "Index y is: " << m_y << std::endl;
		std::cout << "Result of adding a with b is: " << m_total << std::endl;
	}

	Substract::Substract(int x, int y) {
		m_x = x;
		m_y = y;

	}
	void Substract::PrintResult(int total) {
		total = m_x - m_y;
		m_total = total;
		std::cout << "Index x is: " << m_x << std::endl;
		std::cout << "Index y is: " << m_y << std::endl;
		std::cout << "Result of substracting a with b is: " << m_total << std::endl;
	}
	Multiply::Multiply(int x, int y) {
		m_x = x;
		m_y = y;

	}
	void Multiply::PrintResult(int total) {
		total = m_x * m_y;
		m_total = total;
		std::cout << "Index x is: " << m_x << std::endl;
		std::cout << "Index y is: " << m_y << std::endl;
		std::cout << "Result of multyplying a with b is: " << m_total << std::endl;
	}
	Divide::Divide(int x, int y) {
		m_x = x;
		m_y = y;

	}
	void Divide::PrintResult(int total) {
		total = m_x / m_y;
		m_total = total;
		std::cout << "Index x is: " << m_x << std::endl;
		std::cout << "Index y is: " << m_y << std::endl;
		std::cout << "Result of dividing a with b is: " << m_total << std::endl;
	}
}