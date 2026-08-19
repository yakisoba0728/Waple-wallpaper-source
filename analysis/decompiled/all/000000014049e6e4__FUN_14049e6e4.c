// Function: FUN_14049e6e4
// Addr: 14049e6e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049e6e4(char *param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  byte in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar3;
  undefined6 uVar4;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  uVar4 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar3 = (byte)((ulonglong)param_2 >> 8);
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | in_AL;
  cVar2 = in_AH * '\x02';
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar2,in_AL)))
       | in_AL;
  param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] =
       param_1[CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL))] + bVar3;
  (&stack0x00000000)[(longlong)param_1] = (&stack0x00000000)[(longlong)param_1] + cVar2;
  param_1[0xd66000] = param_1[0xd66000] + bVar3;
  pcVar1 = (char *)(unaff_RSI + param_2 * 8);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(char *)(unaff_RBP + 0x49) = *(char *)(unaff_RBP + 0x49) + cVar2;
  *param_1 = *param_1 + in_AL;
  bVar3 = bVar3 | *(byte *)(unaff_RDI +
                           CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,
                                             CONCAT11(cVar2,in_AL | *(byte *)(CONCAT44(
                                                  in_register_00000004,
                                                  CONCAT22(in_register_00000002,
                                                           CONCAT11(cVar2,in_AL))) +
                                                  CONCAT44(in_register_00000004,
                                                           CONCAT22(in_register_00000002,
                                                                    CONCAT11(cVar2,in_AL))))))));
  *(char *)CONCAT62(uVar4,CONCAT11(bVar3,(char)param_2)) =
       *(char *)CONCAT62(uVar4,CONCAT11(bVar3,(char)param_2)) + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

