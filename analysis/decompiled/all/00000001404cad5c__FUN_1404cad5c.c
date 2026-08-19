// Function: FUN_1404cad5c
// Addr: 1404cad5c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cad5c(char *param_1)

{
  uint in_EAX;
  undefined4 in_register_00000004;
  int unaff_ESP;
  int *unaff_RSI;
  byte in_CF;
  
  *unaff_RSI = (*unaff_RSI - unaff_ESP) - (uint)in_CF;
  *(uint *)CONCAT44(in_register_00000004,in_EAX) =
       *(uint *)CONCAT44(in_register_00000004,in_EAX) | in_EAX;
  *param_1 = *param_1 - (char)in_EAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

