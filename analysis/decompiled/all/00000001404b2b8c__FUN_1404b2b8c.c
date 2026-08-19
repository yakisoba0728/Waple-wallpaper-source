// Function: FUN_1404b2b8c
// Addr: 1404b2b8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2b8c(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  ulonglong in_RAX;
  char *pcVar1;
  char unaff_SPL;
  
  pcVar1 = (char *)(in_RAX ^ 0xe6);
  *param_4 = *param_4 + unaff_SPL;
  *pcVar1 = *pcVar1 + (char)pcVar1;
  pcVar1[-0x56ffe869] = pcVar1[-0x56ffe869] + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

