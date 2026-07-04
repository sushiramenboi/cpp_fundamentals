#include <iostream>
using namespace std;

int main()
{
    unsigned long memSizeGiB;
    unsigned long long memSizeBytes;
    unsigned long long memSizeBits;

    cout << "Enter memory size in GiBs: ";
    cin >> memSizeGiB;

    // 1 GiB = 1024 MiB, 1 MiB = 1024 KiB, 1 KiB = 1024 bytes
    memSizeBytes = memSizeGiB * (1024 * 1024 * 1024);
    // 1 byte = 8 bits
    memSizeBits = memSizeBytes * 8;

    cout << "Memory size in bytes: " << memSizeBytes << endl;
    cout << "Memory size in bits: " << memSizeBits << endl;

    return 0;
}