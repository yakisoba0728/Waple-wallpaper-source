// Function: FUN_1404a5db4
// Addr: 1404a5db4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5db4(ulonglong param_1,char param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  byte *in_RAX;
  undefined8 unaff_RBX;
  byte *pbVar2;
  
  *(byte *)(param_1 - 0x46c5fff8) =
       *(byte *)(param_1 - 0x46c5fff8) & (byte)((ulonglong)unaff_RBX >> 8);
  *in_RAX = *in_RAX | (byte)in_RAX;
  uVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + *in_RAX) + 0x90000434;
  pbVar2 = (byte *)(ulonglong)uVar1;
  *pbVar2 = *pbVar2 | (byte)uVar1;
  *(char *)(param_1 & 0xffffffffffffff49) =
       *(char *)(param_1 & 0xffffffffffffff49) + (char)(uVar1 >> 8);
  *pbVar2 = *pbVar2 + (byte)uVar1;
  pbVar2[-0x64fff745] = pbVar2[-0x64fff745] + param_2;
  *param_4 = *param_4 + -8;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

