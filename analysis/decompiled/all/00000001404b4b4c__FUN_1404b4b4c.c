// Function: FUN_1404b4b4c
// Addr: 1404b4b4c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4b4c(undefined8 param_1,uint param_2)

{
  char *pcVar1;
  longlong in_RAX;
  longlong unaff_RBP;
  
  *(uint *)(&stack0x00000000 + in_RAX) = *(uint *)(&stack0x00000000 + in_RAX) & param_2;
  pcVar1 = (char *)(in_RAX + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

