import serial
import time
import pyttsx3
import speech_recognition as sr 
def speak(audio):
    engine.say(audio)
    engine.runAndWait()
engine = pyttsx3.init('sapi5')
voices=engine.getProperty('voices')
engine.setProperty("voice",voices[0].id)
engine.setProperty("rate",140)
engine.setProperty("volume",1000)


if __name__ == "__main__":
    ard = serial.Serial('com5' ,9600)
    time.sleep(2)
    while True:
        var = 1265
        iny =(ard.readline())
        iny=iny.decode()
        var=int(iny)
        if var >=210 and var<250:
            speak("sir its smoke in the room!!!  be alert!!")

        elif var >=250:
            speak("sir intensity of smoke is high!! please check all there is any fire or not!!")
            speak("be alert!!")