// Function: FUN_14049e6f4
// Addr: 14049e6f4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e6f4(char *param_1,longlong param_2)

{
  char *pcVar1;
  byte in_AL;
  char in_AH;
  undefined6 in_register_00000002;
  byte bVar2;
  undefined6 uVar3;
  char unaff_BH;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar3 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar2 = (byte)((ulonglong)param_2 >> 8);
  param_1[0xd66000] = param_1[0xd66000] + bVar2;
  pcVar1 = (char *)(unaff_RSI + param_2 * 8);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + in_AH;
  *param_1 = *param_1 + in_AL;
  bVar2 = bVar2 | *(byte *)(unaff_RDI +
                           CONCAT62(in_register_00000002,
                                    CONCAT11(in_AH,in_AL | *(byte *)(CONCAT62(in_register_00000002,
                                                                              CONCAT11(in_AH,in_AL))
                                                                    + CONCAT62(in_register_00000002,
                                                                               CONCAT11(in_AH,in_AL)
                                                                              )))));
  *(char *)CONCAT62(uVar3,CONCAT11(bVar2,(char)param_2)) =
       *(char *)CONCAT62(uVar3,CONCAT11(bVar2,(char)param_2)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

