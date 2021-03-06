/*
 * Permission is hereby granted, free of charge, to any person
 * obtaining a copy of this software and associated documentation files
 * (the "Software"), to deal in the Software without restriction,
 * including without limitation the rights to use, copy, modify, merge,
 * publish, distribute, sublicense, and/or sell copies of the Software,
 * and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:

 * The above copyright notice and this permission notice shall be
 * included in all copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND
 * NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS
 * BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN
 * ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 */

#ifndef FX_SERIAL_H_
#define FX_SERIAL_H_

// uncomment for print useful info
//#define DEBUG_PRINT

// for example: 
// struct fx_serial *ss = fx_serial_start("/dev/ttyUSB0", 9600, '7', 'N', '1');
struct fx_serial* fx_serial_start(char *device, int baude, char bits, char parity, char stop);
int fx_serial_stop(struct fx_serial *ss);

int fx_register_set(struct fx_serial *ss, int id, int data,int flag);
int fx_register_get(struct fx_serial *ss, int id, int *data,int flag);
int read_x0(struct fx_serial *s, int *data);
int read_x1(struct fx_serial *s, int *data);
int read_x2(struct fx_serial *s, int *data);
int read_x3(struct fx_serial *s, int *data);
int read_y0(struct fx_serial *s, int *data);
int read_y1(struct fx_serial *s, int *data);
int read_y2(struct fx_serial *s, int *data);
int read_y3(struct fx_serial *s, int *data);
int read_registerD(struct fx_serial *s,int id, int *data);

#endif
