// Function: FUN_1404d44dc
// Addr: 1404d44dc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d44dc(char param_1,char *param_2)

{
  longlong in_RAX;
  
  *(char *)(in_RAX + 0x2ba8809e) = (char)param_2;
  *param_2 = *param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

