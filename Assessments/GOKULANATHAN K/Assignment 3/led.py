import RPi.GPIO as GPIO #Import
Raspberry Pi GPIO library
from time import sleep # Import the sleep
function from the time module
GPIO.setwarnings(False) #lgnore warning
for now
GPI0.setmode(GPI0.BOARD) # Use
physical pin numbering
GPIO.setup(8, GPIO.OUT, initial=GPIO.LOW)
# Set pin 8 to be an output pin and set initial
value to low (off)
