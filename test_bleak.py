
import asyncio
from bleak import BleakClient

async def t():                                                                                       
	async with BleakClient('C8:47:80:50:0F:8C') as c:
	  print('connected:', c.is_connected)                                                          
	  for s in c.services:
	      print(s)                                                                                 
	      for ch in s.characteristics:
	          print(' ', ch.uuid, ch.properties)                                                   
asyncio.run(t()) 
