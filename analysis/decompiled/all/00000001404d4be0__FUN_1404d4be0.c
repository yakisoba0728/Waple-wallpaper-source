// Function: FUN_1404d4be0
// Addr: 1404d4be0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4be0(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  undefined1 extraout_AL;
  char extraout_AL_00;
  undefined1 extraout_AH;
  char extraout_AH_00;
  undefined6 extraout_var;
  undefined6 extraout_var_00;
  undefined1 uVar2;
  char cVar3;
  undefined6 uVar4;
  byte unaff_BH;
  longlong unaff_RBP;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  longlong in_R10;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar3 = (char)((ulonglong)param_2 >> 8);
  uVar2 = (undefined1)param_2;
  *unaff_RDI = *unaff_RSI;
  func_0x0001406e4c33();
  pcVar1 = (char *)(CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) +
                   CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)));
  *pcVar1 = *pcVar1 + cVar3;
  pcVar1 = (char *)(CONCAT62(uVar4,CONCAT11(cVar3,uVar2)) +
                   CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)));
  *pcVar1 = *pcVar1 + cVar3;
  *(char *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) =
       *(char *)CONCAT62(extraout_var,CONCAT11(extraout_AH,extraout_AL)) + cVar3;
  unaff_RDI[1] = unaff_RSI[1];
  func_0x0001406e4c4b();
  *(char *)CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)) =
       *(char *)CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)) + extraout_AL_00;
  *(byte *)CONCAT62(uVar4,CONCAT11(cVar3,uVar2)) =
       *(byte *)CONCAT62(uVar4,CONCAT11(cVar3,uVar2)) ^ unaff_BH;
  unaff_RDI[in_R10 + 0x43] = unaff_RDI[in_R10 + 0x43] + extraout_AL_00;
  pcVar1 = (char *)(CONCAT62(extraout_var_00,CONCAT11(extraout_AH_00,extraout_AL_00)) + 0x6010049 +
                   unaff_RBP * 8);
  *pcVar1 = *pcVar1 + extraout_AH_00;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

