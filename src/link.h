#ifndef LINK_H
#define LINK_H

#include <string>

class Node;

class Link {
public:
    Link(Node* node1, Node* node2);
    void transmitData(const std::string& data, Node* source);

private:
    Node* node1;
    Node* node2;
};

#endif // LINK_H
