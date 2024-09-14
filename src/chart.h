#ifndef CHART_H
#define CHART_H

#include <vector>
#include <string>

class Chart {
public:
    static void displayBarChart(const std::vector<std::pair<std::string, int>>& data);
};

#endif // CHART_H
