#include <iostream>
#include <windows.h>
#include "keyConstants.h"
#include "helper.h"
#include "base64.h"

using namespace std;

int main () {

    MSG Msg;

    while(GetMessage (&Msg, NULL, 0, 0)) {
        TranslateMessage(&Msg);
        DispatchMessage(&Msg);
    }

    return 0;
}