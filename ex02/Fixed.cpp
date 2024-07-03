//
// Created by eyza on 02/07/24.
//

#include "Fixed.h"

Fixed::Fixed(): m_fixedValue(0)
{
    std::cout << "Default constructor called" << std::endl;
};

Fixed::Fixed(Fixed const &src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
};

Fixed::Fixed(int const value)
{
    std::cout << "Int constructor called" << std::endl;
    this->m_fixedValue = value << this->m_fractionalBits;
};

Fixed::Fixed (float const value)
{
    std::cout << "Float constructor called" << std::endl;
    this->m_fixedValue = roundf(value * (1 << this->m_fractionalBits));
};

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
};

float Fixed::toFloat( void ) const
{
    return ((float)this->m_fixedValue / (1 << this->m_fractionalBits));
}

int Fixed::toInt( void ) const
{
    return (int)this->m_fixedValue >> this->m_fractionalBits;
}

int Fixed::getRawBits( void ) const
{
   // std::cout << "getRawBits member function called" << std::endl;
    return m_fixedValue;
};

void Fixed::setRawBits( int const raw)
{
    m_fixedValue = raw;
};

std::ostream& operator<<(std::ostream& os, Fixed const &rhs)
{
    os << rhs.toFloat();
    return os;
};

Fixed& Fixed::operator=( Fixed const &rhs)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &rhs)
        this->m_fixedValue = rhs.getRawBits();
    return *this;
};