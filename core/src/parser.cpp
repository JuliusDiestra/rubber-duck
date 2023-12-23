
#include "parser.hpp"

namespace rubberduck {

Parser::Parser(const int& argc, char* argv[]) {
    for (std::size_t j = 1; j < argc; ++j) {
        arguments_.push_back(argv[j]);
    }
}

std::vector<std::string> Parser::GetArguments() const {
    return arguments_;
}
}  // namespace rubberduck
