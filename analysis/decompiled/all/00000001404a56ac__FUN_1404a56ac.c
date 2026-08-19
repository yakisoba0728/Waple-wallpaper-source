// Function: FUN_1404a56ac
// Addr: 1404a56ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a56ac(char *param_1)

{
  byte bVar1;
  byte *in_RAX;
  byte *pbVar2;
  char unaff_BL;
  undefined8 unaff_RBP;
  
  bVar1 = (byte)in_RAX;
  *in_RAX = *in_RAX | bVar1;
  in_RAX[0x21004a55] = in_RAX[0x21004a55] + (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX + bVar1;
  param_1[0x1b000850] = param_1[0x1b000850] + unaff_BL;
  *in_RAX = *in_RAX | bVar1;
  bVar1 = bRam9000000021004a55;
  pbVar2 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bRam9000000021004a55);
  *pbVar2 = *pbVar2 | bRam9000000021004a55;
  *pbVar2 = *pbVar2 | bVar1;
  *(undefined8 *)(((ulonglong)pbVar2 & 0xffffffff) - 8) = unaff_RBP;
  *param_1 = *param_1 + (char)(((ulonglong)pbVar2 & 0xffffffff) - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

