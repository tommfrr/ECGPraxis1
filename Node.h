#pragma once
#include <vector>
#include <string>

class Node {

	std::string name;
	std::vector<Node*> next = {};

public:
	Node(const std::string& name);
	~Node();
	std::string get_name() const;
	void set_name(std::string name);
	int get_nr_children() const;
	Node* get_child(int i) const;
	void add_child(Node* child);

};
