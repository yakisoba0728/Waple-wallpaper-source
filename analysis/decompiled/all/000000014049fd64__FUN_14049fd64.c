// Function: FUN_14049fd64
// Addr: 14049fd64
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fd64(undefined8 param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  
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

