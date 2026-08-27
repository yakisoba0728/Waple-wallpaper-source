// Function: FUN_1401531c0
// Addr: 1401531c0
// Size: 50 bytes


char * FUN_1401531c0(char param_1)

{
  if (param_1 == '\x01') {
    return "translucent";
  }
  if (param_1 != '\x02') {
    if (param_1 != '\x03') {
      return "normal";
    }
    return "alphatocoverage";
  }
  return "additive";
}

