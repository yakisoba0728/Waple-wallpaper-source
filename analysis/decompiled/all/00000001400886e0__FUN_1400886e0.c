// Function: FUN_1400886e0
// Addr: 1400886e0
// Size: 128 bytes


bool FUN_1400886e0(double *param_1)

{
  char cVar1;
  double dVar2;
  undefined1 local_res8 [32];
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x01') {
    return (longlong)*param_1 + 0x80000000U < 0x100000000;
  }
  if (cVar1 == '\x02') {
    return (ulonglong)*param_1 < 0x80000000;
  }
  if ((((cVar1 == '\x03') && (dVar2 = *param_1, DAT_140492a08 <= dVar2)) && (dVar2 <= DAT_140492898)
      ) && (dVar2 = (double)FUN_1402d3b50(dVar2,local_res8), dVar2 == 0.0)) {
    return true;
  }
  return false;
}

