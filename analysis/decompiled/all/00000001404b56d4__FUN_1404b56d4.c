// Function: FUN_1404b56d4
// Addr: 1404b56d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b56d4(undefined8 param_1,longlong param_2)

{
  uint unaff_EBP;
  
  *(uint *)(param_2 + 0x16) = *(uint *)(param_2 + 0x16) & unaff_EBP;
  *(char *)(param_2 + -8) = *(char *)(param_2 + -8) + (char)((ulonglong)param_1 >> 8);
  func_0x000118a056e5();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

