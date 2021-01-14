#include "../headers/main.h"

#include <iostream>
#include <vector>

#include "Poco/MD5Engine.h"
#include "Poco/DigestStream.h"

using namespace std;

int main()
{

    cout << "Initializing" << endl;

    // Vector Test
    vector<int>
        xy = vector<int>({1, 2, 3});
    xy.push_back(10);

    // MD5
    Poco::MD5Engine md5;
    Poco::DigestOutputStream ds(md5);
    ds << "abcdefghijklmnopqrstuvwxyz";
    ds.close();
    std::cout << Poco::DigestEngine::digestToHex(md5.digest()) << std::endl;

    return 0;
}