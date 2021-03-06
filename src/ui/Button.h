#ifndef BUTTON_H
#define BUTTON_H

#include <allegro.h>
#include <functional>

class Button {
 public:
  Button();
  Button(int x, int y);
  Button(const Button& b);
  Button& operator=(const Button& b);
  ~Button();

  void Update();

  void SetImages(const char* image1, const char* image2);

  void SetOnClick(std::function<void()> func);

  void Draw(BITMAP* buffer);

  bool Hover() const;

 private:
  std::function<void(void)> OnClick;

  int x, y;
  int width, height;

  BITMAP* images[2];
};

#endif
