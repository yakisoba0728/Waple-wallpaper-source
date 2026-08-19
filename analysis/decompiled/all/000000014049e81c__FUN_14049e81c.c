// Function: FUN_14049e81c
// Addr: 14049e81c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049e832) overlaps instruction at (ram,0x00014049e831)
    */

void FUN_14049e81c(void)

{
  char cVar1;
  byte in_AL;
  byte extraout_AL;
  char extraout_AL_00;
  byte extraout_AL_01;
  undefined1 in_AH;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 extraout_AH_01;
  undefined6 in_register_00000002;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined6 extraout_var_01;
  longlong unaff_RSI;
  undefined1 *in_R9;
  
  while( true ) {
    *in_R9 = *in_R9;
    *(byte *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & 0xffffffffffffffe7) =
         *(char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & 0xffffffffffffffe7) +
         (in_AL & 0xe7);
    func_0x00012974e82a();
    *(byte *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) =
         *(char *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) + extraout_AL;
    *in_R9 = *in_R9;
    *(byte *)(CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) & 0xffffffffffffffe7) =
         *(char *)(CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) & 0xffffffffffffffe7) +
         (extraout_AL & 0xe7);
    func_0x00012948e83a();
    *(char *)CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)) =
         *(char *)CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)) + extraout_AL_00
    ;
    *in_R9 = *in_R9;
    *(char *)CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)) =
         *(char *)CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)) + extraout_AL_00
    ;
    func_0x00012941e84a();
    cVar1 = *(char *)CONCAT62(extraout_var_01,CONCAT11(extraout_AH_01,extraout_AL_01));
    *(byte *)CONCAT62(extraout_var_01,CONCAT11(extraout_AH_01,extraout_AL_01)) =
         *(char *)CONCAT62(extraout_var_01,CONCAT11(extraout_AH_01,extraout_AL_01)) + extraout_AL_01
    ;
    if (!SCARRY1(cVar1,extraout_AL_01)) break;
    *(byte *)CONCAT62(extraout_var_01,CONCAT11(extraout_AH_01,extraout_AL_01)) =
         *(char *)CONCAT62(extraout_var_01,CONCAT11(extraout_AH_01,extraout_AL_01)) + extraout_AL_01
    ;
    in_AL = extraout_AL_01;
    in_AH = extraout_AH_01;
    in_register_00000002 = extraout_var_01;
  }
  *in_R9 = *in_R9;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + extraout_AL_01 + 2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

