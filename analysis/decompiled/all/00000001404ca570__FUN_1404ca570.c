// Function: FUN_1404ca570
// Addr: 1404ca570
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca570(char *param_1)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_R12B;
  bool in_SF;
  
  if (!in_SF) {
    *param_1 = *param_1 + unaff_R12B;
    *(char *)CONCAT71(in_register_00000001,in_AL) =
         *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
    pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x10);
    *pcVar1 = *pcVar1 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

