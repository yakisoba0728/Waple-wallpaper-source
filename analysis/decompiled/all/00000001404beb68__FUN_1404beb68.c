// Function: FUN_1404beb68
// Addr: 1404beb68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404beb68(char *param_1,undefined2 param_2,undefined8 param_3,byte *param_4)

{
  char *pcVar1;
  byte bVar2;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  undefined4 *unaff_RSI;
  
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x3affd991);
  *pcVar1 = *pcVar1 + in_AH;
  out(*unaff_RSI,param_2);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x16);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  bVar2 = *param_4;
  *param_4 = *param_4 - 8;
  unaff_RSI[1] = (unaff_RSI[1] - CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) -
                 (uint)(7 < bVar2);
  *param_1 = *param_1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

