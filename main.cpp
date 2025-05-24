#include <opencv2/opencv.hpp>
#include <iostream>

int main() {
    cv::VideoCapture cap(0);
    if (!cap.isOpened()) {
        std::cerr << "Error: Could not open camera." << std::endl;
        return -1;
    }

    cv::namedWindow("Original", cv::WINDOW_AUTOSIZE);
    cv::namedWindow("Edge Detection", cv::WINDOW_AUTOSIZE);

    cv::Mat frame, gray, edges;
    char key;

    while (true) {
        cap >> frame;
        if (frame.empty()) {
            std::cerr << "Error: Empty frame." << std::endl;
            break;
        }

        cv::cvtColor(frame, gray, cv::COLOR_BGR2GRAY);

        cv::GaussianBlur(gray, gray, cv::Size(5, 5), 1.5);

        cv::Canny(gray, edges, 50, 150);

        cv::imshow("Original", frame);
        cv::imshow("Edge Detection", edges);

        key = cv::waitKey(1);
        if (key == 27) 
            break;
    }

    // Clean up
    cap.release();
    cv::destroyAllWindows();
    return 0;
} 