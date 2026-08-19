// Function: FUN_1404b5c38
// Addr: 1404b5c38
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5c38(undefined8 param_1,undefined8 param_2,byte param_3,char *param_4)

{
  byte *in_RAX;
  char unaff_SPL;
  
  *param_4 = *param_4 + unaff_SPL;
  *in_RAX = *in_RAX | param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

