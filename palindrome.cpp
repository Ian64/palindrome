#include <iostream>
#include <algorithm>

bool isPalindrome(const std::string & text)
{
    std::string textCopy(text);
    std::transform(textCopy.begin(), textCopy.end(), textCopy.begin(), [](unsigned char c){ return std::tolower(c); });

    return std::equal(textCopy.begin(), textCopy.begin() + textCopy.size()/2, textCopy.rbegin());
}

int main()
{
    std::cout << "Empty string: " << isPalindrome("") << std::endl;
    std::cout << "Single letter: " << isPalindrome("c") << std::endl;
    std::cout << "String \"Ala ma kota\": " << isPalindrome("Ala ma kota") << std::endl;
    std::cout << "String \"Kajak\": " << isPalindrome("Kajak") << std::endl;
    std::cout << "String \"neveroddoreven\": " << isPalindrome("neveroddoreven") << std::endl;
    std::cout << "String \"abacada\": " << isPalindrome("abacada") << std::endl;

    return 0;
}
