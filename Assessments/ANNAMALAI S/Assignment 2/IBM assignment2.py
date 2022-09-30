import random,time
while(True):
  t=random.randint(0,35)
  time.sleep(1)
  if 10<t<30:
    print('normal')
  elif t>30:
    print('DANGER!!!')
    print('FIRE ALARAM ON...')
  else:
    print('unnatural temperature',t)
    print('FIRE ALARAM ON...')
  print('')
