#include <iostream>
#include <thread>
#include <chrono>
#include <ctime>
#include <fstream>

void ThreadFunction() {  
    std::string message;
    while(true) {
        std::ifstream textfile("Message.txt");
        textfile >> message;
        textfile.close();

        auto timenow = std::chrono::system_clock::to_time_t(std::chrono::system_clock::now());
        std::cout << ctime(&timenow) << message << "\n";
        std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}

int main() {
    std::thread t1(ThreadFunction);
    t1.detach();
    std::cout << "Press key to exit" << "\n";
    getchar();
    return 0;
}
