#!/usr/bin/node
exports.converter = function (base) {
  return function (amn) {
    return amn.toString(base);
  };
};
