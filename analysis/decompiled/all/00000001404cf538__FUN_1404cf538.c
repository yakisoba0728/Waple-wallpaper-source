// Function: FUN_1404cf538
// Addr: 1404cf538
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf538(char *param_1,undefined8 param_2,char param_3)

{
  char *in_RAX;
  char unaff_BL;
  bool in_ZF;
  char in_SF;
  char in_OF;
  
  if (!in_ZF && in_OF == in_SF) {
    *in_RAX = *in_RAX + unaff_BL;
    *param_1 = *param_1 + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

