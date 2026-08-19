// Function: FUN_1404ac040
// Addr: 1404ac040
// Size: 1 bytes


void FUN_1404ac040(longlong param_1,undefined8 param_2)

{
  code *pcVar1;
  undefined4 in_EAX;
  
  *(char *)(param_1 + 0xfa3a000) = *(char *)(param_1 + 0xfa3a000) + (char)((ulonglong)param_2 >> 8);
  verr();
  pcVar1 = (code *)swi(1);
  uRam05210049e564000f = in_EAX;
  (*pcVar1)();
  return;
}

