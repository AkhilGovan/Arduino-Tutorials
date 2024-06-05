/*
  Starter code for a basic morse code exercise - Akhil Govan

  This is the morse code for certain letters
  ".-",   // a
  "-...", // b
  "-.-.", // c
  "-..",  // d
  ".",    // e
  "..-.", // f
  "--.",  // g
  "....", // h
  "..",   // i
  ".---", // j
  "-.-",  // k
  ".-..", // l
  "--",   // m
  "-.",   // n
  "---",  // o
  ".--.", // p
  "--.-", // q
  ".-.",  // r
  "...",  // s
  "-",    // t
  "..-",  // u
  "...-", // v
  ".--",  // w
  "-..-", // x
  "-.--", // y
  "--.."  // z
*/

// Define a unit of time for a dot. Dashes and spaces are a multiple of this.
int dotDelay = 200;

// Define the LED pin. In this case, we'll use the Nano's built-in LED.
int ledPin = LED_BUILTIN;

// Define a code for a word we want to display.
const String morseCode[] = {"dot", "dot", "dot", "line", "line", "line", "dot", "dot", "dot"}; //sos

// This code is run once at the start of the program.
void setup() {
  // The pinMode function configures the specified pin to behave 
  // either as an input or an output.
  // Here we initialize digital pin LED_BUILTIN as an output.
  pinMode(ledPin, OUTPUT);
}

// This code runs infinitely and is the body of our program.
void loop() {
  // Use a for loop to run through each symbol in our code.
  int codeLength = sizeof(morseCode) / sizeof(morseCode[0]);
  for (int i = 0; i < codeLength; i++) {
    String symbol = morseCode[i];
    if (symbol == "dot") {
      displayDot();
    } else if (symbol == "line") {
      displayLine();
    }
    // Add a short delay between symbols
    delay(dotDelay);
  }
  // longer delay to know when complete
  // remember this function runs indefinitely
  delay(3000); 
}

// This function displays a dot.
void displayDot() {
  // turn the light on
  digitalWrite(ledPin, HIGH);
   // A line is three times the duration of a dot
  delay(dotDelay);
  // turn the led off
  digitalWrite(ledPin, LOW);
  // Delay between line and next signal
  delay(dotDelay); 
}

// This function displays a line (dash).
void displayLine() {
  // turn the light on
  digitalWrite(ledPin, HIGH);
   // A line is three times the duration of a dot
  delay(3 * dotDelay);
  // turn the led off
  digitalWrite(ledPin, LOW);
  // Delay between line and next signal
  delay(dotDelay); 
}

// further to think about
// using the serial monitor to take in inputs
// using a map to store the letter code
// any questions? email me! akhilgovan@gmail.com