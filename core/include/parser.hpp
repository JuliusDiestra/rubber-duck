#ifndef PARSER_HPP_
#define PARSER_HPP_

#include <string>
#include <vector>

namespace rubberduck {

class Parser {
  public:
    Parser() = delete;
    Parser(const int& argc, char* argv[]);
    std::vector<std::string> GetArguments() const;

  private:
    std::vector<std::string> arguments_;
};

}  // namespace rubberduck

#endif  // PARSER_HPP_
