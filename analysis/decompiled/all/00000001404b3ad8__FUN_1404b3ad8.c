// Function: FUN_1404b3ad8
// Addr: 1404b3ad8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404b3b03) overlaps instruction at (ram,0x0001404b3b02)
    */

void FUN_1404b3ad8(char *param_1,uint *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  byte bVar2;
  byte in_AL;
  byte bVar3;
  byte bVar4;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar5;
  byte bVar6;
  undefined7 uVar7;
  byte unaff_BL;
  char unaff_BH;
  byte *unaff_RSI;
  byte *unaff_RDI;
  bool bVar8;
  undefined1 auStack_8 [8];
  
  uVar7 = (undefined7)((ulonglong)param_2 >> 8);
  bVar6 = (byte)param_2;
  bVar5 = (byte)param_1;
  *unaff_RDI = *unaff_RDI + bVar5;
  bVar3 = in_AL ^ 10;
  bVar2 = *unaff_RDI;
  bVar4 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + bVar5;
  if (CARRY1(bVar2,bVar5)) {
    *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^
             10) = (*(char *)(CONCAT44(in_register_00000004,
                                       CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 10) -
                   bVar3) + -1;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar8 = false;
  if (!SCARRY1(bVar4,bVar5)) {
    *(byte *)param_2 = (byte)*param_2 | bVar3;
    *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^
             10) = *(char *)(CONCAT44(in_register_00000004,
                                      CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 10) +
                   bVar5;
    if (*(char *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))
                          ) ^ 10) != '\0') {
      pbVar1 = (byte *)((CONCAT44(in_register_00000004,
                                  CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 10) +
                       0x7001850);
      bVar4 = *pbVar1;
      *pbVar1 = *pbVar1 + in_AH;
      *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
               ^ 10) =
           (*(char *)(CONCAT44(in_register_00000004,
                               CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 10) - bVar3)
           - CARRY1(bVar4,in_AH);
      *param_4 = *param_4 + (char)auStack_8;
      *(byte *)CONCAT71(uVar7,unaff_BH) = *(byte *)CONCAT71(uVar7,unaff_BH) | bVar3;
      bVar4 = *(byte *)(CONCAT44(in_register_00000004,
                                 CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 10);
      *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
               ^ 10) =
           *(char *)(CONCAT44(in_register_00000004,
                              CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 10) + bVar5;
      *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
               ^ 10) =
           (*(char *)(CONCAT44(in_register_00000004,
                               CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 10) - bVar3)
           - CARRY1(bVar4,bVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    bVar8 = CARRY1(*unaff_RSI,bVar6);
    *unaff_RSI = *unaff_RSI + bVar6;
    register0x00000020 = (BADSPACEBASE *)auStack_8;
  }
  bVar4 = *(byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 10);
  bVar2 = *(char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 10) - bVar3;
  *(byte *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) ^ 10
           ) = bVar2 - bVar8;
  bVar4 = bVar3 + 0x3a + (bVar4 < bVar3 || bVar2 < bVar8);
  *param_4 = *param_4 + (char)register0x00000020;
  *(byte *)param_2 = (byte)*param_2 | bVar4;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)))
       + bVar5;
  if (-1 < *(char *)CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)))) {
    bVar2 = *unaff_RSI;
    *unaff_RSI = *unaff_RSI + bVar6;
    *(char **)((longlong)register0x00000020 + -8) = param_1;
    *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
         (*(char *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) - bVar4) -
         CARRY1(bVar2,bVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)param_2 = (byte)*param_2 - unaff_BH;
  *param_4 = *param_4 + (char)register0x00000020;
  *param_2 = *param_2 | CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4));
  *param_1 = *param_1 + bVar5;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
       bVar5;
  bVar2 = *unaff_RSI;
  *unaff_RSI = *unaff_RSI + unaff_BL;
  *(char **)((longlong)register0x00000020 + -8) = param_1;
  bVar3 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)));
  bVar5 = *(char *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) - bVar4;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
       bVar5 - CARRY1(bVar2,unaff_BL);
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4))) =
       (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar4)))
       - bVar4) - (bVar3 < bVar4 || bVar5 < CARRY1(bVar2,unaff_BL));
  *param_4 = *param_4 + (char)(undefined1 *)((longlong)register0x00000020 + -8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

