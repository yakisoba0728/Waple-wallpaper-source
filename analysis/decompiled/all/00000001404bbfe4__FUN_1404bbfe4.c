// Function: FUN_1404bbfe4
// Addr: 1404bbfe4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bbfe4(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char acStackX_8 [8];
  undefined1 auStackX_10 [24];
  
  *(char *)(param_1 + 0x22) = *(char *)(param_1 + 0x22) + unaff_BL;
  pcVar1 = (char *)(param_1 + 0x22 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 2);
  *pcVar1 = *pcVar1 + in_AL;
  acStackX_8[CONCAT62(in_register_00000002,CONCAT11(in_AH + unaff_BH,in_AL)) * 8] =
       acStackX_8[CONCAT62(in_register_00000002,CONCAT11(in_AH + unaff_BH,in_AL)) * 8] + in_AL;
  pcVar1 = (char *)(param_1 + 0x22 + CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) * 2);
  *pcVar1 = *pcVar1 + in_AL;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH + unaff_BH,in_AL)) + 0x59);
  *pcVar1 = *pcVar1 + (char)param_1;
  *param_4 = *param_4 + (char)auStackX_10;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

