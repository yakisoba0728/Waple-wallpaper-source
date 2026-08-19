// Function: FUN_1404a0654
// Addr: 1404a0654
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0654(void)

{
  byte *pbVar1;
  int iVar2;
  int *in_RAX;
  longlong unaff_RSI;
  
  iVar2 = (int)in_RAX + *in_RAX;
  bRam000000014a4b06a8 = bRam000000014a4b06a8 ^ (byte)iVar2;
  pbVar1 = (byte *)((ulonglong)(iVar2 + 0x6420a00) + unaff_RSI * 2);
  *pbVar1 = *pbVar1 << 3 | *pbVar1 >> 5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

