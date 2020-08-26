#include <iostream>

void PlayGame() {
    std::cout << "A bomb is about to go off and you need to disarm it... \n";
    std::cout << "You need to punch in the correct code or it will explode!\n \n";

    // declare a 3 number code
    const int Code1 = 3;
    const int Code2 = 5;
    const int Code3 = 7;

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
        std::cout << "You Win!!!";
    } else {
        std::cout << "You have been exploded!!!";
    }
}

int main() {
    return 0;
}