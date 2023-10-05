#include <iostream>
#include <string>
/*The bellow changes m making for the first task and m reserving this to 
understand what further changes we are doing in the next task*/

/*int main(int argc, char *argv[]) {
  bool hasthreearguments = (argc == 3);
  if (hasthreearguments) {
    std::string programName{argv[0]};
    char firstCharacter{*(argv[1])};
    size_t lengthofstring{programName.size()};
    int thirdArgument{std::atoi(argv[2])};
    int sumofCharacters{0};
     currentindex{0};
    std::string secondargument{argv[1]};
    while (true) {
      sumofCharacters += secondargument[currentindex++];
      if (currentindex >= static_cast<int>(secondargument.size())) {
        break;
      }
    }
    int result = (sumOfCharacters ^ firstCharacter * 3) << (lengthofstring & 0x1f);
    if (result == thirdArgument){
      std::cout << "Correct!" << std::endl;
    } else {
      std::cout << "Wrong!" << std::endl;
    }
  }
}*/


// Next task : Function to compute the key value

int computeKeyValue(const std::string& input) {
    int sumOfCharacters = 0;
    for (char character : input) {
        sumOfCharacters += character;
    }
    return sumOfCharacters;
}

/*int main(int argc, char *argv[]) {
  bool hasthreearguments = (argc == 3);
  if (hasthreearguments) {
    std::string programName{argv[0]};
    char firstCharacter{*(argv[1])};
    size_t lengthofstring{programName.size()};
    int thirdArgument{std::atoi(argv[2])};
    
    // Call the function to compute the key value
    int sumOfCharacters = computeKeyValue(argv[1]);

    int result = (sumOfCharacters ^ firstCharacter * 3) << (lengthofstring & 0x1f);

    if (result == thirdArgument) {
      std::cout << "Correct!" << std::endl;
    } else {
      std::cout << "Wrong!" << std::endl;
    }
  }

  return 0;
}*/

// Next Task:
// Function to calculate the key based on all inputs
int calculateKey(const std::string& programName, char firstCharacter, const std::string& secondArgument) {
    int sumOfCharacters = computeKeyValue(secondArgument);
    size_t lengthofstring = programName.size();
    return (sumOfCharacters ^ firstCharacter * 3) << (lengthofstring & 0x1f);
}

int main(int argc, char *argv[]) {
    bool hasthreearguments = (argc == 3);
    if (hasthreearguments) {
        std::string programName{argv[0]};
        char firstCharacter{*(argv[1])};
        std::string secondArgument{argv[1]};
        int thirdArgument{std::atoi(argv[2])};

        // Calculate the key based on all inputs
        int key = calculateKey(programName, firstCharacter, secondArgument);

        if (key == thirdArgument) {
            std::cout << "Correct!" << std::endl;
        } else {
            std::cout << "Wrong!" << std::endl;
        }
    }

    return 0;
