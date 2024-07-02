//
// Created by eyza on 02/07/24.
//

#include "Fixed.h"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    this->m_fixedValue = 0;
};

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
};

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
};

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return m_fixedValue;
};

void Fixed::setRawBits( int const raw)
{
    m_fixedValue = raw;
};

Fixed& Fixed::operator=( Fixed const &rhs)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &rhs)
        this->m_fixedValue = rhs.getRawBits();
    return *this;
};