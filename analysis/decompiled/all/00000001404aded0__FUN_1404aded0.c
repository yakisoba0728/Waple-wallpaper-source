// Function: FUN_1404aded0
// Addr: 1404aded0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aded0(undefined8 param_1,int *param_2)

{
  byte in_CF;
  
  *param_2 = *param_2 + (uint)in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

