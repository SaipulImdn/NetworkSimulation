#include "node.h"
#include "link.h"
#include "chart.h"
#include <vector>

int main() {
    Node node1(1);
    Node node2(2);
    Node node3(3);

    Link link1(&node1, &node2);
    Link link2(&node2, &node3);

    node1.addLink(&link1);
    node2.addLink(&link1);
    node2.addLink(&link2);
    node3.addLink(&link2);

    node1.sendData("Hello, Node 3!");

    // Prepare data for bar chart
    std::vector<std::pair<std::string, int>> chartData = {
        {"Node 1", node1.getDataSent()},
        {"Node 2", node2.getDataSent()},
        {"Node 3", node3.getDataSent()}
    };

    // Display bar chart
    Chart::displayBarChart(chartData);

    return 0;
}
