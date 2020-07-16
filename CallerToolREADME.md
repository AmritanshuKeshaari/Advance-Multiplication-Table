#!/bin/bash
figlet Caller Tool
echo -n "Enter The Phone Number of Call Receiver:"
read num1
termux-telephony-call $num1
