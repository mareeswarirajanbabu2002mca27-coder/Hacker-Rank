import math
ab = int(input())
bc = int(input())
theta_radians = math.atan2(ab, bc)
theta_degrees = math.degrees(theta_radians)
print(f"{round(theta_degrees)}{chr(176)}")
