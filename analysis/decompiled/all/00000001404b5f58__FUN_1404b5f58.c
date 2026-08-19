// Function: FUN_1404b5f58
// Addr: 1404b5f58
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5f58(undefined8 param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  uint uVar1;
  char unaff_SPL;
  
  uVar1 = in(param_2);
  *param_4 = *param_4 + unaff_SPL;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  in(param_2);
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

