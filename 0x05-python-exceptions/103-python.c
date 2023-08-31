#include <Python.h>
#include <stdio.h>
#include <stdlib.h>
#include <object.h>
#include <listobject.h>
#include <bytesobject.h>
#include <floatobject.h>
#include <string.h>

/**
 * print_python_bytes - Prints bytes information
 *
 * @p: Python Object
 * Return: no return
 */
void print_python_bytes(PyObject *p)
{
	char *string;
	long int size, i, limit;

	setbuf(stdout, NULL);

	printf("[.] bytes object info\n");
	if (!PyBytes_Check(p))
	{
		printf("  [ERROR] Invalid Bytes Object\n");
		setbuf(stdout, NULL);
		return;
	}

	size = ((PyVarObject *)(p))->ob_size;
	string = ((PyBytesObject *)p)->ob_sval;

	printf("  size: %ld\n", size);
	printf("  trying string: %s\n", string);

	if (size >= 10)
		limit = 10;
	else
		limit = size + 1;

	printf("  first %ld bytes:", limit);

	for (i = 0; i < limit; i++)
		if (string[i] >= 0)
			printf(" %02x", string[i]);
		else
			printf(" %02x", 256 + string[i]);

	printf("\n");
	setbuf(stdout, NULL);
}

/**
 * print_python_float - print an error message
 *
 * @p: Python Object
 * Return: there is no return
 */
void print_python_float(PyObject *p)
{
	double valu;
	char *am;

	setbuf(stdout, NULL);
	printf("[.] float object info\n");

	if (!PyFloat_Check(p))
	{
		printf("  [ERROR] Invalid Float Object\n");
		setbuf(stdout, NULL);
		return;
	}

	valu = ((PyFloatObject *)(p))->ob_fval;
	am = PyOS_double_to_string(val, 'r', 0, Py_DTSF_ADD_DOT_0, Py_DTST_FINITE);

	printf("  value: %s\n", nf);
	setbuf(stdout, NULL);
}

/**
 * print_python_list - print an python lists 
 *
 * @p: Python Object
 * Return: there is no return
 */
void print_python_list(PyObject *p)
{
	long int size, j;
	PyListObject *list;
	PyObject *object;

	setbuf(stdout, NULL);
	printf("[*] Python list info\n");

	if (!PyList_Check(p))
	{
		printf("  [ERROR] Invalid List Object\n");
		setbuf(stdout, NULL);
		return;
	}

	size = ((PyVarObject *)(p))->ob_size;
	list = (PyListObject *)p;

	printf("[*] Size of the Python List = %ld\n", size);
	printf("[*] Allocated = %ld\n", list->allocated);

	for (j = 0; j < size; j++)
	{
		object = list->ob_item[j];
		printf("Element %ld: %s\n", j, ((object)->ob_type)->tp_name);

		if (PyBytes_Check(object))
			print_python_bytes(object);
		if (PyFloat_Check(object))
			print_python_float(object);
	}
	setbuf(stdout, NULL);
}
