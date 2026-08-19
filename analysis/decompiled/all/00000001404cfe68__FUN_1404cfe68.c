// Function: FUN_1404cfe68
// Addr: 1404cfe68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cfe68(undefined8 param_1,undefined8 param_2,char param_3)

{
  char cVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  char *pcVar7;
  byte *pbVar8;
  byte bVar9;
  byte bVar10;
  undefined6 uVar11;
  char cVar12;
  byte bVar13;
  undefined6 uVar14;
  char *unaff_RDI;
  byte unaff_R12B;
  byte *in_stack_00000008;
  
  uVar14 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar13 = (byte)((ulonglong)param_2 >> 8);
  cVar12 = (char)param_2;
  uVar11 = (undefined6)((ulonglong)param_1 >> 0x10);
  bVar10 = (byte)((ulonglong)param_1 >> 8);
  bVar9 = (byte)param_1;
  uVar6 = func_0x0001344d3889();
  bVar3 = *(byte *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9));
  *(byte *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) + unaff_R12B;
  *(byte *)CONCAT62(uVar14,CONCAT11(bVar13,cVar12)) =
       *(char *)CONCAT62(uVar14,CONCAT11(bVar13,cVar12)) + bVar9;
  uVar5 = (uint)CONCAT71((int7)((ulonglong)uVar6 >> 8),(char)uVar6 + '\b' + CARRY1(bVar3,unaff_R12B)
                        );
  iVar4 = uVar5 + 0xe8000a34;
  bVar2 = ((char)iVar4 + -0x3a) - (0x17fff5cb < uVar5);
  bVar3 = *(byte *)CONCAT62(uVar14,CONCAT11(bVar13,cVar12));
  *(byte *)CONCAT62(uVar14,CONCAT11(bVar13,cVar12)) =
       *(char *)CONCAT62(uVar14,CONCAT11(bVar13,cVar12)) + bVar2;
  uVar5 = (CONCAT31((int3)((uint)iVar4 >> 8),bVar2) + 0x277ffc6) - (uint)CARRY1(bVar3,bVar2);
  *(byte *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) + unaff_R12B;
  bVar3 = (byte)uVar5;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + bVar3;
  bVar2 = (bVar3 + bVar10 + -0x3a) - CARRY1(bVar3,bVar10);
  bVar3 = *(byte *)CONCAT62(uVar14,CONCAT11(bVar13,cVar12));
  *(byte *)CONCAT62(uVar14,CONCAT11(bVar13,cVar12)) =
       *(char *)CONCAT62(uVar14,CONCAT11(bVar13,cVar12)) + bVar2;
  uVar5 = (CONCAT31((int3)(uVar5 >> 8),bVar2) + 0x277ffc6) - (uint)CARRY1(bVar3,bVar2);
  pcVar7 = (char *)(ulonglong)uVar5;
  *(byte *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) + unaff_R12B;
  *pcVar7 = *pcVar7 + (char)uVar5;
  pbVar8 = (byte *)(pcVar7 + -0x17ffc5e4);
  bVar3 = *pbVar8;
  bVar2 = (byte)(uVar5 >> 8);
  *pbVar8 = *pbVar8 + bVar2;
  bVar3 = ((char)uVar5 + -0x3a) - CARRY1(bVar3,bVar2);
  uVar5 = CONCAT22((short)(uVar5 >> 0x10),CONCAT11(bVar2 + bVar13,bVar3));
  *(char *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) =
       *(char *)CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) + param_3;
  bVar3 = bVar3 | *(byte *)(ulonglong)uVar5;
  pbVar8 = (byte *)(ulonglong)CONCAT31((int3)(uVar5 >> 8),bVar3);
  *(byte *)((longlong)pbVar8 * 2) = bVar3;
  if (-1 < (char)bVar3) {
    pcVar7 = (char *)(CONCAT62(uVar11,CONCAT11(bVar10,bVar9)) + 0x68);
    *pcVar7 = *pcVar7 + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar13 = bVar13 | pbVar8[CONCAT62(uVar14,CONCAT11(bVar13,cVar12))];
  bVar2 = *(byte *)CONCAT62(uVar14,CONCAT11(bVar13,cVar12));
  cVar1 = *(char *)CONCAT62(uVar14,CONCAT11(bVar13,cVar12));
  *(byte *)CONCAT62(uVar14,CONCAT11(bVar13,cVar12)) =
       *(char *)CONCAT62(uVar14,CONCAT11(bVar13,cVar12)) + bVar9;
  bVar10 = bVar9 & 0x1f;
  *in_stack_00000008 = *in_stack_00000008 << (bVar9 & 7) | *in_stack_00000008 >> 8 - (bVar9 & 7);
  if ((bVar10 == 1 || !SCARRY1(cVar1,bVar9)) &&
      (bVar10 != 1 ||
      (bVar10 == 0 && CARRY1(bVar2,bVar9) || bVar10 != 0 && (*in_stack_00000008 & 1) != 0) ==
      (char)*in_stack_00000008 < '\0')) {
    *unaff_RDI = *unaff_RDI + bVar9;
    if (*unaff_RDI != '\0') {
      *(byte *)CONCAT62(uVar14,CONCAT11(bVar13,cVar12)) =
           *(char *)CONCAT62(uVar14,CONCAT11(bVar13,cVar12)) + bVar9;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *pbVar8 = *pbVar8 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *pbVar8 = *pbVar8 | bVar3;
  unaff_RDI[(longlong)pbVar8] = unaff_RDI[(longlong)pbVar8] + cVar12;
  in_stack_00000008[(longlong)pbVar8] = in_stack_00000008[(longlong)pbVar8] + bVar13;
  *pbVar8 = *pbVar8 + bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

