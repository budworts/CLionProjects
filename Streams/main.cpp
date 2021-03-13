#include <iostream>
#include <iomanip>

int main() {

    std::cout << "C++ version: " << __cplusplus << std::endl;

    {
        std::cout << "\n++++ True / False ++++\n";

        // std::cout << std::noboolalpha;
        std::cout.unsetf(std::ios::boolalpha);
        std::cout << (10 == 10) << std::endl;
        std::cout << (10 == 20) << std::endl;

        // std::cout << std::boolalpha;
        std::cout.setf(std::ios::boolalpha);
        std::cout << (10 == 10) << std::endl;
        std::cout << (10 == 20) << std::endl;

        std::cout << std::resetiosflags(std::ios::boolalpha);
        std::cout << (10 == 10) << std::endl;
        std::cout << (10 == 20) << std::endl;
    }

    {
        std::cout << "\n++++ Bases ++++\n";

        int num1{255};
        int num2{-100};

        std::cout << std::dec << num1 << std::endl;
        std::cout << std::hex << num1 << std::endl;
        std::cout << std::oct << num1 << std::endl;
        std::cout << std::dec << num2 << std::endl;
        std::cout << std::hex << num2 << std::endl;
        std::cout << std::oct << num2 << std::endl;

        std::cout << "\n100 = " << 100 << std::endl;

        std::cout << std::showbase << std::uppercase << std::showpos;

//        std::cout << std::setiosflags(std::ios::showbase);
//        std::cout << std::setiosflags(std::ios::showpos);
//        std::cout << std::setiosflags(std::ios::uppercase);

        std::cout << std::endl;

        std::cout << std::dec << num1 << std::endl;
        std::cout << std::hex << num1 << std::endl;
        std::cout << std::oct << num1 << std::endl;
        std::cout << std::dec << num2 << std::endl;
        std::cout << std::hex << num2 << std::endl;
        std::cout << std::oct << num2 << std::endl;

        std::cout << std::noshowbase << std::nouppercase << std::noshowpos;
        std::cout << std::resetiosflags(std::ios::basefield);

//        std::cout << std::resetiosflags(std::ios::showbase);
//        std::cout << std::resetiosflags(std::ios::showpos);
//        std::cout << std::resetiosflags(std::ios::uppercase);
    }

    {
        std::cout << "\n++++ Floating Points ++++\n";

        double num1{1234.5678};
        double num2{123456789.987654321};
        int num3{1000};

        std::cout << num1 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << num3 << std::endl;
        std::cout << std::endl;

        std::cout << "setprecision\n";
        std::cout << std::setprecision(9);
        std::cout << num1 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << num3 << std::endl;
        std::cout << std::endl;

        std::cout << "fixed\n";
        std::cout << std::fixed;
        std::cout << num1 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << num3 << std::endl;
        std::cout << std::endl;

        std::cout << "setprecision etc...\n";
        std::cout << std::setprecision(3) << std::scientific
            << std::uppercase << std::showpos;
        std::cout << num1 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << num3 << std::endl;
        std::cout << std::endl;


        std::cout << std::setprecision(-1);
//        std::cout.unsetf(std::ios::scientific | std::ios::fixed );
        std::cout << std::resetiosflags(std::ios::floatfield);
//        std::cout << std::resetiosflags(std::ios::fixed);
        std::cout << std::resetiosflags(std::ios::showpos);
//        std::cout << std::resetiosflags(std::ios::scientific);
        std::cout << std::resetiosflags(std::ios::uppercase);

        std::cout << num1 << std::endl;
        std::cout << num2 << std::endl;
        std::cout << num3 << std::endl;
    }

    {
        std::cout << "\n++++ Align & Fill ++++\n";

        double num{1234.5678};
        std::string hello{"Hello"};

        std::cout << "12345678901234567890\n";
        std::cout << "--------------------\n";

        std::cout << std::setw(10) << num
            << std::setw(10) << hello << "\n\n";

        std::cout << std::setfill('-');

        std::cout << std::setw(10) << std::left << num
            << std::setw(15)  << std::right << hello << std::endl // right is the default
            << std::setw(7) << hello << std::endl;



    }

    return 0;
}
