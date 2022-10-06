import RPi.GPIO as GPIO
from time import sleep

GPIO.setwarnings(False)
GPIO.setmode(GPIO.BOARD)
GPIO.setup(9,GPIO.OUT, initial=GPIO.LOW)
GPIO.setup(10,GPIO.OUT, initial=GPIO.LOW)
GPIO.setup(11,GPIO.OUT, initial=GPIO.LOW)

while True: 
    # Red
    GPIO.output(9, True)
    sleep(3)

    # Red and amber
    GPIO.output(10, True)
    sleep(1)

    # Green
    GPIO.output(9, False)
    GPIO.output(10, False)
    GPIO.output(11, True)
    sleep(5)

    # Amber
    GPIO.output(11, False)
    GPIO.output(10, True)
    sleep(2)

    # Amber off (red comes on at top of loop)
    GPIO.output(10, False)