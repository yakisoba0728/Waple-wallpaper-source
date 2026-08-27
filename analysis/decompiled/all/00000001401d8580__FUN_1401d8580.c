// Function: FUN_1401d8580
// Addr: 1401d8580
// Size: 18 bytes


undefined1 * FUN_1401d8580(undefined8 *param_1)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)*param_1;
  *puVar1 = 0xd;
  *param_1 = puVar1 + 0x34;
  return puVar1 + 4;
}

