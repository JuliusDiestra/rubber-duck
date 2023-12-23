#ifndef LOGGER_HPP_
#define LOGGER_HPP_

#include <iostream>

const std::string kVersion = "1.0.0";

const std::string kHelpMenu =
    R"(
OVERVIEW: A tool for rubber duck debugging for lonely and desperate developers.

- The rubber-duck is picky and only likes polite developers that greet.
- The rubber-duck will help you to fix bugs by ignoring you.

Usage:

  1) Start chat with rubber-duck by saying "hello".

        rubber-duck hello

  2) Stop chat with rubber-duck by saying "bye".

        <desperate-developer>bye

Arguments:
    hello                   Greet the rubber-duck to start support.

Generic Options:
    -h, --help              Display help menu.
    -v, --version           Display version.

)";

const std::string kBoldGreenConsole = "\033[1m\033[32m";
const std::string kBoldYellowConsole = "\033[1m\033[33m";
const std::string kResetColorConsole = "\033[0m";

namespace rubberduck {

class Logger {
  public:
    Logger(){};
    void NoGreeting() {
        std::cout << "\nThis sophisticated Ruber Duck likes polite people. You "
                     "need to greet first. Quack !"
                  << "\n \n";
    }
    void DontUnderstand() {
        std::cout << "\nThis sophisticated Ruber Duck does not understand you. "
                     "Quack !"
                  << "\n \n";
    }
    void TooMuch() {
        std::cout << "\nThis sophisticated Ruber Duck only needs a simple "
                     "hello. Quack !"
                  << "\n \n";
    }
    void DeveloperConsole() {
        std::cout << kBoldGreenConsole << "<desperate-developer> "
                  << kResetColorConsole;
    }
    void RubberDuckConsole() {
        std::cout << kBoldYellowConsole << "<ruber-duck> "
                  << kResetColorConsole;
    }
    void SaySomething() {
        int total_comments = 11;
        int selection = (std::rand() % total_comments) + 1;
        switch (selection) {
            case 1:
                std::cout << "Quack!\n";
                break;
            case 2:
                std::cout << "Quackamole!\n";
                break;
            case 3:
                std::cout << "Interesting ... tell me more!\n";
                break;
            case 4:
                std::cout << "I see I see ... Quack!\n";
                break;
            case 5:
                std::cout << "Quaaaaaaaaaaaaaaaaaaaaaaaaaack!!\n";
                break;
            case 6:
                std::cout << "Have you tried turning it off and on again?\n";
                break;
            case 7:
                std::cout << "I think you should ... Quack!\n";
                break;
            case 8:
                std::cout << "Sorry, it's my coffee break. Quack!\n";
                break;
            case 9:
                std::cout << "Holy Moly!\n";
                break;
            case 10:
                std::cout << "Stuck? Explain it to the rubber duck!\n";
                break;
            case 11:
                std::cout << "Quaaaa... Segmentation fault (core dumped)\n";
                break;
            default:
                std::cout << "Quack!\n";
                break;
        }
    }
    void SayGoodBye() {
        int total_comments = 4;
        int selection = (std::rand() % total_comments) + 1;
        switch (selection) {
            case 1:
                std::cout << "Gotta go, Buffalo!\n";
                break;
            case 2:
                std::cout << "Bye bye, Butterfly!\n";
                break;
            case 3:
                std::cout << "See you later, Alligator!\n";
                break;
            case 4:
                std::cout << "Take care, Polar bear!\n";
                break;
            default:
                std::cout << "Quack!\n";
                break;
        }
    }
    void PrintHelp() {
        std::cout << kHelpMenu;
    }
    void PrintVersion() {
        std::cout << "rubber-duck version " << kVersion << "\n";
    }

  private:
};

}  // namespace rubberduck

#endif  // RUNNER_HPP_
