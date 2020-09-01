#include <Keyboard.h> 

void setup()
{
  // Begining the stream
  Keyboard.begin();

  // Waiting 500ms for init
  delay(500);

  delay(3000);

  Keyboard.write(KEY_LEFT_GUI);

  delay(500);

  Keyboard.print("Chrome");

  delay(500);

  typeKey(KEY_RETURN);

  delay(1200);

  Keyboard.print("https://www.youtube.com/watch?v=dQw4w9WgXcQ");

  typeKey(KEY_RETURN);
}

void typeKey(int key)
{
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

// Unused
void loop() {}
