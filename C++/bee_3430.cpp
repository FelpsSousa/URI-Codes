#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

struct Point {
    int x, y;
};

struct Triangle {
    Point p1, p2, p3;
};

double triangleArea(Point p1, Point p2, Point p3) {
    return abs((p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y)) / 2.0);
}

double minimumArea(vector<Triangle>& triangles) {
    vector<bool> isVisited(triangles.size(), false);

    // Mark all sides of triangles as not covered initially
    vector<int> sideCount(triangles.size() * 3, 0);

    // Count the occurrences of each side
    for (int i = 0; i < triangles.size(); i++) {
        sideCount[triangles[i].p1.x]++;
        sideCount[triangles[i].p2.x]++;
        sideCount[triangles[i].p3.x]++;
    }

    double totalArea = 0.0;

    // Calculate the area and mark the triangles that cover each side
    for (int i = 0; i < triangles.size(); i++) {
        double area = triangleArea(triangles[i].p1, triangles[i].p2, triangles[i].p3);
        totalArea += area;

        if (sideCount[triangles[i].p1.x] == 1) {
            isVisited[i] = true;
        }
        if (sideCount[triangles[i].p2.x] == 1) {
            isVisited[i] = true;
        }
        if (sideCount[triangles[i].p3.x] == 1) {
            isVisited[i] = true;
        }
    }

    // Calculate the minimum area by excluding triangles
    double minArea = totalArea;
    for (int i = 0; i < triangles.size(); i++) {
        if (isVisited[i]) {
            double excludedArea = triangleArea(triangles[i].p1, triangles[i].p2, triangles[i].p3);
            minArea = min(minArea, totalArea - excludedArea);
        }
    }

    return minArea;
}

int main() {
    int N;
    cin >> N;

    vector<Triangle> triangles(N);

    for (int i = 0; i < N; i++) {
        cin >> triangles[i].p1.x >> triangles[i].p1.y >> triangles[i].p2.x >> triangles[i].p2.y >> triangles[i].p3.x >> triangles[i].p3.y;
    }

    double result = minimumArea(triangles);
    cout << fixed << result << endl;

    return 0;
}
