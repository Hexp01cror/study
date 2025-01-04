#include <stdio.h>

int main() {
    // Define the plaintext and key
    int plaintext = 42; // Data to be encrypted
    int key = 23;       // Encryption key

    // Encryption
    int ciphertext = plaintext ^ key;
    printf("Ciphertext: %d\n", ciphertext);

    // Decryption
    int decrypted = ciphertext ^ key;
    printf("Decrypted plaintext: %d\n", decrypted);

    // Verify if decryption matches the original plaintext
    if (plaintext == decrypted) {
        printf("Decryption is successful. Original and decrypted values match!\n");
    } else {
        printf("Decryption failed. Values do not match.\n");
    }

    return 0;
}