// Function: FUN_1404d1e64
// Addr: 1404d1e64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d1e64(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  byte bVar5;
  char *in_RAX;
  byte *unaff_RSI;
  int *piVar4;
  
  *unaff_RSI = *unaff_RSI & (byte)in_RAX;
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + bVar5;
  uVar3 = in(8);
  piVar4 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar3);
  pbVar1 = &stack0x00000000 + (longlong)piVar4 * 8;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)param_2;
  *piVar4 = *piVar4 + (int)piVar4 + (uint)CARRY1(bVar2,(byte)param_2);
  *(byte *)((longlong)piVar4 + param_2) = *(byte *)((longlong)piVar4 + param_2) | bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

