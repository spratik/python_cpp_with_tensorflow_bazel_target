#define PY_SSIZE_T_CLEAN
#include <Python.h>
#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	
	PyObject *pName, *pModule;
	std::string pythonFile = "sample";
	std::string tensoflow_env = "C:\\Users\\PRATIK\\anaconda3\\envs\\tensorflow_GPU\\";
	wchar_t *env = Py_DecodeLocale(tensoflow_env.c_str(), NULL);
	Py_SetPythonHome(env);
	Py_Initialize();
	pName = PyUnicode_DecodeFSDefault(pythonFile.c_str());
	pModule = PyImport_Import(pName);
	if (pModule == NULL) {
		std::cout << "Import Fail" << std::endl;
		return 0;
	}

	Py_DECREF(pName);
	Py_DECREF(pModule);

	if (Py_FinalizeEx() < 0) {
		return 120;
	}
	return 0;
  
  
  return 0;
  
}
