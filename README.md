# CS290I_HW_3, iOS App Development:  Server Driven App Implementation

#Intro
This repo is intended for CS290I (Computer Science for Non_Computer Science) students. It contains sample skeleton code for HW_3. An easy way to start the homework would be to fork this repo. 


In this assignment you will be implementing your own web server utilizing the Python webserver library “Flask” . You will be given a skeleton constructor code that implements typical POST API that accepts and returns predefined JSON outputs. The API specifications that you are asked to implement are tabulated below. More info about flask can be found here.

The iOS app should have the following parts:
A label showing the current stock price formatted as follows: @”$ %.1f”
A button that allows the user to query the latest stock price
An activity view that indicates the existence of  a background asynchronous thread.
A “stocksBrain” NSObject subclass that implements the model of the API calling functions


Sample acceptable submission is shown below, and can be accessed here via appetize.io:  https://appetize.io/app/pqd8kvznt2w1mrrzx1gnpvdag0?device=iphone6plus&scale=50&orientation=portrait.


For both the the webserver and the iOS, you will be provided a sample skeleton code that will help you start up your app. I would recommend starting your own project from scratch, with the help of the skeleton code, as opposed to starting with working on the skeleton project.




#API Specs
##API Name: 
Stocks_Price
##API URL: 
http://fadikf.pythonanywhere.com/get_stock_290I | the latter is a sample URL pointing to a server that I implmented. You are expected to have your own server deployed with the same URL scheme.

##Output JSON Format
{"response_description": "Success", "stock_data": 36.392788576, "response_int": 0}

##Description 

The API returns the current stock price based on a predefined formula



##### UC Berkeley, Civil Systems Department
