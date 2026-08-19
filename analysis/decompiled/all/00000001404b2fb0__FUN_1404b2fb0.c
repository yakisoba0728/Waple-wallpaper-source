// Function: FUN_1404b2fb0
// Addr: 1404b2fb0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2fb0(char *param_1)

{
  uint in_EAX;
  byte *unaff_RBX;
  char unaff_SPL;
  uint *unaff_RSI;
  
  *unaff_RBX = *unaff_RBX | (byte)param_1;
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RSI = *unaff_RSI & in_EAX;
  *param_1 = *param_1 + (char)(in_EAX >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

