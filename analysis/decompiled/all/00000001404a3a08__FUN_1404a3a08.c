// Function: FUN_1404a3a08
// Addr: 1404a3a08
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3a08(char *param_1,char *param_2)

{
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BH;
  undefined1 *unaff_RDI;
  
  *param_1 = *param_1 + unaff_BH;
  *param_1 = *param_1 + 'r';
  *param_2 = *param_2 + in_AL;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  *unaff_RDI = (char)param_2;
  unaff_RDI[0x7a] = unaff_RDI[0x7a] + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

