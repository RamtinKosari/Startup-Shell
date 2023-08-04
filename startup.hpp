# ifndef __SYS_STARTUP
    /**
     * @file startup.hpp
     * @author Ramtin Kosari (ramtinkosari@gmail.com)
     * @brief C++ Startup Functions Including Animations
     * @date 2023-08-04
     */
    # define __SYS_STARTUP
    //-- Check Operating System
    # if defined(unix) || defined(__unix) || defined(__unix__) || defined(__APPLE__) || defined(__MACH__) || defined(macintosh) || defined(Macintosh)
        # include <X11/Xlib.h>
    # else
        # error This Startup Shell Only Works on Unix Based Operating Systems
    # endif
    //-- Include Needed Libraries
    # include <opencv4/opencv2/imgproc.hpp>
    # include <opencv4/opencv2/highgui.hpp>
    # include <X11/Xlib.h>
    # include <iostream>
    /**
     * @brief Startup Animation Class
     */
    class Startup {
        private:
            //-- Display Window
            cv::Mat window;
            //-- Structure that Holds Screen Information
            struct ScreenCNF {
                int width;
                int height;
                cv::Point center;
            };
            ScreenCNF screen;
        public:
            //-- Constructor
            Startup();
            //-- Method to Initialize Program
            bool initialize();
    };
# endif // __SYS_STARTUP