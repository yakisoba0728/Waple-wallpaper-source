// Function: FUN_1404be97c
// Addr: 1404be97c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404be97c(char *param_1,undefined2 param_2)

{
  char *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  undefined4 *unaff_RSI;
  
  out(param_2,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  uVar2 = *unaff_RSI;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 0x53);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + (char)uVar2;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x10ffd9ff);
  *pcVar1 = *pcVar1 + (char)param_2;
  uVar3 = *unaff_RSI;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + 0x53);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + (char)uVar2 + (char)uVar3;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *pcVar1 = *pcVar1 - (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

