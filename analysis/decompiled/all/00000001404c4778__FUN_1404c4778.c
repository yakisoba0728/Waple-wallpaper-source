// Function: FUN_1404c4778
// Addr: 1404c4778
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c47aa) overlaps instruction at (ram,0x0001404c47a9)
    */

void FUN_1404c4778(longlong param_1,byte *param_2)

{
  char *pcVar1;
  byte bVar2;
  int iVar3;
  undefined3 uVar4;
  uint uVar5;
  byte bVar6;
  char cVar7;
  byte *in_RAX;
  longlong lVar8;
  byte *pbVar10;
  char cVar12;
  undefined1 uVar13;
  byte bVar14;
  byte bVar15;
  byte unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  int *unaff_RDI;
  longlong in_R11;
  char in_CF;
  bool bVar16;
  bool bVar17;
  int *piVar9;
  byte bVar11;
  
  bVar15 = (byte)((ulonglong)param_2 >> 8);
  bVar14 = (byte)param_2;
  uVar13 = (undefined1)((ulonglong)param_1 >> 8);
  cVar12 = (char)param_1;
  param_2[param_1] = (param_2[param_1] - bVar15) - in_CF;
  bVar2 = *in_RAX;
  *in_RAX = *in_RAX + unaff_BL;
  bVar6 = (byte)in_RAX - 0x10;
  bVar16 = 0xf < (byte)in_RAX || CARRY1(bVar6,CARRY1(bVar2,unaff_BL));
  bVar6 = bVar6 + CARRY1(bVar2,unaff_BL);
  bVar11 = (byte)((ulonglong)in_RAX >> 8);
  bVar2 = bVar11 + bVar6;
  bVar17 = CARRY1(bVar11,bVar6) || CARRY1(bVar2,bVar16);
  lVar8 = CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar2 + bVar16,bVar6));
  pbVar10 = (byte *)(lVar8 + 1);
  bVar2 = *pbVar10;
  bVar6 = *pbVar10;
  *pbVar10 = bVar6 + bVar15 + bVar17;
  iVar3 = (int)lVar8 + (uint)(CARRY1(bVar2,bVar15) || CARRY1(bVar6 + bVar15,bVar17)) + -0x76eaf494;
  bVar16 = CARRY1(bRam00000001422c590b,bVar14);
  bRam00000001422c590b = bRam00000001422c590b + bVar14;
  uVar4 = (undefined3)((uint)iVar3 >> 8);
  cVar7 = ((byte)iVar3 ^ 10) + *param_2 + bVar16;
  uVar5 = CONCAT31(uVar4,cVar7);
  piVar9 = (int *)(ulonglong)uVar5;
  bVar2 = *param_2;
  *param_2 = *param_2 + bVar14;
  if (CARRY1(bVar2,bVar14)) {
    pbVar10 = (byte *)(ulonglong)(uVar5 - *piVar9);
    *(char *)(in_R11 + 0x2d) = *(char *)(in_R11 + 0x2d) + cVar12;
  }
  else {
    *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (int)param_2;
    *piVar9 = *piVar9 + uVar5;
    uVar5 = CONCAT31(uVar4,cVar7 + bVar14);
    pbVar10 = (byte *)(ulonglong)uVar5;
    uVar13 = 0x2b;
    *pbVar10 = *pbVar10 + unaff_BL;
    out(0x42,uVar5);
    pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x2d);
    *pcVar1 = *pcVar1 + cVar12;
  }
  bVar2 = *pbVar10;
  *pbVar10 = *pbVar10 + (byte)pbVar10;
  *unaff_RDI = *unaff_RDI + CONCAT22((short)((ulonglong)param_1 >> 0x10),CONCAT11(uVar13,cVar12)) +
               (uint)CARRY1(bVar2,(byte)pbVar10);
  sysenter();
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

