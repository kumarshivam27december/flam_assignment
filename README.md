
# Real-Time Edge Detection Viewer (C++ with OpenCV)


## Demo Video

You can watch a short demonstration of the application running in real time using the link below:

[Demo Video on Google Drive](https://drive.google.com/file/d/1T5rkpbvQZRlMo__QlRhViD1owFr6la4J/view?usp=sharing)


This project demonstrates a basic real-time edge detection application using OpenCV in C++. It captures frames from a webcam, processes them using Gaussian blur and Canny edge detection, and displays both the original and processed frames side by side.

While this is a command-line desktop application, it showcases the core image processing pipeline that would typically be used in an Android application involving OpenCV and OpenGL.

## Features

- Captures live video feed from the default webcam
- Applies grayscale conversion and Gaussian blur for noise reduction
- Uses Canny edge detection to highlight edges in real time
- Displays both original and edge-detected frames in separate windows
- Clean exit on pressing the ESC key

## Requirements

- OpenCV 4.x
- C++17 compatible compiler
- CMake 3.10 or higher

## Build Instructions

Follow these steps to build and run the project:

```terminal
git clone https://github.com/kumarshivam27december/flam_assignment.git
cd flam_assignment
mkdir build
cd build
cmake ..
make
./edge_detection


```

## Usage

Once the application is running, it will open two windows:

1. **Original** – displays the raw webcam feed.
2. **Edge Detection** – displays the result after applying grayscale, blur, and Canny edge detection.

Press `ESC` to close the application.

## Architecture Overview

This project simulates a simplified version of what could be extended into a full Android application using the NDK and OpenGL ES. The main pipeline includes:

1. Capturing video frames using `cv::VideoCapture`
2. Converting the frames to grayscale
3. Applying Gaussian blur to reduce noise
4. Detecting edges using the Canny algorithm
5. Displaying the results in real time

If implemented on Android, the equivalent architecture would use:

* CameraX or Camera2 API for frame capture
* JNI for bridging between Java/Kotlin and native C++
* OpenGL ES for rendering the processed frames on the device

## Project Structure

```
flam_assignment/
├── CMakeLists.txt     # Build configuration using CMake
├── main.cpp           # C++ source code with OpenCV logic
└── README.md          # Project documentation
```

## Notes

This project demonstrates a functional real-time edge detection pipeline using OpenCV in C++. It serves as a foundational prototype that can be extended to more complex platforms, such as Android or embedded systems, where native image processing and efficient rendering are required.

