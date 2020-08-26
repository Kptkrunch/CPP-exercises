#include <iostream>

void GameIntro(int Difficulty) {
    std::cout << "The mad bomber has planted a bomb and you need to disarm it... \n";
    std::cout << "You need to punch in the correct code or it will explode!\n";
    std::cout << "This is a challenge level: " << Difficulty << " bomb device\n\n";
}

bool PlayGame(int Difficulty) {

    GameIntro(Difficulty);
    // declare a 3 number code
    const int Code1 = rand();
    const int Code2 = rand();
    const int Code3 = rand();

    // these values generate the puzzle to solve
    const int CodeSum = Code1 + Code2 + Code3;
    const int CodeProd = Code1 * Code2* Code3;

    // print the product and the sum to the console
    std::cout << "+ There are three numbers needed to difuse the bomb. \n";
    std::cout << "+ The code adds up to: " << CodeSum << std::endl;
    std::cout << "+ The numbers multiply to give: " << CodeProd << std::endl;

    int Guess1, Guess2, Guess3;
    std::cin >> Guess1;
    std::cin >> Guess2; 
    std::cin >> Guess3;

    std::cout << "You entered: " << Guess1 << Guess2 << Guess3;

    int GuessSum = Guess1 + Guess2 + Guess3;
    int GuessProd = Guess1 * Guess2 * Guess3;

    std::cout << std::endl;
    
    if (GuessSum == CodeSum && GuessProd == CodeProd) {
        std::cout << "You have stopped the bomber this time, but he isn't done yet!!! \n\n";
        return true;
    } else {
        std::cout << "You have been exploded!!! \n\n";
        return false;
    }
}

int main() {

    int LevelDifficulty = 1;
    const int MaxDifficulty = 2;

    while(LevelDifficulty <= MaxDifficulty) {

        bool bLevelComplete = PlayGame(LevelDifficulty);
        std::cin.clear(); // clears any errors
        std::cin.ignore(); // discards the buffer

        if (bLevelComplete) {
            ++LevelDifficulty;
        }
    }
    std::cout << "You have stopped the mad bomber from destroying the city!\n";
    std::cout << "The city and its people are saved thanks to your heroic efforts!";
    return 0;
}