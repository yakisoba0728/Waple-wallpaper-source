// Function: FUN_1404b38ac
// Addr: 1404b38ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b38ac(undefined8 param_1,byte *param_2)

{
  byte in_AH;
  
  *param_2 = *param_2 | in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

