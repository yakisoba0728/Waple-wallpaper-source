// Function: FUN_1404a5dc4
// Addr: 1404a5dc4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5dc4(ulonglong param_1,char param_2,undefined8 param_3,char *param_4)

{
  int in_EAX;
  uint uVar1;
  char unaff_SPL;
  byte *pbVar2;
  
  uVar1 = in_EAX + 0x90000434;
  pbVar2 = (byte *)(ulonglong)uVar1;
  *pbVar2 = *pbVar2 | (byte)uVar1;
  *(char *)(param_1 & 0xffffffffffffff49) =
       *(char *)(param_1 & 0xffffffffffffff49) + (char)(uVar1 >> 8);
  *pbVar2 = *pbVar2 + (byte)uVar1;
  pbVar2[-0x64fff745] = pbVar2[-0x64fff745] + param_2;
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

