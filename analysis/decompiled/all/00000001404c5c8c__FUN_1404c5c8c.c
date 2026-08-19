// Function: FUN_1404c5c8c
// Addr: 1404c5c8c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5c8c(longlong param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined3 uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  longlong in_RAX;
  byte bVar12;
  byte *pbVar9;
  char *pcVar10;
  char *pcVar11;
  int iVar13;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  char *unaff_RDI;
  char unaff_R12B;
  bool bVar14;
  int *piVar8;
  
  pbVar9 = (byte *)(in_RAX + 0x2f);
  *pbVar9 = *pbVar9 >> 1 | *pbVar9 << 7;
  cRam00000001084c8bde = cRam00000001084c8bde + (char)((ulonglong)param_1 >> 8);
  pbVar9 = (byte *)(param_1 + -1);
  uVar7 = (uint)in_RAX;
  if (pbVar9 != (byte *)0x0 && cRam00000001084c8bde != '\0') {
    uVar7 = uVar7 + 0x37ffd0b7;
    pcVar10 = (char *)(param_1 + -2);
    if (pcVar10 == (char *)0x0 || uVar7 == 0) {
      *pcVar10 = *pcVar10 + (char)(uVar7 >> 8);
      *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + (char)uVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    uVar7 = uVar7 | 0x38002f13;
    *pcVar10 = *pcVar10 + unaff_R12B;
    *(char *)(ulonglong)uVar7 = *(char *)(ulonglong)uVar7 + (byte)uVar7;
    pcVar11 = (char *)CONCAT62((int6)((ulonglong)pcVar10 >> 0x10),
                               CONCAT11((char)((ulonglong)pcVar10 >> 8) + *unaff_RDI +
                                        CARRY1((byte)uVar7,(byte)param_2),(char)pcVar10));
    cRam00000001784c8c58 = cRam00000001784c8c58 + (char)pcVar10;
    *pcVar11 = *pcVar11 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  bVar12 = *pbVar9;
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  *pbVar9 = *pbVar9 + bVar5;
  uVar2 = (uint)CARRY1(bVar12,bVar5);
  uVar3 = uVar7 + *(uint *)(in_RAX * 2);
  uVar6 = uVar3 + uVar2;
  piVar8 = (int *)(ulonglong)uVar6;
  iVar13 = param_2 + *(int *)(unaff_RSI + (longlong)piVar8) +
           (uint)(CARRY4(uVar7,*(uint *)(in_RAX * 2)) || CARRY4(uVar3,uVar2));
  *(byte *)((longlong)piVar8 + (longlong)pbVar9) =
       *(byte *)((longlong)piVar8 + (longlong)pbVar9) + (char)((uint)iVar13 >> 8);
  pbVar1 = (byte *)((longlong)piVar8 + 0x2f);
  *pbVar1 = *pbVar1 >> 1 | *pbVar1 << 7;
  bVar12 = (byte)((ulonglong)pbVar9 >> 8);
  bVar14 = CARRY1(bRam00000001084c8bf6,bVar12);
  bRam00000001084c8bf6 = bRam00000001084c8bf6 + bVar12;
  pbVar9 = (byte *)(param_1 + -2);
  if (pbVar9 == (byte *)0x0 || bRam00000001084c8bf6 == '\0') {
    *pbVar9 = *pbVar9 + (char)(uVar6 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       (*(int *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) - iVar13) - (uint)bVar14;
  *piVar8 = *piVar8 + uVar6;
  uVar4 = (undefined3)(uVar6 >> 8);
  bVar5 = (char)uVar6 + 0x82;
  pcVar10 = (char *)(ulonglong)CONCAT31(uVar4,bVar5);
  *pcVar10 = *pcVar10 + bVar5;
  bVar5 = bVar5 & (byte)iVar13;
  pcVar10 = (char *)(ulonglong)CONCAT31(uVar4,bVar5);
  *pcVar10 = *pcVar10 + unaff_BH;
  *pcVar10 = *pcVar10 + bVar5;
  bVar12 = *pbVar9;
  *pbVar9 = *pbVar9 + bVar5;
  cRam000000014cce6d0f = cRam000000014cce6d0f + bVar5 + CARRY1(bVar12,bVar5);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

