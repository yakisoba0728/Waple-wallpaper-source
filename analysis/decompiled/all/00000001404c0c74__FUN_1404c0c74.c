// Function: FUN_1404c0c74
// Addr: 1404c0c74
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c0c74(char *param_1)

{
  char in_AL;
  undefined7 in_register_00000001;
  undefined1 *unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char unaff_R12B;
  
  *unaff_RDI = *unaff_RSI;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) - in_AL;
  *unaff_RBX = (char)param_1;
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

