// Function: FUN_1404cad88
// Addr: 1404cad88
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cad88(char *param_1,char param_2,char param_3)

{
  char *unaff_RBX;
  undefined1 *unaff_RSI;
  
  uRamc009d00be00df00f = *unaff_RSI;
  *param_1 = *param_1 + param_3;
  *unaff_RBX = *unaff_RBX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

