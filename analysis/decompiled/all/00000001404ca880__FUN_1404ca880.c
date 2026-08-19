// Function: FUN_1404ca880
// Addr: 1404ca880
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca880(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  char in_AL;
  char *unaff_RBX;
  
  *param_4 = *param_4 + in_AL;
  *unaff_RBX = *unaff_RBX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

