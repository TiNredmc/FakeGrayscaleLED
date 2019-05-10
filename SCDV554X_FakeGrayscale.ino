#include <5x5MatrixLIB.h>

static const char sig_lvl_5[] = { 0x1F, 0x20, 0x40, 0x60, 0x80};
static const char sig_lvl_4[] = { 0x00, 0x3E, 0x40, 0x60, 0x80};
static const char sig_lvl_3[] = { 0x00, 0x20, 0x5C, 0x60, 0x80};
static const char sig_lvl_2[] = { 0x00, 0x20, 0x40, 0x78, 0x80};
static const char sig_lvl_1[] = { 0x00, 0x20, 0x40, 0x60, 0x90};
//static const char sig_lvl_0[] = { 0x00, 0x20, 0x40, 0x60, 0x80};

MatrixLIB Disp(2, 3, 1); //SDCLK DATA LOAD

void setup() {
  // put your setup code here, to run once:
  pinMode(1, FUNCTION_3); // set pinMode for the TX as GPIO
  pinMode(3, FUNCTION_3); // set pinMode for the RX as GPIO
  Disp.begin();

}
int dly = 3 ;
void loop() {
  // put your main code here, to run repeatedly:
  Disp.clear();
  Disp.bitbang(0xF0);
  Disp.drawBitmap(0, sig_lvl_5);
  delay(dly);
  Disp.clear();
  Disp.bitbang(0xF1);
  Disp.drawBitmap(0, sig_lvl_4);
  delay(dly);
  Disp.clear();
  Disp.bitbang(0xF2);
  Disp.drawBitmap(0, sig_lvl_3);
  delay(dly);
  Disp.clear();
  Disp.bitbang(0xF3);
  Disp.drawBitmap(0, sig_lvl_2);
  delay(dly);
  Disp.clear();
  Disp.bitbang(0xF4);
  Disp.drawBitmap(0, sig_lvl_1);
  delay(dly);


}
