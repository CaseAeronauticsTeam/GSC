EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title ""
Date ""
Rev ""
Comp ""
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Device:Battery BT?
U 1 1 61985982
P 1700 3300
F 0 "BT?" H 1808 3346 50  0000 L CNN
F 1 "Battery" H 1808 3255 50  0000 L CNN
F 2 "" V 1700 3360 50  0001 C CNN
F 3 "~" V 1700 3360 50  0001 C CNN
	1    1700 3300
	1    0    0    -1  
$EndComp
$Comp
L Device:Lamp LA?
U 1 1 6198C894
P 2850 3300
F 0 "LA?" H 2978 3346 50  0000 L CNN
F 1 "Lamp" H 2978 3255 50  0000 L CNN
F 2 "" V 2850 3400 50  0001 C CNN
F 3 "~" V 2850 3400 50  0001 C CNN
	1    2850 3300
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_DPST_x2 SW?
U 1 1 61993DCD
P 2250 2650
F 0 "SW?" H 2250 2885 50  0000 C CNN
F 1 "SW_DPST_x2" H 2250 2794 50  0000 C CNN
F 2 "" H 2250 2650 50  0001 C CNN
F 3 "~" H 2250 2650 50  0001 C CNN
	1    2250 2650
	1    0    0    -1  
$EndComp
Wire Wire Line
	1700 3100 1700 2650
Wire Wire Line
	1700 2650 2050 2650
Wire Wire Line
	2450 2650 2850 2650
Wire Wire Line
	2850 2650 2850 3100
Wire Wire Line
	1700 3500 1700 3850
Wire Wire Line
	1700 3850 2850 3850
Wire Wire Line
	2850 3850 2850 3500
$Comp
L power:GNDPWR #PWR?
U 1 1 6199B002
P 1700 3850
F 0 "#PWR?" H 1700 3650 50  0001 C CNN
F 1 "GNDPWR" H 1704 3696 50  0000 C CNN
F 2 "" H 1700 3800 50  0001 C CNN
F 3 "" H 1700 3800 50  0001 C CNN
	1    1700 3850
	1    0    0    -1  
$EndComp
Connection ~ 1700 3850
$EndSCHEMATC
