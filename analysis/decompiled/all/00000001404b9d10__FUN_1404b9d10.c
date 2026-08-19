// Function: FUN_1404b9d10
// Addr: 1404b9d10
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9d10(undefined8 param_1,undefined8 param_2,char *param_3)

{
  char *pcVar1;
  longlong in_RAX;
  char unaff_BH;
  longlong unaff_RBP;
  char in_R10B;
  
  *(char *)(in_RAX + 0x24) = *(char *)(in_RAX + 0x24) - unaff_BH;
  pcVar1 = (char *)(in_RAX + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)in_RAX >> 8);
  *param_3 = *param_3 + in_R10B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

