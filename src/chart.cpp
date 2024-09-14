#include "chart.h"
#include <iostream>

void Chart::displayBarChart(const std::vector<std::pair<std::string, int>>& data) {
    std::cout << "\nBar Chart:\n";
    for (const auto& entry : data) {
        std::cout << entry.first << ": ";
        for (int i = 0; i < entry.second; ++i) {
            std::cout << "#";
        }
        std::cout << " (" << entry.second << ")\n";
    }
}
