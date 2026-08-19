// Function: FUN_1404ca1a4
// Addr: 1404ca1a4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca1a4(int param_1,char *param_2,char param_3)

{
  undefined1 in_AL;
  byte bVar1;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  uint uVar2;
  char *pcVar3;
  uint *unaff_RSI;
  char unaff_R12B;
  
  uVar2 = param_1 - CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + unaff_R12B;
  *param_2 = *param_2 + -0x60;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0xa0))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0xa0))) +
       -0x60;
  bVar1 = in(0xc);
  pcVar3 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1))) + -0x41);
  *pcVar3 = *pcVar3 + in_AH;
  uVar2 = uVar2 - CONCAT22(in_register_00000002,
                           CONCAT11(in_AH,bVar1 ^ *(byte *)CONCAT44(in_register_00000004,
                                                                    CONCAT22(in_register_00000002,
                                                                             CONCAT11(in_AH,bVar1)))
                                   ));
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + unaff_R12B;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0xa0))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,0xa0))) +
       -0x60;
  pcVar3 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,0xa0))) + -0x41);
  *pcVar3 = *pcVar3 + in_AH;
  uVar2 = uVar2 - (CONCAT22(in_register_00000002,
                            CONCAT11(in_AH,*(undefined1 *)
                                            CONCAT44(in_register_00000004,
                                                     CONCAT22(in_register_00000002,
                                                              CONCAT11(in_AH,0xa0))))) ^ 0xa0);
  pcVar3 = (char *)(ulonglong)uVar2;
  *pcVar3 = *pcVar3 + param_3;
  *unaff_RSI = *unaff_RSI | CONCAT22(in_register_00000002,CONCAT11(in_AH,0xa0));
  *pcVar3 = *pcVar3 + (char)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

