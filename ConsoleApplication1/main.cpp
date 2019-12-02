#include "pch.h"

#include "Directx11Main.h"

using namespace winrt;
using namespace Windows::Foundation;

int main()
{
    init_apartment();
    Uri uri(L"http://aka.ms/cppwinrt");
    printf("Hello, %ls!\n", uri.AbsoluteUri().c_str());

    printf("%ls\n", uri.AbsoluteCanonicalUri().c_str());
}