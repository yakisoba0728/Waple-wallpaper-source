// Function: FUN_14049e800
// Addr: 14049e800
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049e832) overlaps instruction at (ram,0x00014049e831)
    */

void FUN_14049e800(char param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  byte extraout_AL;
  byte extraout_AL_00;
  byte extraout_AL_01;
  char extraout_AL_02;
  char extraout_AL_03;
  undefined1 extraout_AH;
  undefined1 extraout_AH_00;
  undefined1 extraout_AH_01;
  undefined1 extraout_AH_02;
  undefined1 extraout_AH_03;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined6 extraout_var_01;
  undefined6 extraout_var_02;
  undefined6 extraout_var_03;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined6 uVar4;
  longlong unaff_RSI;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  uVar3 = (undefined1)((ulonglong)param_2 >> 8);
  uVar2 = (undefined1)param_2;
  while( true ) {
    func_0x00012948e806();
    *(byte *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) =
         *(char *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) + extraout_AL;
    *param_4 = *param_4;
    *(byte *)CONCAT62(uVar4,CONCAT11(uVar3,uVar2)) =
         *(byte *)CONCAT62(uVar4,CONCAT11(uVar3,uVar2)) | extraout_AL;
    *(char *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) =
         *(char *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) + param_1;
    in(0x11);
    func_0x00012974e81a();
    *(byte *)CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)) =
         *(char *)CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)) + extraout_AL_00
    ;
    *param_4 = *param_4;
    *(byte *)(CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)) & 0xffffffffffffffe7
             ) = *(char *)(CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)) &
                          0xffffffffffffffe7) + (extraout_AL_00 & 0xe7);
    func_0x00012974e82a();
    *(byte *)CONCAT62(extraout_var_01,CONCAT11(extraout_AH_01,extraout_AL_01)) =
         *(char *)CONCAT62(extraout_var_01,CONCAT11(extraout_AH_01,extraout_AL_01)) + extraout_AL_01
    ;
    *param_4 = *param_4;
    *(byte *)(CONCAT62(extraout_var_01,CONCAT11(extraout_AH_01,extraout_AL_01)) & 0xffffffffffffffe7
             ) = *(char *)(CONCAT62(extraout_var_01,CONCAT11(extraout_AH_01,extraout_AL_01)) &
                          0xffffffffffffffe7) + (extraout_AL_01 & 0xe7);
    func_0x00012948e83a();
    *(char *)CONCAT62(extraout_var_02,CONCAT11(extraout_AH_02,extraout_AL_02)) =
         *(char *)CONCAT62(extraout_var_02,CONCAT11(extraout_AH_02,extraout_AL_02)) + extraout_AL_02
    ;
    *param_4 = *param_4;
    *(char *)CONCAT62(extraout_var_02,CONCAT11(extraout_AH_02,extraout_AL_02)) =
         *(char *)CONCAT62(extraout_var_02,CONCAT11(extraout_AH_02,extraout_AL_02)) + extraout_AL_02
    ;
    func_0x00012941e84a();
    cVar1 = *(char *)CONCAT62(extraout_var_03,CONCAT11(extraout_AH_03,extraout_AL_03));
    *(char *)CONCAT62(extraout_var_03,CONCAT11(extraout_AH_03,extraout_AL_03)) =
         *(char *)CONCAT62(extraout_var_03,CONCAT11(extraout_AH_03,extraout_AL_03)) + extraout_AL_03
    ;
    if (!SCARRY1(cVar1,extraout_AL_03)) break;
    *(char *)CONCAT62(extraout_var_03,CONCAT11(extraout_AH_03,extraout_AL_03)) =
         *(char *)CONCAT62(extraout_var_03,CONCAT11(extraout_AH_03,extraout_AL_03)) + extraout_AL_03
    ;
  }
  *param_4 = *param_4;
  (&stack0x00000000)[unaff_RSI] = (&stack0x00000000)[unaff_RSI] + extraout_AL_03 + '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

