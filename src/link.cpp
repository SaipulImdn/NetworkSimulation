#include "link.h"
#include "node.h"
#include <iostream>

Link::Link(Node* node1, Node* node2) : node1(node1), node2(node2) {}

void Link::transmitData(const std::string& data, Node* source) {
    if (source == node1) {
        std::cout << "Link: Data transmitted from Node " << node1->getId() << " to Node " << node2->getId() << std::endl;
        node2->sendData(data);
    } else if (source == node2) {
        std::cout << "Link: Data transmitted from Node " << node2->getId() << " to Node " << node1->getId() << std::endl;
        node1->sendData(data);
    }
}
