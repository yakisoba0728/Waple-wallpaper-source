// Function: FUN_1404ba0c8
// Addr: 1404ba0c8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba0c8(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  uint uVar6;
  undefined1 uVar7;
  byte in_AL;
  char cVar8;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_SPL;
  longlong unaff_RBP;
  char in_AF;
  int iVar3;
  int iVar4;
  uint uVar5;
  
  cVar8 = in_AL + 0x54;
  uVar2 = *(uint *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8)));
  uVar6 = *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8))
                          ) - CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8));
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8))) =
       uVar6 - (0xab < in_AL);
  uVar7 = uRame4002066b1002066;
  iVar3 = *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8))
                          );
  iVar4 = *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8))
                          );
  uVar5 = *(uint *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar8)));
  *param_4 = *param_4 + unaff_SPL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,
                                      CONCAT11((iVar3 < 0) << 7 | (iVar4 == 0) << 6 | in_AF << 4 |
                                               ((POPCOUNT(uVar5 & 0xff) & 1U) == 0) << 2 | 2U |
                                               (uVar2 < CONCAT22(in_register_00000002,
                                                                 CONCAT11(in_AH,cVar8)) ||
                                               uVar6 < (0xab < in_AL)),uVar7))) + unaff_RBP * 2);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

