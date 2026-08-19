// Function: FUN_140014400
// Addr: 140014400
// Size: 2 bytes


undefined1 FUN_140014400(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  undefined1 auStackX_8 [24];
  undefined8 uStackX_20;
  
  uStackX_20 = 0;
  iVar1 = FUN_140291ca0(auStackX_8,param_2,&uStackX_20,param_1 + 0x30);
  if (iVar1 != 1) {
    auStackX_8[0] = param_3;
  }
  return auStackX_8[0];
}

