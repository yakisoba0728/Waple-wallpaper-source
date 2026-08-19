// Function: FUN_1404c1234
// Addr: 1404c1234
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c1284) overlaps instruction at (ram,0x0001404c1282)
    */

void FUN_1404c1234(byte *param_1,byte *param_2,char param_3)

{
  char *pcVar1;
  int *piVar2;
  char cVar3;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte bVar4;
  byte bVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  char unaff_R12B;
  byte in_CF;
  
  cVar3 = cRam300028ff350028fe;
  uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar6 = (undefined2)((ulonglong)param_1 >> 0x10);
  bVar4 = (byte)param_1;
  piVar2 = (int *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,cRam300028ff350028fe))) +
                   0x21 + CONCAT44(in_register_00000004,
                                   CONCAT22(in_register_00000002,
                                            CONCAT11(in_AH,cRam300028ff350028fe))));
  *piVar2 = *piVar2 + (int)param_1 + (uint)in_CF;
  *param_2 = *param_2 + cVar3;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)))
       + cVar3;
  if (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)))
      != '\0') {
    pcVar1 = (char *)(CONCAT44(in_register_00000004,
                               CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) + 0x350028fe);
    *pcVar1 = *pcVar1 + in_AH;
                    /* WARNING: Could not recover jumptable at 0x0001404c124d. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(ulonglong)
              *(uint *)CONCAT44(in_register_00000004,
                                CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))))();
    return;
  }
  (param_2 + 0x11840029)[(longlong)param_1] = (param_2 + 0x11840029)[(longlong)param_1] + cVar3;
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 + cVar3;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)))
       + cVar3;
  if (*(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)))
      == '\0') {
    *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) =
         *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))
                          ) & CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3));
    *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) =
         *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))
                          ) + cVar3;
    *param_2 = *param_2 & bVar4;
    *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) =
         *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)))
         - CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3));
    *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) =
         *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)))
         - CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3));
  }
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)))
       + in_AH;
  bVar5 = (byte)((ulonglong)param_1 >> 8) | *param_1;
  param_2[CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(bVar5,bVar4))) + 0x11840029] =
       param_2[CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(bVar5,bVar4))) + 0x11840029] + cVar3;
  *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(bVar5,bVar4))) =
       *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(bVar5,bVar4))) + unaff_R12B;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)))
       + cVar3;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar3)))
       + in_AH;
  bVar5 = bVar5 | *(byte *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(bVar5,bVar4)));
  param_2[CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(bVar5,bVar4))) + 0x11840029] =
       param_2[CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(bVar5,bVar4))) + 0x11840029] + cVar3;
  *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(bVar5,bVar4))) =
       *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(bVar5,bVar4))) + param_3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

