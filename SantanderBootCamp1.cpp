#include <iostream>
#include <map>

int main()
{
    std::map<int, std::string> my_map = {
    { 0, "Ferro" },
    { 1000, "Bronze" },
    { 2000, "Prata" },
    { 5000, "Ouro" },
    { 7000, "Platina" },
    { 8000, "Ascendente" },
    { 9000, "Imortal" },
    { 10000, "Radiante" }
    };

    std::string nameHero = "";
    int scoreHero = 0;
    std::string rankingHero = "";

    std::cout << "Insert the name of Hero\n";
    std::cin >> nameHero;

    std::cout << "Insert the score of Hero\n";
    std::cin >> scoreHero;

    for (const auto& pair : my_map) {
        if (scoreHero >= pair.first) {
            rankingHero = pair.second;
        }
    }

    std::cout << "O Heroi de nome " << nameHero << " esta no nivel de " << rankingHero << " com a pontuacao de " << scoreHero;
}
