import random
import time

while (True):
    print()
    temp = random.randint(10, 500)  # temperature in fahrenheit.
    humidity = random.randint(1, 100)  # Relative humidity in %
    time.sleep(1)
    print(temp, ' F, ', humidity, ' %', end='')
    if temp > 150 or humidity < 60:
        print(' - Fire detected', end='')
    else:
        print(' - Normal', end='')
