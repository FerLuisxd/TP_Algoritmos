#pragma once
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <type_traits>
#include <typeinfo>
#include <vector>
using namespace std;
typedef unsigned char Byte;

template<typename T>class Variable
{
	T var;
	int address;
    Byte * data;
public:
	Variable();
	Variable(T var, int address);
	Variable(T var, int address,int a);
	~Variable();
	T getVar() { return var; }
	int getAddress() { return address; }
	Byte * getData() { return data; }
	int getSize() { return sizeof(var); }
};

template<typename T>
Variable<T>::Variable()
{

}


template<typename T>
Variable<T>::Variable(T var, int address)
{
	this->var = var;
	this->address = address;
	data = (Byte*)&var;
}
template<typename T>
Variable<T>::Variable(T var, int address,int a)
{
	this->var = var;
	this->address = address;
	data = (Byte*)var;
}

template<typename T>
Variable<T>::~Variable()
{
}

