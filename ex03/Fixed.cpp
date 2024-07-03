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


Fixed& Fixed::operator=( Fixed const &rhs)
{
    std::cout << "Copy assignement operator called" << std::endl;
    if (this != &rhs)
        this->m_fixedValue = rhs.getRawBits();
    return *this;
};

bool Fixed::operator>( Fixed const rhs) const
{
    return (this->m_fixedValue > rhs.getRawBits());
};

bool Fixed::operator<( Fixed const rhs) const
{
    return (this->m_fixedValue < rhs.getRawBits());
};

bool Fixed::operator>=( Fixed const rhs) const
{
    return (this->m_fixedValue >= rhs.getRawBits());
};

bool Fixed::operator<=( Fixed const rhs) const
{
    return (this->m_fixedValue <= rhs.getRawBits());
};

bool Fixed::operator==( Fixed const rhs) const
{
    return (this->m_fixedValue == rhs.getRawBits());
};

bool Fixed::operator!=( Fixed const rhs) const
{
    return (this->m_fixedValue != rhs.getRawBits());
};

float Fixed::operator+( Fixed const rhs)
{
    return (this->toFloat() + rhs.toFloat());
};

float Fixed::operator-( Fixed const rhs)
{
    return (this->toFloat() - rhs.toFloat());
};

float Fixed::operator*( Fixed const rhs)
{
    return (this->toFloat() * rhs.toFloat());
};

float Fixed::operator/( Fixed const rhs)
{
    return (this->toFloat() / rhs.toFloat());
};

Fixed Fixed::operator++()
{
    this->m_fixedValue++;
    return *this;
};

Fixed Fixed::operator++(int)
{
    Fixed tmp(*this);
    this->m_fixedValue++;
    return tmp;
};

Fixed Fixed::operator--()
{
    this->m_fixedValue--;
    return *this;
};

Fixed Fixed::operator--(int)
{
    Fixed tmp(*this);
    this->m_fixedValue--;
    return tmp;
};

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
};

Fixed const& Fixed::min(Fixed const &a, Fixed const &b)
{
    return (a < b) ? a : b;
};

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
};

Fixed const& Fixed::max(Fixed const &a, Fixed const &b)
{
    return (a > b) ? a : b;
};

std::ostream& operator<<(std::ostream& os, Fixed const &rhs)
{
    os << rhs.toFloat();
    return os;
};
