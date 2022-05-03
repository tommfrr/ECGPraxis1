#include "Node.h"
#include <iostream>
#include "Node.h"
#include <string>
#include <vector>


//Konstruktor
Node::Node(const std::string& s) {
	std::cout << "Konstruktor aufgerufen\n";
	name = s;

}


//Destruktor
Node::~Node() {
	std::cout << "Destruktor aufgerufen\n";
}


std::string Node::get_name() const {
	return name;

}


void Node::set_name(std::string n) {
	name = n;
}


int Node::get_nr_children() const {
	return next.size();

}


Node* Node::get_child(int i) const {
	if (i > next.size())
		return NULL;
	return next[i];

}


void Node::add_child(Node* child) {
	next.push_back(child);

}






