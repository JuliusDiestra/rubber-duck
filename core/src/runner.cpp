
#include "runner.hpp"

#include <iostream>

namespace rubberduck {

Runner::Runner(const int& argc, char* argv[]) :
  parser_{argc, argv} {}

int Runner::Execute() {
    std::vector<std::string> args = parser_.GetArguments();
    if (args.size() == 0) {
        logger_.NoGreeting();
    } else if (args.size() == 1) {
        if (IsAllowedGreeting(args.at(0))) {
            StartConversation();
        } else if (IsHelper(args.at(0))) {
            logger_.PrintHelp();
        } else if (IsVersion(args.at(0))) {
            logger_.PrintVersion();
        } else {
            logger_.DontUnderstand();
        }
    } else {
        if (args.at(0) == "hello" || args.at(0) == "Hello") {
            logger_.TooMuch();
        } else {
            logger_.DontUnderstand();
        }
    }
    return 0;
}

bool Runner::IsAllowedGreeting(const std::string& arg) const {
    bool is_allowed_greeting{false};
    if (arg == "hello" || arg == "Hello") {
        is_allowed_greeting = true;
    }
    return is_allowed_greeting;
}

bool Runner::IsHelper(const std::string& arg) const {
    bool is_helper{false};
    if (arg == "-h" || arg == "--h" || arg == "--help") {
        is_helper = true;
    }
    return is_helper;
}

bool Runner::IsVersion(const std::string& arg) const {
    bool is_version{false};
    if (arg == "-v" || arg == "--v" || arg == "--version") {
        is_version = true;
    }
    return is_version;
}

void Runner::StartConversation() {
    while (true) {
        std::string string_input;
        logger_.DeveloperConsole();
        std::getline(std::cin, string_input);
        logger_.RubberDuckConsole();
        if (string_input == "bye" || string_input == "Bye") {
            logger_.SayGoodBye();
            break;
        } else {
            logger_.SaySomething();
        }
    }
}

}  // namespace rubberduck
