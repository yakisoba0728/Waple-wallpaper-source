// Function: FUN_14049fb78
// Addr: 14049fb78
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049fb78(char *param_1,byte *param_2,undefined8 param_3,char *param_4)

{
  byte *pbVar1;
  undefined3 uVar2;
  char cVar3;
  byte bVar4;
  uint uVar5;
  byte bVar9;
  undefined8 in_RAX;
  undefined7 uVar10;
  char *pcVar7;
  int *piVar8;
  byte bVar11;
  char unaff_BL;
  undefined7 unaff_00000019;
  char *unaff_RSI;
  char *unaff_RDI;
  byte in_CF;
  uint *puVar6;
  
  bVar11 = (byte)((ulonglong)param_2 >> 8);
  bVar9 = (byte)((ulonglong)in_RAX >> 8);
  bVar4 = bVar9 + unaff_RSI[CONCAT71(unaff_00000019,unaff_BL)];
  uVar10 = (undefined7)
           (CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar4 + in_CF,(char)in_RAX)) >> 8);
  cVar3 = (char)in_RAX + *param_1 +
          (CARRY1(bVar9,unaff_RSI[CONCAT71(unaff_00000019,unaff_BL)]) || CARRY1(bVar4,in_CF));
  puVar6 = (uint *)CONCAT71(uVar10,cVar3);
  *unaff_RSI = *unaff_RSI + cVar3;
  *(char *)puVar6 = (char)*puVar6 + cVar3;
  *puVar6 = *puVar6 & (uint)param_1;
  pcVar7 = (char *)CONCAT71(uVar10,cVar3 + (char)*puVar6);
  pcVar7[(longlong)unaff_RSI] = pcVar7[(longlong)unaff_RSI] | bVar11;
  *pcVar7 = *pcVar7 + bVar11;
  uVar5 = in(1);
  piVar8 = (int *)(ulonglong)uVar5;
  cVar3 = (char)(uVar5 >> 8);
  param_2[-0x1b] = param_2[-0x1b] + cVar3;
  *piVar8 = *piVar8 + uVar5;
  *unaff_RDI = *unaff_RSI;
  *param_4 = *param_4 + -8;
  bVar4 = (byte)uVar5;
  *param_2 = *param_2 | bVar4;
  *(char *)piVar8 = (char)*piVar8 + (char)param_1;
  if ((char)*piVar8 != '\0') {
    param_2[-0x1b] = param_2[-0x1b] + cVar3;
    *piVar8 = *piVar8 + uVar5;
    out(*(undefined4 *)(unaff_RSI + 1),(short)param_2);
    in(1);
    param_2[(longlong)(unaff_RDI + 1) * 8 + 0x8210049] =
         param_2[(longlong)(unaff_RDI + 1) * 8 + 0x8210049] + bVar11;
    out(*(undefined4 *)(unaff_RSI + 5),(short)param_2);
    uVar5 = in(1);
    puVar6 = (uint *)(ulonglong)uVar5;
    unaff_RDI[-0x1a] = unaff_RDI[-0x1a] + bVar11;
    *puVar6 = *puVar6 + uVar5;
    *puVar6 = *puVar6 & uVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_4 = *param_4 + bVar4;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  uVar2 = (undefined3)(CONCAT22((short)(uVar5 >> 0x10),CONCAT11(0xfa,bVar4)) >> 8);
  piVar8 = (int *)((ulonglong)CONCAT31(uVar2,bVar4) ^ 0x59);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + unaff_BL
  ;
  *piVar8 = *piVar8 + (int)param_2;
  pbVar1 = (byte *)((ulonglong)(CONCAT31(uVar2,(char)piVar8) | 0xd0) + 7);
  *pbVar1 = *pbVar1 | bVar11;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

