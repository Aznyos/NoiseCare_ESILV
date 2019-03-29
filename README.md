# NoiseCare_ESILV
Welcome to the README file of the NoiseCare solution. 
This uses Dygraphs an open source JavaScript. See : http://dygraphs.com/
To read the value of the serial port, install python and python-serial on your Raspberry Pi. 
Then uses the grabserial python script to export the serial port datas to a formated output. You have to write it on the /var/www/html folder and name it intson.csv .
Use : sudo python grabserial -o /var/www/html/intson.csv

Make sure you copy all these files to your /var/www/html repository.
Via command :  sudo mv file1.* file2.* /var/www/html 

You will also find a .ino file 
This is the Arduino script to get the datas and send it to the RaspberryPi.
DO NOT COPY IT ON YOUR RASPBERRYPI.
