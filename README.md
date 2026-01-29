# Push-Buttons-to-Create-Dimmable-LED
I use two push buttons to create a dimmable LED with an active warning buzzer. So it's just a tiny Arduino proj that lets you **dim/brighten an LED** with two push-buttons.  
When you try to go **above max brightness (255)** or **below 0**, it **clamps the value** and **beeps** a buzzer.

## What it does
- **Button 1 (pin D12)**: increase LED brightness in steps of **+5**
- **Button 2 (pin D11)**: decrease LED brightness in steps of **-5**
- **LED (PWM pin D3)**: brightness is controlled with `analogWrite()`
- **Buzzer (pin D2)**: beeps when brightness hits **0** or **255**
- Prints button states to **Serial Monitor**

## Parts
- Arduino Uno (ig Nano works too)
- LED
- 1× **220Ω** resistor for the LED
- 1× buzzer (act)
- 2× push buttons
- Breadboard + jumper wires  
- **Pull-up resistors (10kΩ)** *or* use Arduino’s internal pull-ups (recommended)

## How to run
1. Open `dimmableLedwithBuzzer.ino` in the Arduino IDE
2. Select your board + port
3. Upload
4. Open **Serial Monitor** (9600 baud)
5. Press the buttons to change brightness

- Step size: change `LEDbright = LEDbright ± 5;`
- Debounce / feel: change `dt` (reads/prints delay) and `dt2` (buzzer beep duration)
