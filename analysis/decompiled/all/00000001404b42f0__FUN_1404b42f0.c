// Function: FUN_1404b42f0
// Addr: 1404b42f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b42f0(undefined8 param_1,char *param_2)

{
  char in_AH;
  
  *param_2 = *param_2 + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

