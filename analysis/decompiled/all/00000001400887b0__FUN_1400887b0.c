// Function: FUN_1400887b0
// Addr: 1400887b0
// Size: 4 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_1400887b0(double *param_1)

{
  char cVar1;
  double dVar2;
  undefined1 auStackX_8 [32];
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x01') {
    return (longlong)*param_1 + 0x80000000U < 0x100000000;
  }
  if (cVar1 == '\x02') {
    return (ulonglong)*param_1 < 0x80000000;
  }
  if ((((cVar1 == '\x03') && (dVar2 = *param_1, _UNK_140492ad8 <= dVar2)) &&
      (dVar2 <= _UNK_140492968)) && (dVar2 = (double)FUN_1402d3c20(dVar2,auStackX_8), dVar2 == 0.0))
  {
    return true;
  }
  return false;
}

