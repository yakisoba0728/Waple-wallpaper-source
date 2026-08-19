// Function: FUN_1404a6500
// Addr: 1404a6500
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6500(undefined8 param_1,uint *param_2)

{
  char *pcVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  byte bVar6;
  char in_AL;
  byte bVar7;
  char in_AH;
  char cVar8;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte *pbVar9;
  byte bVar10;
  char cVar11;
  undefined6 uVar12;
  bool bVar13;
  char in_AF;
  
  uVar12 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar11 = (char)((ulonglong)param_2 >> 8);
  bVar10 = (byte)param_2;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  uVar4 = *param_2;
  pbVar9 = (byte *)(ulonglong)uVar4;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar7 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  cVar8 = in_AH + cVar11;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar8,bVar7))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar8,bVar7)))
       | CONCAT22(in_register_00000002,CONCAT11(cVar8,bVar7));
  bVar6 = (*(int *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar8,bVar7))) < 0) << 7 |
          (*(int *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(cVar8,bVar7))) == 0) << 6 |
          in_AF << 4 |
          ((POPCOUNT(*(uint *)CONCAT44(in_register_00000004,
                                       CONCAT22(in_register_00000002,CONCAT11(cVar8,bVar7))) & 0xff)
           & 1U) == 0) << 2;
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar6,bVar7))) |
           0x200) =
       *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar6,bVar7)))
                | 0x200) | CONCAT22(in_register_00000002,CONCAT11(bVar6,bVar7)) | 0x200;
  *pbVar9 = *pbVar9 + (bVar6 | 2);
  *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar6,bVar7))) |
           0x200) =
       *(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar6,bVar7)))
                | 0x200) + bVar7;
  pcVar1 = (char *)((CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(bVar6,bVar7))) | 0x200) -
                   0x60fff6ca);
  *pcVar1 = *pcVar1 + bVar10;
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar6,bVar7))) |
           0x200) =
       *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar6,bVar7)))
                | 0x200) | CONCAT22(in_register_00000002,CONCAT11(bVar6,bVar7)) | 0x200;
  bVar2 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar7;
  cVar3 = *(char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(bVar6,bVar7))) | 0x200);
  bVar13 = CARRY1((byte)*param_2,bVar10);
  *(byte *)param_2 = (byte)*param_2 + bVar10;
  bVar5 = bVar7 + *(char *)(CONCAT44(in_register_00000004,
                                     CONCAT22(in_register_00000002,CONCAT11(bVar6,bVar7))) | 0x200);
  cVar11 = cVar11 + *(byte *)((CONCAT44(in_register_00000004,
                                        CONCAT22(in_register_00000002,CONCAT11(bVar6,bVar5 + bVar13)
                                                )) | 0x200) + (longlong)param_2) +
           (CARRY1(bVar7,*(byte *)(CONCAT44(in_register_00000004,
                                            CONCAT22(in_register_00000002,CONCAT11(bVar6,bVar7))) |
                                  0x200)) || CARRY1(bVar5,bVar13));
  cVar8 = *(char *)CONCAT62(uVar12,CONCAT11(cVar11,bVar10));
  *(byte *)CONCAT62(uVar12,CONCAT11(cVar11,bVar10)) =
       *(char *)CONCAT62(uVar12,CONCAT11(cVar11,bVar10)) + bVar10;
  if (CONCAT31((int3)(uVar4 >> 8),(char)uVar4 + cVar3 + CARRY1(bVar2,bVar7)) != 1 &&
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

