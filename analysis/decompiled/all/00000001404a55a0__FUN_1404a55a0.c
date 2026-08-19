// Function: FUN_1404a55a0
// Addr: 1404a55a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a55a0(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  ulonglong in_RAX;
  byte *pbVar1;
  char unaff_SPL;
  
  *(undefined4 *)(in_RAX + param_1) = *(undefined4 *)(in_RAX + param_1);
  pbVar1 = (byte *)(in_RAX ^ 0xe6);
  *param_4 = *param_4 + unaff_SPL;
  *pbVar1 = *pbVar1 + (byte)pbVar1;
  pbVar1[0x2c] = pbVar1[0x2c] + (char)(in_RAX >> 8);
  *pbVar1 = *pbVar1 | (byte)pbVar1;
  *(undefined4 *)(pbVar1 + param_1) = *(undefined4 *)(pbVar1 + param_1);
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

