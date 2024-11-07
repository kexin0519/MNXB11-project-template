#include "Circle.h"
#include "GeometryIO.h"
#include "Rectangle.h"
#include "parse_csv.h"
#include <iostream>
int main() {
  const std::string csv_file{"rectangle_dimensions.csv"};
  auto rectangles{parse_rectangles(csv_file)};
  for (auto rectangle : rectangles) {
    std::cout << "Rectangle: " << rectangle.width() << ", " << rectangle.height() << " has area " << rectangle.area() << std::endl;
  }
  return 0;
}
