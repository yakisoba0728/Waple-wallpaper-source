// Function: FUN_1404d0d08
// Addr: 1404d0d08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0d08(byte *param_1)

{
  byte bVar1;
  undefined8 in_RAX;
  undefined7 uVar4;
  char *pcVar3;
  ulonglong uVar5;
  uint *unaff_RDI;
  char in_CF;
  int *piVar2;
  
  uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar1 = (char)in_RAX + in_CF | *param_1;
  piVar2 = (int *)CONCAT71(uVar4,bVar1);
  *piVar2 = *piVar2 + (int)piVar2;
  uVar5 = (ulonglong)(uint)((int)&stack0x00000000 + *(int *)((longlong)piVar2 + 2));
  *(int **)(uVar5 - 8) = piVar2;
  *unaff_RDI = *unaff_RDI & (uint)param_1;
  pcVar3 = (char *)CONCAT71(uVar4,bVar1);
  cRam00000001604d1555 = cRam00000001604d1555 + bVar1;
  *pcVar3 = *pcVar3 + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + (char)(uVar5 - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

