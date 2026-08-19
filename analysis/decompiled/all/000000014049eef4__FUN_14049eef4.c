// Function: FUN_14049eef4
// Addr: 14049eef4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049eef4(char *param_1,int param_2,undefined8 param_3,byte *param_4)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint *in_RAX;
  char *pcVar4;
  char unaff_BL;
  longlong unaff_RBP;
  int *unaff_RSI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
  *(char *)(unaff_RBP + -0x1ffffec4) =
       *(char *)(unaff_RBP + -0x1ffffec4) + (char)((ulonglong)in_RAX >> 8);
  uVar3 = in((short)param_2);
  bVar2 = *param_4;
  *param_4 = *param_4 + (byte)uVar3;
  *param_1 = (*param_1 - (char)param_1) - CARRY1(bVar2,(byte)uVar3);
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + unaff_BL;
  pcVar4 = (char *)((ulonglong)uVar3 ^ 0x1e);
  *pcVar4 = *pcVar4 + unaff_BL;
  *unaff_RSI = *unaff_RSI + param_2;
  pcVar4[(longlong)unaff_RSI * 8] = pcVar4[(longlong)unaff_RSI * 8] + (char)param_1;
  pbVar1 = (byte *)((ulonglong)
                    CONCAT22((short)(uVar3 >> 0x10),
                             CONCAT11((byte)(uVar3 >> 8) | (byte)pcVar4,(byte)pcVar4)) + 7);
  *pbVar1 = *pbVar1 | (byte)((uint)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

