// Function: FUN_140088830
// Addr: 140088830
// Size: 48 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_140088830(double *param_1)

{
  double dVar1;
  char cVar2;
  double extraout_XMM0_Qa;
  undefined1 auStackX_8 [32];
  
  cVar2 = *(char *)(param_1 + 1);
  if (cVar2 == '\x01') {
    if ((-1 < (longlong)*param_1) && ((ulonglong)*param_1 < 0x100000000)) {
      return 0xffffff01;
    }
  }
  else {
    if (cVar2 == '\x02') {
      return CONCAT71(0xffffff,(ulonglong)*param_1 < 0x100000000);
    }
    if (cVar2 == '\x03') {
      dVar1 = *param_1;
      if (((0.0 <= dVar1) && (dVar1 <= _UNK_140492970)) &&
         (FUN_1402d3c20(dVar1,auStackX_8), extraout_XMM0_Qa == 0.0)) {
        return 1;
      }
      return 0;
    }
  }
  return 0;
}

