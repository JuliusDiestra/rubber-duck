
#include "rubber_duck.hpp"

int main(int argc, char* argv[]) {
    rubberduck::Runner runner_(argc, argv);
    int result = runner_.Execute();
    return result;
}
