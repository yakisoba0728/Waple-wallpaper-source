// Function: FUN_1404a64d8
// Addr: 1404a64d8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a64d8(byte *param_1,uint *param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar4;
  uint uVar5;
  byte in_AL;
  byte bVar6;
  byte bVar7;
  char cVar8;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte *pbVar9;
  byte bVar10;
  char cVar11;
  undefined6 uVar12;
  longlong unaff_RSI;
  byte in_CF;
  bool bVar13;
  char in_PF;
  char in_AF;
  char in_ZF;
  char in_SF;
  byte bVar3;
  
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar11 = (char)((ulonglong)param_2 >> 8);
  bVar10 = (byte)param_2;
  bVar6 = in_SF << 7 | in_ZF << 6 | in_AF << 4 | in_PF << 2 | 2U | in_CF;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar6,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar6,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(bVar6,in_AL));
  bVar7 = *param_1;
  *param_1 = *param_1 + bVar6;
  pbVar9 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(bVar6,in_AL))) +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(bVar6,in_AL))));
  bVar2 = *pbVar9;
  bVar3 = *pbVar9;
  *pbVar9 = bVar3 + in_AL + CARRY1(bVar7,bVar6);
  pbVar9 = (byte *)((longlong)param_2 + unaff_RSI * 2);
  *pbVar9 = *pbVar9 + cVar11 + (CARRY1(bVar2,in_AL) || CARRY1(bVar3 + in_AL,CARRY1(bVar7,bVar6)));
  param_1 = param_1 + unaff_RSI * 2;
  *param_1 = *param_1 | bVar6;
  bVar2 = ((char)*param_1 < '\0') << 7 | (*param_1 == 0) << 6 | in_AF << 4 |
          ((POPCOUNT(*param_1) & 1U) == 0) << 2;
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) |
           0x200) =
       *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)))
                | 0x200) | CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)) | 0x200;
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) |
           0x200) =
       *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)))
                | 0x200) | CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)) | 0x200;
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) |
           0x200) =
       *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)))
                | 0x200) & (CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)) | 0x200);
  bVar7 = *(byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) | 0x200);
  *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) |
           0x200) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL)))
                | 0x200) + in_AL;
  bVar7 = (*(char *)(CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) | 0x200) < '\0')
          << 7 | (*(char *)(CONCAT44(in_register_00000004,
                                     CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) | 0x200)
                 == '\0') << 6 | in_AF << 4 |
          ((POPCOUNT(*(undefined1 *)
                      (CONCAT44(in_register_00000004,
                                CONCAT22(in_register_00000002,CONCAT11(bVar2,in_AL))) | 0x200)) & 1U
           ) == 0) << 2 | 2U | CARRY1(bVar7,in_AL);
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar7,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar7,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(bVar7,in_AL));
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar7,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar7,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(bVar7,in_AL));
  uVar5 = *param_2;
  pbVar9 = (byte *)(ulonglong)uVar5;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar7,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar7,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(bVar7,in_AL));
  bVar6 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(bVar7,in_AL)));
  cVar8 = bVar7 + cVar11;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar8,bVar6))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar8,bVar6)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar8,bVar6));
  bVar3 = (*(int *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar8,bVar6))) < 0) << 7 |
          (*(int *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar8,bVar6))) == 0) << 6 |
          in_AF << 4 |
          ((POPCOUNT(*(uint *)CONCAT44(in_register_00000004,
                                       CONCAT22(in_register_00000002,CONCAT11(cVar8,bVar6))) & 0xff)
           & 1U) == 0) << 2;
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,bVar6))) |
           0x200) =
       *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,bVar6)))
                | 0x200) | CONCAT22(in_register_00000002,CONCAT11(bVar3,bVar6)) | 0x200;
  *pbVar9 = *pbVar9 + (bVar3 | 2);
  *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,bVar6))) |
           0x200) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,bVar6)))
                | 0x200) + bVar6;
  pcVar1 = (char *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(bVar3,bVar6))) | 0x200) -
                   0x60fff6ca);
  *pcVar1 = *pcVar1 + bVar10;
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,bVar6))) |
           0x200) =
       *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar3,bVar6)))
                | 0x200) | CONCAT22(in_register_00000002,CONCAT11(bVar3,bVar6)) | 0x200;
  bVar7 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar6;
  cVar4 = *(char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(bVar3,bVar6))) | 0x200);
  bVar13 = CARRY1((byte)*param_2,bVar10);
  *(byte *)param_2 = (byte)*param_2 + bVar10;
  bVar2 = bVar6 + *(char *)(CONCAT44(in_register_00000004,
                                     CONCAT22(in_register_00000002,CONCAT11(bVar3,bVar6))) | 0x200);
  cVar11 = cVar11 + *(byte *)((CONCAT44(in_register_00000004,
                                        CONCAT22(in_register_00000002,CONCAT11(bVar3,bVar2 + bVar13)
                                                )) | 0x200) + (longlong)param_2) +
           (CARRY1(bVar6,*(byte *)(CONCAT44(in_register_00000004,
                                            CONCAT22(in_register_00000002,CONCAT11(bVar3,bVar6))) |
                                  0x200)) || CARRY1(bVar2,bVar13));
  cVar8 = *(char *)CONCAT62(uVar12,CONCAT11(cVar11,bVar10));
  *(byte *)CONCAT62(uVar12,CONCAT11(cVar11,bVar10)) =
       *(char *)CONCAT62(uVar12,CONCAT11(cVar11,bVar10)) + bVar10;
  if (CONCAT31((int3)(uVar5 >> 8),(char)uVar5 + cVar4 + CARRY1(bVar7,bVar6)) != 1 &&
      *(char *)CONCAT62(uVar12,CONCAT11(cVar11,bVar10)) != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (SCARRY1(cVar8,bVar10)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

