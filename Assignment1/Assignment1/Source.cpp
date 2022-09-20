/**Operating Array_Edit
Xing Ji*/

#include "Array_Edit.h"
#include <iostream>
#include <string>
#include <fstream>

int main()
{
	Array_Edit arr1 = Array_Edit();
	arr1.load_data("source.txt");

	int index = arr1.lookup_integer(8);
	std::cout << index << std::endl;

	arr1.set_integer(index, 2);

	arr1.add_integer(11);

	arr1.remove_integer(2);


	return 0;

}