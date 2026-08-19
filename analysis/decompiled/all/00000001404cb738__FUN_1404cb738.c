// Function: FUN_1404cb738
// Addr: 1404cb738
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cb738(undefined8 param_1,char *param_2,undefined8 param_3,char *param_4)

{
  char unaff_BL;
  
  *param_4 = *param_4 + unaff_BL;
  *param_2 = *param_2 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

