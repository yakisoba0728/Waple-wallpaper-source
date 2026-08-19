// Function: FUN_14049fd3c
// Addr: 14049fd3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fd3c(char *param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  undefined7 unaff_00000021;
  char *unaff_RSI;
  longlong unaff_RDI;
  
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + in_AL;
  *unaff_RSI = *unaff_RSI + in_AL;
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + 0x49 + (unaff_RDI + 1) * 8);
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  unaff_RSI[0x6000300] = unaff_RSI[0x6000300] + (char)((ulonglong)param_1 >> 8);
  *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  pcVar1 = (char *)(CONCAT71(unaff_00000021,unaff_SPL) + 0x49 + (unaff_RDI + 1) * 8);
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  unaff_RSI[-0x51fffd00] = unaff_RSI[-0x51fffd00] + in_AH;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + in_AL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + unaff_BH;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x59fffd00);
  *pcVar1 = *pcVar1 + in_AH;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + in_AL;
  out(param_2,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL * '\x02')));
  *param_4 = *param_4 + in_AL * '\x02';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

