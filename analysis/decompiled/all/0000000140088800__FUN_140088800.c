// Function: FUN_140088800
// Addr: 140088800
// Size: 125 bytes


ulonglong FUN_140088800(double *param_1)

{
  char cVar1;
  double dVar2;
  undefined1 local_res8 [32];
  
  cVar1 = *(char *)(param_1 + 1);
  if (cVar1 == '\x01') {
    return (ulonglong)*param_1 >> 0x3f ^ 1;
  }
  if (cVar1 == '\x02') {
    return 1;
  }
  if (cVar1 != '\x03') {
    return 0;
  }
  dVar2 = *param_1;
  if (((0.0 <= dVar2) && (dVar2 < DAT_140492928)) &&
     (dVar2 = (double)FUN_1402d3b50(dVar2,local_res8), dVar2 == 0.0)) {
    return 1;
  }
  return 0;
}

