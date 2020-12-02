
"use strict";

let state = require('./state.js');
let rigid = require('./rigid.js');
let coord = require('./coord.js');
let contact = require('./contact.js');
let accelerometr = require('./accelerometr.js');
let tactile = require('./tactile.js');
let fsrInput = require('./fsrInput.js');
let newtactile = require('./newtactile.js');

module.exports = {
  state: state,
  rigid: rigid,
  coord: coord,
  contact: contact,
  accelerometr: accelerometr,
  tactile: tactile,
  fsrInput: fsrInput,
  newtactile: newtactile,
};
