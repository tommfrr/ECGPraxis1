#include "Node.h" //Header muss immer importiert werden
#include <iostream>

int main() {
	Node root("root");
	Node left("left child");
	Node right("right child");

	root.add_child(&left);
	root.add_child(&right);

	std::cout << root.get_child(1)->get_name() << std::endl;

	
	return 0;
}
