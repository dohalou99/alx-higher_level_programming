#!/usr/bin/node
const num = Math.floor(Number(process.argv[2]));
if (!isNaN(num)) {
  for (let j = 0; j < num; j++) {
    console.log('C is fun');
  }
} else {
  console.log('Missing number of occurrences');
}
