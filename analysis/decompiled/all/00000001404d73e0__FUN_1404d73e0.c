// Function: FUN_1404d73e0
// Addr: 1404d73e0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d73e0(char *param_1)

{
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI + in_AL;
  if (in_AL <= *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))) {
    *param_1 = *param_1 + in_AH;
    *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
    *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

