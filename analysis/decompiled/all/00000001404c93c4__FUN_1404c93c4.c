// Function: FUN_1404c93c4
// Addr: 1404c93c4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c93c4(char *param_1,ulonglong param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  longlong unaff_RBX;
  char unaff_SPL;
  char unaff_R12B;
  
  *(char *)(unaff_RBX + -0x43feffcf) = *(char *)(unaff_RBX + -0x43feffcf) >> 0x11;
  pcVar1 = (char *)(param_2 & 0xffffffff);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  pcVar1[-0x3fffce45] = pcVar1[-0x3fffce45] + (char)((ulonglong)pcVar1 >> 8);
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

