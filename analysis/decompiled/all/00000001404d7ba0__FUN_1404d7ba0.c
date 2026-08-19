// Function: FUN_1404d7ba0
// Addr: 1404d7ba0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7ba0(char *param_1,undefined8 param_2)

{
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  char in_CF;
  bool in_PF;
  
  *unaff_RDI = *unaff_RSI;
  if (!in_PF) {
    *param_1 = *param_1 + in_AH;
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
    *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) +
         (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBX + 0x37) = *(char *)(unaff_RBX + 0x37) + in_AL + in_CF;
  *(char *)(unaff_RBX + 0x43) = *(char *)(unaff_RBX + 0x43) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

