// Function: FUN_1404c8b70
// Addr: 1404c8b70
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c8b70(int *param_1)

{
  int in_EAX;
  byte in_CF;
  
  *param_1 = (*param_1 - in_EAX) - (uint)in_CF;
  *param_1 = *param_1 + in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

