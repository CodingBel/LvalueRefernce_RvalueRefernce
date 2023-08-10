/*
						This program is written to depict about Lvalue refences and Rvalue References 

	On this program @ line 20 ‘LR’ is a Lvalue reference that stores the memory location of Lvalue x. 
	And that is why line 22 and line 23 print out the same memory location.
	NOTE: When we use LvalueReferences, on the right side of the operation, there must be a Lvalue
	and we will take the memory location of that Lvalue.


	On the other hand when we use Rvalue references, we will use double ‘&&’ and we will take the memory location of the Rvalue. 
	In this program this is done @ line 28 where the Rvalue reference rR takes the memory location of the Rvalue constant 20.
	That is why @ line 31 I could print where in stack memory 20 is stored.   
	Hence, by using the Rvalue reference, I extended the one-line life span of the Rvalue 20.
	Then is I was able to dereference the Rvalue  using its location @ line 34 of the above program.
*/

#include<iostream>
int main() {
	int x = 10;
	int& lR = x;  // Lvalue Reference  

	std::cout << "Memory location of lR is: " << &lR << std::endl;
	std::cout << "Memory location of x is:  " << &x << std::endl;


	std::cout << "\n\n";

	int&& rR = 20;	// Rvalue Reference 
	std::cout << "The value stored ar rR is: " << rR << std::endl;

	std::cout << "The memory location of the Rvalue is:" << &rR << std::endl;
	int* myPtr = &rR;	// create an int pointer to point to the Rvalue's mem locaion

	std::cout << "location myPtr points to is: " << myPtr << " and the value is: " << *myPtr << std::endl;

	return 0;
}