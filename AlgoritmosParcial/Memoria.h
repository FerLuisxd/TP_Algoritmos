#pragma once
#include "Variable.h"
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
class Memoria
{
	int size;
	Byte * mem;
public:
	Memoria();
	~Memoria();
	void getSize() {
		cout << size << endl;
	}
	
	void writeMemINT(Variable<int> v)
	{
		for (int i = 0; i < v.getSize(); i++)
		{
			mem[v.getAddress() + i] = v.getData()[i];
		}
	}
	void readMemINT(Variable<int> v)
	{
		for (int i = 0; i < v.getSize(); i++)
		{
			v.getData()[i] = mem[v.getAddress() + i];
		}
	}
	void writeMemBOOL(Variable<bool> v)
	{
		for (int i = 0; i < v.getSize(); i++)
		{
			mem[v.getAddress() + i] = v.getData()[i];
		}
	}
	void readMemBOOL(Variable<bool> v)
	{
		for (int i = 0; i < v.getSize(); i++)
		{
			v.getData()[i] = mem[v.getAddress() + i];
		}
	}
	void writeMemCHAR(Variable<char> v)
	{
		for (int i = 0; i < v.getSize(); i++)
		{
			mem[v.getAddress() + i] = v.getData()[i];
		}
	}
	void readMemCHAR(Variable<char> v)
	{
		for (int i = 0; i < v.getSize(); i++)
		{
			v.getData()[i] = mem[v.getAddress() + i];
		}
	}
	void printMem(int initaddr)
	{
		int addr = initaddr;
		cout << " Address  +0 +1 +2 +3 +4 +5 +6 +7  +8 +9 +a +b +c +d +e +f\n"
			<< "--------++--+--+--+--+--+--+--+--++--+--+--+--+--+--+--+--+"
			<< setfill('0') << hex;
		for (int i = 0; i < 208; i++) {
			if (i % 16 == 0) cout << endl << setw(8) << (addr + i) << " "; // direcciones
			else if (i % 8 == 0) cout << " "; // espacio central extra
			cout << " " << setw(2) << (int)mem[addr + i];
		}
		cout << dec << endl; // regresamos a impresion normal (sistema decimal)
	}
	//void writeMem(Byte* mem, int addr, Byte* data, int numBytes) {
	//	 for (int i = 0; i < numBytes; i++) {
	//		 mem[addr + i] = data[i];
	//		
	//	}
	//	
	//}
    //void readMem(Variable<int> a, Byte* data, int numBytes) {
	//	for (int i = 0; i < numBytes; i++) {
	//		mem[addr + i] = data[i];
	//	}
	//	}
		
};



Memoria::Memoria()
{
	size = 1 << 20;
	mem = new Byte[size];
}


Memoria::~Memoria()
{
}

