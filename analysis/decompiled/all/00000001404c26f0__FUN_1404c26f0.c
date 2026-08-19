// Function: FUN_1404c26f0
// Addr: 1404c26f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c26f0(longlong param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *in_RAX;
  longlong unaff_RSI;
  byte *unaff_RDI;
  char in_CF;
  
  bVar3 = (byte)in_RAX;
  *param_2 = *param_2 + bVar3 + in_CF;
  bVar2 = *in_RAX;
  *in_RAX = *in_RAX + bVar3;
  *(uint *)(param_2 + param_1) =
       *(int *)(param_2 + param_1) + (int)param_2 + (uint)CARRY1(bVar2,bVar3);
  pbVar1 = in_RAX + param_1;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + (byte)param_2;
  *(uint *)in_RAX = *(int *)in_RAX + (uint)in_RAX + (uint)CARRY1(bVar2,(byte)param_2);
  uVar4 = (uint)in_RAX | 0x9e00bf0;
  *unaff_RDI = *unaff_RDI << 1 | (char)*unaff_RDI < '\0';
  *(char *)(unaff_RSI + 0x4c) = *(char *)(unaff_RSI + 0x4c) + (char)uVar4;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

