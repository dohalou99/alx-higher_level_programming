#!/usr/bin/node
const fs = require('fs');
const x = process.argv[2];
const y = process.argv[3];
const z = process.argv[4];
fs.readFile(x, 'utf-8', function (err, data) {
  if (err) throw err;
  fs.writeFile(z, data, function (err) { if (err) throw err; });
});
fs.readFile(y, 'utf-8', function (err, data) {
  if (err) throw err;
  fs.appendFile(z, data, function (err) { if (err) throw err; });
});
