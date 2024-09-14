#ifndef NODE_H
#define NODE_H

#include <vector>
#include <string>

class Link;

class Node {
public:
    Node(int id);
    void addLink(Link* link);
    void sendData(const std::string& data);
    int getId() const;
    void incrementDataSent();
    int getDataSent() const;

private:
    int id;
    int dataSent;  // Pastikan ini ada
    std::vector<Link*> links;
};

#endif // NODE_H
