// Function: FUN_1404bfbbc
// Addr: 1404bfbbc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bfbbc(longlong param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  char *in_RAX;
  int *piVar3;
  char *pcVar5;
  undefined4 unaff_EBX;
  longlong unaff_RSI;
  char *unaff_RDI;
  byte *pbVar4;
  
  *(undefined4 *)(in_RAX + 0xb) = *(undefined4 *)(in_RAX + 0xb);
  piVar3 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                           (char)in_RAX + *in_RAX ^ (byte)((ulonglong)param_1 >> 8));
  uVar1 = (int)piVar3 + *piVar3;
  uVar2 = (uVar1 & 0xffffffc8) + 0x6b81500;
  pbVar4 = (byte *)(ulonglong)uVar2;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  *(int *)pbVar4 =
       *(int *)pbVar4 + CONCAT31((int3)((uint)unaff_EBX >> 8),(char)unaff_EBX - (char)uVar1);
  *pbVar4 = *pbVar4 + (char)param_1;
  pcVar5 = (char *)(param_1 + -1);
  if (pcVar5 == (char *)0x0 || *pbVar4 == 0) {
    pbVar4 = pbVar4 + unaff_RSI * 2;
    *pbVar4 = *pbVar4 << 3 | *pbVar4 >> 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar4 = *pbVar4 ^ (byte)uVar2;
  *pcVar5 = *pcVar5 + (char)(uVar2 >> 8);
  *param_2 = *param_2 | (byte)uVar2;
  *pbVar4 = *pbVar4 + (char)pcVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

