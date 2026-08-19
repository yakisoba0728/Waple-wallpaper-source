// Function: FUN_1404ba5a0
// Addr: 1404ba5a0
// Size: 1 bytes


char FUN_1404ba5a0(undefined8 param_1,undefined8 param_2)

{
  byte *pbVar1;
  char in_AL;
  undefined7 in_register_00000001;
  byte unaff_BH;
  
  pbVar1 = (byte *)(CONCAT71(in_register_00000001,in_AL) + 0xb);
  *pbVar1 = *pbVar1 | unaff_BH;
  return in_AL + (char)((ulonglong)param_2 >> 8);
}

