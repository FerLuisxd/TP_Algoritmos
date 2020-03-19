#include "Memoria.h"
#include "Variable.h"
#include "string.h"

int main() {
	Memoria a;
	a.getSize();
	a.printMem(0);
flag:
	cout << endl;
	system("pause");
	system("cls");
	int op;
	do {
		cout << "Bienvenido a programa X " << endl;
		cout << "¿Que desea hacer? " << endl;
		cout << "1: Agregar Int " << endl;
		cout << "2: Agregar Char " << endl;
		cout << "3: Agregar Bool " << endl;
		cout << "4 : Imprimir Memoria en un rango " << endl;
		cout << "0: Salir " << endl;
		cin >> op;
	} while (op < 0 || op >4);
	switch (op)
	{
	case 0: {
		break;
	}
	case 1: {
		int b,pos;
		cout << "Ingrese valor de la Variable "; cin >> b;
		cout << "Ingrese posicion "; cin >> pos;
		Variable<int> * t = new Variable<int>(b, pos);
		a.writeMemINT(*t);
		break;
	}
	case 2: {
		//char* q = new char[100];
		//int* longitud = new int(100);
		//cout << "Ingrese Palabra: "; cin >> q;
		//*longitud = 100;
		//*longitud = strlen(q);
		//char lol[*longitud];
		//for (int i = 0; i <= *longitud; i++)
		//{
		//	lol[i] = q[i];
		//}
		//delete q;
		//delete longitud;
		//cout << (unsigned)strlen(lol) << endl; 
		char v[100] ;
		int pos;
		cout << "Ingrese char "; cin >> v;		
		cout << "Ingrese posicion "; cin >> pos;
		Variable<char> * t = new Variable<char>(*v, pos,1);
		//a.writeMemCHAR(*t);
		break;
	}
	case 3: {
		bool b;
		int pos;
		cout << "Ingrese valor de la Variable "; cin >> b;
		cout << "Ingrese posicion "; cin >> pos;
		Variable<bool> * t = new Variable<bool>(b, pos);
		a.writeMemBOOL(*t);
		break;
	}
	case 4: {
		int pos;
		cout << "Ingrese inicio del rango "; cin >> pos;
		if (pos > 0) {
			do {
				pos--;
			} while (pos % 16 != 0);
		}
		a.printMem(pos);
		break;
	}
	}
	if (op != 0) {
		goto flag;
	}
	return 0;
}


//CODIGO SIN USO DE INTERNET
//template <class T>
//constexpr
//std::string_view
//type_name()
//{
//	using namespace std;
//#ifdef __clang__
//	string_view p = __PRETTY_FUNCTION__;
//	return string_view(p.data() + 34, p.size() - 34 - 1);
//#elif defined(__GNUC__)
//	string_view p = __PRETTY_FUNCTION__;
//#  if __cplusplus < 201402
//	return string_view(p.data() + 36, p.size() - 36 - 1);
//#  else
//	return string_view(p.data() + 49, p.find(';', 49) - 49);
//#  endif
//#elif defined(_MSC_VER)
//	string_view p = __FUNCSIG__;
//	return string_view(p.data() + 84, p.size() - 84 - 7);
//#endif
//}
//CODIGO SIN USO DE INTERNET