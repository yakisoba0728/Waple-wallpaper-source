// Function: FUN_14049f458
// Addr: 14049f458
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049f45c) overlaps instruction at (ram,0x00014049f45b)
    */

void FUN_14049f458(char *param_1,char *param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  longlong unaff_RSI;
  undefined4 *unaff_RDI;
  bool in_SF;
  
  *unaff_RDI = CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  if (!in_SF) {
    pcVar1 = (char *)(unaff_RBX + 0x49 + unaff_RSI * 8);
    *pcVar1 = *pcVar1 + in_AL;
    *param_1 = *param_1 + in_AH;
    *param_2 = *param_2 + in_AL;
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

