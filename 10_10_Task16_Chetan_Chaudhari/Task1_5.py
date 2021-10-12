import cv2
import numpy as np

img = cv2.imread(r"masking.jpg")
hsv = cv2.cvtColor(img, cv2.COLOR_BGR2HSV)

# Threshold of blue in HSV space
lower_green = np.array([25, 52, 72])
upper_green = np.array([102, 255, 255])
# preparing the mask to overlay
mask1 = cv2.inRange(hsv, lower_green, upper_green)

# The black region in the mask has the value of 0,
# so when multiplied with original image removes all non-blue regions
result = cv2.bitwise_and(img, img, mask=mask1)

cv2.imshow('mask', mask1)
cv2.imshow('result', result)
cv2.imwrite(r"green.JPG", result)
cv2.waitKey(0)
