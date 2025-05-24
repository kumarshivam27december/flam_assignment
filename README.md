# Real-Time Edge Detection Viewer

This is a command-line version of a real-time edge detection application that demonstrates the core concepts that would be used in an Android app with OpenCV and OpenGL.

## Features
- Real-time webcam capture
- Edge detection using OpenCV's Canny algorithm
- Gaussian blur for noise reduction
- Dual window display (original and edge-detected views)

## Requirements
- OpenCV 4.x
- C++17 compatible compiler
- CMake 3.10 or higher

## Building the Project
```bash
mkdir build
cd build
cmake ..
make
./edge_detection
```

## Usage
- The application will open two windows:
  1. "Original" - showing the raw camera feed
  2. "Edge Detection" - showing the processed edge detection output
- Press ESC to exit the application

## Architecture
This command-line version demonstrates the core image processing pipeline that would be used in the Android version:
1. Frame capture (simulated by webcam)
2. Image processing using OpenCV
3. Display of results

In the Android version, this would be extended with:
- CameraX or Camera2 API for frame capture
- JNI for native code integration
- OpenGL ES for rendering
- Android UI components 