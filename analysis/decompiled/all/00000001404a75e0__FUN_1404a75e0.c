// Function: FUN_1404a75e0
// Addr: 1404a75e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a75e0(undefined1 *param_1,int *param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  byte *in_RAX;
  uint uVar4;
  byte bVar6;
  char *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte *unaff_RDI;
  bool in_ZF;
  byte *pbVar5;
  
  cVar3 = (char)((ulonglong)in_RAX >> 8);
  if (in_ZF) {
    bVar2 = *unaff_RDI;
    *unaff_RDI = *unaff_RDI + (byte)param_1;
    uVar4 = ((int)param_1 - *param_2) - (uint)CARRY1(bVar2,(byte)param_1);
    pbVar5 = (byte *)(ulonglong)uVar4;
    bVar2 = *pbVar5;
    bVar6 = (byte)(uVar4 >> 8);
    *pbVar5 = *pbVar5 + bVar6;
    uVar4 = (uVar4 - *param_2) - (uint)CARRY1(bVar2,bVar6);
    pcVar1 = (char *)(unaff_RBP + 0x4a + unaff_RSI * 2);
    *pcVar1 = *pcVar1 + (char)(uVar4 >> 8);
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1;
  *(char *)param_2 = (char)*param_2 + (char)((ulonglong)param_2 >> 8);
  if ((char)*param_2 != '\0') {
    *unaff_RBX = *unaff_RBX + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX | (byte)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

