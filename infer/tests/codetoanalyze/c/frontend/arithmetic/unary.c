/*
 * Copyright (c) 2013 - present Facebook, Inc.
 * All rights reserved.
 *
 * This source code is licensed under the BSD style license found in the
 * LICENSE file in the root directory of this source tree. An additional grant
 * of patent rights can be found in the PATENTS file in the same directory.
 */

int main() {
  int x = 1;
  int y;

  y = ~x;
  y = -x;
  y = +x;

  y = x++;
  y = ++x;

  y = --x;
  y = x--;

  int a;
  int* b;

  b = &a;
  a = *(b + 1);
  *b = *b + 1;
  a = *(&a);

  return 0;
}
