            /* Buttons to USB Keyboard Example

   You must select Keyboard from the "Tools > USB Type" menu

   This example code is in the public domain.
*/

#include <Bounce.h>  

// Create Bounce objects for each button.  The Bounce object
// automatically deals with contact chatter or "bounce", and
// it makes detecting changes very simple.
Bounce button0 = Bounce(0, 10);
Bounce button1 = Bounce(1, 10);  // 10 = 10 ms debounce time
Bounce button2 = Bounce(2, 10);  // which is appropriate for
Bounce button3 = Bounce(3, 10);  // most mechanical pushbuttons
Bounce button4 = Bounce(13, 10);
Bounce button5 = Bounce(14, 10);  // if a button is too "sensitive"
Bounce button6 = Bounce(21, 10);  // to rapid touch, you can
Bounce button7 = Bounce(20, 10);  // increase this time.
Bounce button8 = Bounce(19, 10);
Bounce button9 = Bounce(17, 10);
Bounce button10 = Bounce(16, 10);
Bounce button11 = Bounce(15, 10);


void setup() {
  // Configure the pins for input mode with pullup resistors.
  // The pushbuttons connect from each pin to ground.  When
  // the button is pressed, the pin reads LOW because the button
  // shorts it to ground.  When released, the pin reads HIGH
  // because the pullup resistor connects to +5 volts inside
  // the chip.  LOW for "on", and HIGH for "off" may seem
  // backwards, but using the on-chip pullup resistors is very
  // convenient.  The scheme is called "active low", and it's
  // very commonly used in electronics... so much that the chip
  // has built-in pullup resistors!
  pinMode(0, INPUT_PULLUP);
  pinMode(1, INPUT_PULLUP);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(13, INPUT_PULLUP);
  pinMode(14, INPUT_PULLUP);
  pinMode(21, INPUT_PULLUP);  // Teensy++ LED, may need 1k resistor pullup
  pinMode(20, INPUT_PULLUP);
  pinMode(19, INPUT_PULLUP);
  pinMode(17, INPUT_PULLUP);
  pinMode(16, INPUT_PULLUP);
  pinMode(15, INPUT_PULLUP);
}

void loop() {
  // Update all the buttons.  There should not be any long
  // delays in loop(), so this runs repetitively at a rate
  // faster than the buttons could be pressed and released.
  button0.update();
  button1.update();
  button2.update();
  button3.update();
  button4.update();
  button5.update();
  button6.update();
  button7.update();
  button8.update();
  button9.update();
  button10.update();
  button11.update();

  // Check each button for "falling" edge.
  // Type a message on the Keyboard when each button presses
  // Update the Joystick buttons only upon changes.
  // falling = high (not pressed - voltage from pullup resistor)
  //           to low (pressed - button connects pin to ground)
  if (button0.fallingEdge()) {
    Keyboard.println("Q ");
  }
  if (button1.fallingEdge()) {
    Keyboard.println("W ");
  }
  if (button2.fallingEdge()) {
    Keyboard.println("E ");
  }
  if (button3.fallingEdge()) {
    Keyboard.println("R ");
  }
  if (button4.fallingEdge()) {
    Keyboard.println("T ");
  }
  if (button5.fallingEdge()) {
    Keyboard.println("Y ");
  }
  if (button6.fallingEdge()) {
    Keyboard.println("U ");
  }
  if (button7.fallingEdge()) {
    Keyboard.println("I ");
  }
  if (button8.fallingEdge()) {
    Keyboard.println("O ");
  }
  if (button9.fallingEdge()) {
    Keyboard.println("P ");
  }
  if (button10.fallingEdge()) {
    Keyboard.println("A ");
  }
  if (button11.fallingEdge()) {
    Keyboard.println("S ");
  }
}
