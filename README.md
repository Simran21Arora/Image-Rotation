# Image-Rotation
PROJECT  - IMAGE ROTATION IN C++ USING OPEN-CV

Open-CV : Open-CV is the huge open-source C++ library for computer vision, machine learning and image processing and now it plays a major role in real-time operation. By using it one can process images and videos to identify objects, faces etc. It has several hundred of inbuilt functions which implement image processing algorithms. Out of those functions mentioned below are few which are used in this project :

•	Mat cv::imread(const String & filename, int flags) : The function imread loads an image from the specified file and returns it. If the image cannot be read the function returns an empty matrix.

Mat img = imread(path);

•	cv::namedWindow(const String & windowName, int flags) : The function namedWindow creates a window that can be used as a placeholder for images and trackbars. Created windows are referred by their names.

namedWindow("Original_image");	

namedWindow("rotated_image");

•	cv::imshow(const String & windowName, inputArray mat) : The function imshow displays an image in the specified window. If the window was created with the cv::WINDOW_AUTOSIZE flag, the image is shown with its original size, however it is still limited by the screen resolution. Otherwise, the image is scaled to fit the window. This function should be followed by cv::waitKey function which displays the image for specified milliseconds. Otherwise, it won't display the image.

imshow("Original_image", img);

imshow("rotated_image",rot);

•	cv::waitKey(0) : This function will display the window infinitely until any keypress.

waitKey(0);

•	Mat cv::getRotationMatrix2D(Point2f center, double angle, double scale) : This function is used to rotate an image. It has three parameters which should be mentioned in order to rotate the image :

Center : Center with respect to which the image will rotate.

Angle : Rotation angle in degrees. Positive angle means counter-clockwise rotation.

Scale : Isotropic scale factor.

Mat rot_img = getRotationMatrix2D(pt,angle,1.0); 

•	cv::destroyWindow(const String & windowName) : The function will destroy the window with the given name.

destroyWindow("Original_image");

destroyWindow("rotated_image");
