void setup() {
  // Initialize the Serial Monitor
  Serial.begin(9600);
  
  // Print a welcome message on the Serial Monitor
  Serial.println("Welcome to the Serial Monitor!");
  Serial.println("Enter any text or a number and press 'Enter'.");
}

void loop() {
  // Check if data is available on the Serial Monitor
  if (Serial.available() > 0) {
    // Read the data from the Serial Monitor
    char receivedData = Serial.read();
    
    // Display the received data on the Serial Monitor
    Serial.print("You entered: ");
    Serial.println(receivedData);
  }
}
