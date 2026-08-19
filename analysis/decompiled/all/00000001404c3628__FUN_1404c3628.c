// Function: FUN_1404c3628
// Addr: 1404c3628
// Size: 1 bytes


void FUN_1404c3628(byte *param_1,undefined8 param_2,byte param_3)

{
  byte bVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_BL;
  longlong unaff_RDI;
  char in_CF;
  
  *(byte *)(unaff_RDI + 0x3524002b) = *(byte *)(unaff_RDI + 0x3524002b) >> 1 | in_CF << 7;
  bVar1 = *param_1;
  *param_1 = *param_1 + param_3;
  *param_1 = (*param_1 - in_AL) - CARRY1(bVar1,param_3);
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + unaff_BL;
  return;
}

