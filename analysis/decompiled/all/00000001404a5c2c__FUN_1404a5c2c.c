// Function: FUN_1404a5c2c
// Addr: 1404a5c2c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5c2c(char *param_1,int param_2)

{
  byte *in_RAX;
  byte *pbVar1;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  char unaff_SPL;
  longlong unaff_RBP;
  
  *(uint *)(unaff_RBP + 0x5b280008) = *(uint *)(unaff_RBP + 0x5b280008) & unaff_EBX;
  *param_1 = *param_1 + unaff_SPL;
  *in_RAX = *in_RAX + (byte)in_RAX;
  in_RAX[-100] = in_RAX[-100] + (char)((ulonglong)in_RAX >> 8);
  *in_RAX = *in_RAX | (byte)in_RAX;
  pbVar1 = (byte *)((ulonglong)in_RAX | 0x9d);
  *pbVar1 = *pbVar1 | (byte)pbVar1;
  *param_1 = *param_1 + (byte)pbVar1 + 0x5b;
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)unaff_EBX;
  iRam000000014e0a6b4f = iRam000000014e0a6b4f + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

