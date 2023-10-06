#include <nlohmann/json.hpp>
#include <iostream>

int main() {

    nlohmann::json ex1 = nlohmann::json::parse(R"(
    {
        "pi": 3.141,
        "happy": true
    }
    )");

    std::cout << ex1.dump() << std::endl;

  return 0;
}