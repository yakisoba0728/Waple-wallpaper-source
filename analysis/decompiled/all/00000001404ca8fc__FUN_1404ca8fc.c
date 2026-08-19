// Function: FUN_1404ca8fc
// Addr: 1404ca8fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca8fc(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  char in_AL;
  byte bVar3;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined1 uVar4;
  char cVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  byte bVar8;
  char cVar9;
  char unaff_BL;
  longlong unaff_RDI;
  
  cVar9 = (char)((ulonglong)param_2 >> 8);
  bVar8 = (byte)param_2;
  uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar6 = (undefined2)((ulonglong)param_1 >> 0x10);
  uVar4 = (undefined1)param_1;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & (uint)param_1;
  bVar3 = in_AL + *(char *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  pbVar2 = (byte *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) + param_2);
  *pbVar2 = *pbVar2 | bVar8;
  cVar5 = (char)((ulonglong)param_1 >> 8) + cVar9;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       + bVar8;
  *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(cVar5,uVar4))) =
       *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(cVar5,uVar4))) + in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       + bVar3;
  *(char *)(unaff_RDI + -0xaffccfd) = *(char *)(unaff_RDI + -0xaffccfd) + cVar5;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       + bVar8;
  *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(cVar5,uVar4))) =
       *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(cVar5,uVar4))) + in_AH;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       + bVar3;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) + -1);
  *pcVar1 = *pcVar1 + cVar9;
  bVar3 = bVar3 ^ *(byte *)CONCAT44(in_register_00000004,
                                    CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar3)))
       + bVar3;
  *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(cVar5,uVar4))) =
       *(char *)CONCAT44(uVar7,CONCAT22(uVar6,CONCAT11(cVar5,uVar4))) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

