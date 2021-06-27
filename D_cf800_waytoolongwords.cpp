#include<iostream>
#include<vector>

int main() {
    
    int num;
    std::vector<std::string> words[num];
    std::vector<std::string> final[num];

    std::cin >> num;

    while (num != 0) {
        
        std::string poop;
        
        std::cin >> poop;
        
        words->push_back(poop);
        
        num -= 1;

    }

    for (int i = 0; i < words->size(); i++) {

        for (int i = 0; i < words->size(); i++) {
            
            std::string soup = words->at(i);

            if (soup.length() > 10) {
                
                int num = soup.length() - 2;
                char fs = soup.front();
                char ls = soup.back();

                std::string newword = fs + std::to_string(num) + ls;

                final->push_back(newword + '\n');

            } else final->push_back(soup + '\n');
            
        }
        
        std::cout << final->at(i);

    }

    return 0;

}