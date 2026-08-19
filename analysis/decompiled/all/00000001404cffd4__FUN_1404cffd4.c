// Function: FUN_1404cffd4
// Addr: 1404cffd4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cffd4(undefined8 param_1,char param_2)

{
  int *piVar1;
  byte bVar2;
  int *in_RAX;
  byte *pbVar3;
  byte bVar4;
  byte *unaff_RSI;
  char *pcVar5;
  char unaff_R13B;
  
  bVar4 = (byte)((ulonglong)param_1 >> 8);
  *unaff_RSI = *unaff_RSI >> ((byte)param_1 & 0x1f);
  *(char *)in_RAX = (char)*in_RAX + param_2;
  piVar1 = (int *)((longlong)in_RAX * 2 + -0x26);
  *piVar1 = *piVar1 + -1;
  pbVar3 = (byte *)(ulonglong)(uint)((int)in_RAX + *in_RAX);
  bVar2 = *pbVar3;
  *pbVar3 = *pbVar3 + bVar4;
  pcVar5 = (char *)(ulonglong)-(uint)CARRY1(bVar2,bVar4);
  *pcVar5 = *pcVar5 + unaff_R13B;
  piVar1 = (int *)((longlong)pbVar3 * 2 + 0xc);
  *piVar1 = *piVar1 + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

