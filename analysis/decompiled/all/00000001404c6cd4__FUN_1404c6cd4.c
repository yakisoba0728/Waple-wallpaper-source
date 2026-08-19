// Function: FUN_1404c6cd4
// Addr: 1404c6cd4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404c6d53) */

void FUN_1404c6cd4(char *param_1,char param_2)

{
  char *pcVar1;
  char *in_RAX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  uRam21004bae44002ef3 = SUB84(in_RAX,0);
  *in_RAX = *in_RAX + (char)in_RAX;
  in_RAX[-0x5cffd10d] = in_RAX[-0x5cffd10d] + param_2;
  pcVar1 = (char *)(unaff_RSI + 0x4b + unaff_RBP * 4);
  *pcVar1 = *pcVar1 + (char)in_RAX;
  *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

