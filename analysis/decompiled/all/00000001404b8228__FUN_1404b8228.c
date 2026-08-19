// Function: FUN_1404b8228
// Addr: 1404b8228
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b8228(uint *param_1,char *param_2)

{
  uint in_EAX;
  
  *param_1 = *param_1 & in_EAX;
  *param_2 = *param_2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

