# ifndef __SYS_STARTUP
    # include "startup.hpp"
    //-- Constructor
    Startup::Startup() {
        if (initialize() == true) {
            system("echo $(date +'[%Y-%m-%d][%H:%M:%S.%3N]')[STARTUP_ANIMATION] >> logs.txt");
            system("echo -e \t[SUCCESS] Initialized Program >> logs.txt");
        } else {
            system("echo $(date +'[%Y-%m-%d][%H:%M:%S.%3N]')[STARTUP_ANIMATION] >> logs.txt");
            system("echo - [FAILED] Can Not Initialize Program >> logs.txt");
        }
    }
    //-- Method to Initialize Program
    bool Startup::initialize() {
        //-- Find Center Pixel
        Display* disp = XOpenDisplay(NULL);
        Screen* scrn = DefaultScreenOfDisplay(disp);
        XCloseDisplay(disp);
        screen.height = scrn->height;
        screen.width = scrn->width;
        screen.center.x = screen.width / 2;
        screen.center.y = screen.height / 2;
        if (screen.height > 0 && screen.width > 0) {
            return true;
        } else {
            return false;
        }
    }
    //-- Main
    int main() {
        Startup run;
        return EXIT_SUCCESS;
    }
# endif // __SYS_STARTUP