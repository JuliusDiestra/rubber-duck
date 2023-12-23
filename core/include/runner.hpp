#ifndef RUNNER_HPP_
#define RUNNER_HPP_

#include "logger.hpp"
#include "parser.hpp"

namespace rubberduck {

class Runner {
  public:
    Runner() = delete;
    Runner(const int& argc, char* argv[]);
    int Execute();

  private:
    rubberduck::Parser parser_;
    rubberduck::Logger logger_;
    bool IsAllowedGreeting(const std::string& arg) const;
    bool IsHelper(const std::string& arg) const;
    bool IsVersion(const std::string& arg) const;
    void StartConversation();
};

}  // namespace rubberduck

#endif  // RUNNER_HPP_
