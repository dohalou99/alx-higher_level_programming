#!/usr/bin/node
class Square extends require('./5-square.js') {
  charPrint (c) {
    if (!c) {
      c = 'X';
    }
    if (!this.width || !this.height) {
      return;
    }

    let x = c;
    for (let j = 1; j < this.width; j++) {
      x += c;
    }
    for (let j = 0; j < this.height; j++) {
      console.log(x);
    }
  }
}

module.exports = Square;
