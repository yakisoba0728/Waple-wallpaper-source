// Function: FUN_1404ab644
// Addr: 1404ab644
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab644(longlong param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  int *piVar4;
  char in_AL;
  char cVar5;
  byte in_AH;
  undefined6 in_register_00000002;
  char cVar6;
  undefined2 uVar7;
  undefined4 uVar8;
  byte bVar9;
  undefined6 uVar10;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  uVar8 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar7 = (undefined2)((ulonglong)param_1 >> 0x10);
  cVar6 = (char)param_1;
  *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(uint *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) & (uint)param_1;
  cVar5 = in_AL + *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(byte *)(param_1 + param_2) = *(byte *)(param_1 + param_2) | bVar9;
  piVar4 = unaff_RDI + 1;
  *unaff_RDI = *unaff_RSI;
  *piVar4 = *piVar4 - (uint)param_1;
  *(char *)(param_2 + 0x60000f19) = *(char *)(param_2 + 0x60000f19) + bVar9;
  *(byte *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(0x4a,cVar6))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(0x4a,cVar6))) + in_AH;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) + cVar5;
  pbVar2 = (byte *)(unaff_RBP + -0x4dfff0e7);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 + in_AH;
  *piVar4 = (*piVar4 - CONCAT22(uVar7,CONCAT11(0x4a,cVar6))) - (uint)CARRY1(bVar3,in_AH);
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar5)) + -0x4b);
  *pcVar1 = *pcVar1 + in_AH;
  *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(0x4a,cVar6))) =
       *(char *)CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(0x4a,cVar6))) + cVar5;
  bVar9 = bVar9 | *(byte *)(CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(0x4a,cVar6))) +
                           CONCAT44(uVar8,CONCAT22(uVar7,CONCAT11(0x4a,cVar6))));
  *(char *)CONCAT62(uVar10,CONCAT11(bVar9,(char)param_2)) =
       *(char *)CONCAT62(uVar10,CONCAT11(bVar9,(char)param_2)) + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

