
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
  
}

// This code runs infinitely and is the body of our program.
void loop() {
  // sizeof() returns the size of the variable in bytes. To get the lenght of the array, we divide the size of the array by the size of one element
  int codeLength = sizeof(morseCode) / sizeof(morseCode[0]);
  // Use a for loop to run through each symbol in our code.
  for (int i = 0; i < codeLength; i++) {
    // access the ith element in the morseCode array

    // use conditionals (if/else) to carry out a function based on the code

  }
}

// This function displays a dot.
void displayDot() {
  // turn the light on... wait.. turn off
  
}

// This function displays a line (dash).
void displayLine() {
  // turn the light on... wait a bit longer... turn off
  // a line is 3x as long as a dot
  
}
