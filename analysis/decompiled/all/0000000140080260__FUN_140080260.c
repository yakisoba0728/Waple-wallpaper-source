// Function: FUN_140080260
// Addr: 140080260
// Size: 40 bytes


longlong * FUN_140080260(longlong *param_1,longlong *param_2)

{
  longlong lVar1;
  
  lVar1 = SUB168(SEXT816(-0x29406b2a1a85bd43) * SEXT816(*param_2),8) + *param_2;
  *param_1 = (lVar1 >> 0x17) - (lVar1 >> 0x3f);
  return param_1;
}

