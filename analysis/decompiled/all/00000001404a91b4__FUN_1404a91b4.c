// Function: FUN_1404a91b4
// Addr: 1404a91b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a91b4(char *param_1,char *param_2)

{
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_SPL;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  *param_1 = *param_1 + unaff_SPL;
  *param_2 = *param_2 + in_AL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

