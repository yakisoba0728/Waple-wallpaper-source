// Function: FUN_1404bdaa4
// Addr: 1404bdaa4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdaa4(undefined8 param_1,byte param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint uVar4;
  byte *in_RAX;
  byte unaff_BH;
  char *unaff_RSI;
  int *unaff_RDI;
  char in_SF;
  char in_OF;
  
  if (in_OF == in_SF) {
    *param_4 = *param_4 + (char)in_RAX;
    *unaff_RSI = *unaff_RSI + param_2;
    *unaff_RDI = *unaff_RDI + (int)&stack0xfffffffffffffff8;
    *(char *)unaff_RDI = (char)*unaff_RDI + (char)unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar3 = *in_RAX;
  *in_RAX = *in_RAX + param_2;
  uVar4 = (int)(short)in_RAX + *(int *)(ulonglong)(uint)(int)(short)in_RAX +
          (uint)CARRY1(bVar3,param_2);
  pbVar1 = (byte *)((ulonglong)uVar4 + 0x15);
  *pbVar1 = *pbVar1 | unaff_BH;
  pcVar2 = (char *)((ulonglong)uVar4 + (longlong)&stack0xfffffffffffffff8 * 2);
  *pcVar2 = *pcVar2 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

