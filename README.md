# Smart-beehive
The idea of project is to make bees` lives easier. Or rather, to be more specific, to make a climate control,using arduino.

# Recommended IDE Setup
I`m using Arduino IDE version 1.18.19

# Libraries and necesarry modules
## Modules
I used Arduino UNO, 4 digit 7 segment LDA display, thermometer micro DS18B20, micro servo driv. Also I used wires, small breadboard, medium breadboard.
## Libraries
I`ve used 3 external libraries: SevSeg for LDA display https://github.com/DeanIsMe/SevSeg, microDS18B20 for temperature sensor https://github.com/GyverLibs/microDS18B20, Servo for servo drive https://github.com/arduino-libraries/Servo

# Realization

Every second we read data form thermometer.Then we print it on our display, and also chech, if temperature isn`t higher than 35 degrees celsium. If it is higher, that means the beehive is overheated, so the servo that holds the flaps in place should turn to open them. If it is too cold, the servo closes the flaps turning back, to help bees to heat it back up to 35 degrees celsium

# The scheme of flaps

![image](https://github.com/1mpalo/Smart-beehive/assets/148369119/628b38a5-370d-4fad-9523-4058a7e0d58b)
![image](https://github.com/1mpalo/Smart-beehive/assets/148369119/334cc4f4-2ca1-44fe-8d27-c0c6fd447f18)

# The wiring diagram

<img width="1280" alt="Neat Crift-Bombul" src="https://github.com/1mpalo/Smart-beehive/assets/148369119/c580285c-59eb-4dab-8a70-a42730ed84e2">

# The prototype

![image](https://github.com/1mpalo/Smart-beehive/assets/148369119/b4d58ef2-362a-4a84-a733-598fbf5e5eaa)


# Future plans

To add humidity sensor to control the weather or field pollination
