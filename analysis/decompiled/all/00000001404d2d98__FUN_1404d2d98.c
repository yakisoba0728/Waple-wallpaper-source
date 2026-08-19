// Function: FUN_1404d2d98
// Addr: 1404d2d98
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d2d98(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  char *unaff_RBX;
  
  *param_4 = *param_4 + '\x13';
  *unaff_RBX = *unaff_RBX + param_2;
  *unaff_RBX = *unaff_RBX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

