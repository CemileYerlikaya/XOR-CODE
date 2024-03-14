#include <iostream>
#include <string>

// XOR �ifreleme fonksiyonu
std::string xorEncryptDecrypt(const std::string &input, const std::string &key) {
    std::string output = input;
    for (size_t i = 0; i < input.size(); ++i) {
        output[i] = input[i] ^ key[i % key.size()]; // Her karakteri anahtarla XOR i�lemi yap
    }
    return output;
}

int main() {
    std::string key;
 
   std::cout << "Lutfen bir sifreleme turu girin: ";
    std::cin >> key;
    std::cin.ignore(); // getline'dan �nce getline'�n tamam�n� almas�n� sa�lamak i�in gereklidir
    std::string plaintext;
    std::cout << "sifrelemek istediginiz sozcukleri girin: ";
    std::getline(std::cin, plaintext);

    // �ifreleme
    std::string ciphertext = xorEncryptDecrypt(plaintext, key);
    std::cout << "�ifrelenmi� metin: " << ciphertext << std::endl;

    // �ifre ��zme (Opsiyonel, �ifrelenmi� metni ��zmek i�in)
    //std::string decryptedText = xorEncryptDecrypt(ciphertext, key);
    //std::cout << "��z�lm�� metin: " << decryptedText << std::endl;

    return 0;}
