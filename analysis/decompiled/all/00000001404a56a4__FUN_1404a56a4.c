// Function: FUN_1404a56a4
// Addr: 1404a56a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a56a4(char *param_1)

{
  byte bVar1;
  char cVar3;
  uint *in_RAX;
  undefined7 uVar4;
  char unaff_BL;
  undefined8 unaff_RBP;
  byte *pbVar2;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar4 = (undefined7)((ulonglong)in_RAX >> 8);
  bVar1 = (char)in_RAX + (char)*in_RAX;
  pbVar2 = (byte *)CONCAT71(uVar4,bVar1);
  cVar3 = (char)((ulonglong)in_RAX >> 8);
  param_1[(longlong)&stack0x00000000] = param_1[(longlong)&stack0x00000000] + cVar3;
  *pbVar2 = *pbVar2 | bVar1;
  pbVar2[0x21004a55] = pbVar2[0x21004a55] + cVar3;
  *pbVar2 = *pbVar2 + bVar1;
  param_1[0x1b000850] = param_1[0x1b000850] + unaff_BL;
  *pbVar2 = *pbVar2 | bVar1;
  bVar1 = bRam9000000021004a55;
  pbVar2 = (byte *)CONCAT71(uVar4,bRam9000000021004a55);
  *pbVar2 = *pbVar2 | bRam9000000021004a55;
  *pbVar2 = *pbVar2 | bVar1;
  *(undefined8 *)(((ulonglong)pbVar2 & 0xffffffff) - 8) = unaff_RBP;
  *param_1 = *param_1 + (char)(((ulonglong)pbVar2 & 0xffffffff) - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

