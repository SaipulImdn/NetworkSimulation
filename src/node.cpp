#include "node.h"
#include "link.h"
#include <iostream>

Node::Node(int id) : id(id), dataSent(0) {}

void Node::addLink(Link* link) {
    links.push_back(link);
}

void Node::sendData(const std::string& data) {
    std::cout << "Node " << id << " sending data: " << data << std::endl;
    incrementDataSent();
    for (auto& link : links) {
        link->transmitData(data, this);
    }
}

int Node::getId() const {
    return id;
}

void Node::incrementDataSent() {
    ++dataSent;
}

int Node::getDataSent() const {
    return dataSent;
}
