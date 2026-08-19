// Function: FUN_1404a1788
// Addr: 1404a1788
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a1788(ulonglong param_1,undefined8 param_2)

{
  byte *pbVar1;
  uint uVar2;
  char *in_RAX;
  int *piVar3;
  byte bVar4;
  longlong unaff_RSI;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  *(char *)(param_1 & 0xffffffffffffff49) =
       *(char *)(param_1 & 0xffffffffffffff49) + (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + (char)in_RAX;
  piVar3 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + bVar4);
  uVar2 = (int)piVar3 + *piVar3;
  *(char *)(param_1 & 0xffffffffffffff49) = *(char *)(param_1 & 0xffffffffffffff49) + (char)uVar2;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + ((byte)param_1 & 0x49);
  pbVar1 = (byte *)(((ulonglong)(uVar2 | 4) | 0x92) + 1);
  *pbVar1 = *pbVar1 | bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

