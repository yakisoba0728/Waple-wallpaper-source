// Function: FUN_1404a56c4
// Addr: 1404a56c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a56c4(char *param_1)

{
  byte bVar1;
  undefined8 in_RAX;
  byte *pbVar2;
  undefined8 unaff_RBP;
  
  bVar1 = bRam9000000021004a55;
  pbVar2 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bRam9000000021004a55);
  *pbVar2 = *pbVar2 | bRam9000000021004a55;
  *pbVar2 = *pbVar2 | bVar1;
  *(undefined8 *)(((ulonglong)pbVar2 & 0xffffffff) - 8) = unaff_RBP;
  *param_1 = *param_1 + (char)(((ulonglong)pbVar2 & 0xffffffff) - 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

