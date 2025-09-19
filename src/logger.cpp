#include "logger.h"
#include <string>
#include <iostream>

using std::cout;
using std::endl;

// ======================= TODOs =======================

void addReading(const std::string& label, double value,
                std::string labels[], double values[],
                int& size, int capacity) {
    // TODO: throw "Full" if size == capacity, else insert and ++size
    if (size >= capacity) {
        throw std::string("Full");
    }
    labels[size] = label;
    values[size] = value;
    ++size;
}

void updateValue(double* valuePtr, double newValue) {
    // TODO: write through pointer
    if (valuePtr != nullptr)
		*valuePtr = newValue;
}

void printReading(const std::string& label, const double& value) {
    // TODO: pretty-print one reading
    cout << label << ": " << value << endl;
}

double average(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute average
    if (size == 0) {
        throw std::string("Empty");
    }
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += values[i];
    }
    return sum / size;
}

double minValue(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute min
    if (size == 0) {
        throw std::string("Empty");
    }
    double minVal = values[0];
    for (int i = 1; i < size; ++i) {
        if (values[i] < minVal) {
            minVal = values[i];
        }
    }
    return minVal;
}

double maxValue(const double values[], int size) {
    // TODO: throw "Empty" if size==0, else compute max
    if (size == 0) {
        throw std::string("Empty");
    }
    double maxVal = values[0];
    for (int i = 1; i < size; ++i) {
        if (values[i] > maxVal) {
            maxVal = values[i];
        }
    }
    return maxVal;
}
