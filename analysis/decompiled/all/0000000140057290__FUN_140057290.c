// Function: FUN_140057290
// Addr: 140057290
// Size: 830 bytes


int FUN_140057290(longlong *param_1)

{
  short *psVar1;
  longlong *plVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  short *psVar12;
  byte bVar13;
  char cVar14;
  int iVar15;
  short *psVar16;
  ulonglong uVar17;
  longlong *plVar18;
  longlong lVar19;
  short *psVar20;
  longlong lVar21;
  undefined1 local_288 [16];
  uint local_278;
  undefined1 local_268 [44];
  short local_23c;
  short local_23a;
  short local_238;
  
  lVar6 = *param_1;
  bVar13 = 0;
  if (*(char *)(lVar6 + 100) == '\0') {
LAB_140057343:
    if (bVar13 != 0) {
      puVar7 = *(undefined8 **)(lVar6 + 0x50);
      if (puVar7 == *(undefined8 **)(lVar6 + 0x58)) {
        FUN_140057000(lVar6 + 0x48,puVar7,lVar6 + 0x40);
      }
      else {
        uVar8 = *(undefined8 *)(lVar6 + 0x40);
        *(undefined8 *)(lVar6 + 0x40) = 0xffffffffffffffff;
        *puVar7 = uVar8;
        *(longlong *)(lVar6 + 0x50) = *(longlong *)(lVar6 + 0x50) + 8;
      }
      iVar15 = FUN_14003adf0(lVar6 + 0x20,*(undefined4 *)(lVar6 + 0x60),lVar6 + 0x40,local_268);
      goto LAB_1400573d8;
    }
  }
  else {
    uVar5 = *(uint *)(lVar6 + 0x10);
    if (((uVar5 >> 10 & 1) == 0) ||
       ((*(int *)(lVar6 + 0x14) != -0x5ffffff4 && (*(int *)(lVar6 + 0x14) != -0x5ffffffd)))) {
      bVar13 = (byte)(uVar5 >> 4) & 1;
      goto LAB_140057343;
    }
    if ((*(byte *)(lVar6 + 0x60) & 1) == 0) goto LAB_140057343;
    plVar18 = (longlong *)(lVar6 + 0x20);
    if (7 < *(ulonglong *)(lVar6 + 0x38)) {
      plVar18 = (longlong *)*plVar18;
    }
    iVar15 = FUN_140290230(plVar18,local_288,3,uVar5);
    if (iVar15 == 0) {
      bVar13 = (byte)(local_278 >> 4) & 1;
      goto LAB_140057343;
    }
    cVar14 = FUN_14003bb30(iVar15);
    if ((cVar14 == '\0') && ((iVar15 != 5 || ((*(byte *)(lVar6 + 0x60) & 2) == 0)))) {
      FUN_140057230(param_1);
      return iVar15;
    }
  }
  iVar15 = FUN_14028fdd0(*(undefined8 *)(lVar6 + 0x40),local_268);
  if (iVar15 == 0) {
    uVar8 = *(undefined8 *)(lVar6 + 0x40);
    do {
      if ((local_23c != 0x2e) || ((local_23a != 0 && ((local_23a != 0x2e || (local_238 != 0)))))) {
        iVar15 = 0;
        break;
      }
      iVar15 = FUN_14028fdd0(uVar8,local_268);
    } while (iVar15 == 0);
  }
LAB_1400573d8:
  *(undefined1 *)(lVar6 + 100) = 1;
  do {
    if (iVar15 == 0) {
      FUN_14003b480(lVar6,local_268);
      return 0;
    }
    do {
      if (iVar15 != 0x12) {
LAB_140057580:
        plVar18 = (longlong *)param_1[1];
        *param_1 = 0;
        param_1[1] = 0;
        if (plVar18 == (longlong *)0x0) {
          return iVar15;
        }
        LOCK();
        plVar2 = plVar18 + 1;
        lVar6 = *plVar2;
        *(int *)plVar2 = (int)*plVar2 + -1;
        UNLOCK();
        if ((int)lVar6 != 1) {
          return iVar15;
        }
        (**(code **)*plVar18)(plVar18);
        LOCK();
        piVar3 = (int *)((longlong)plVar18 + 0xc);
        iVar4 = *piVar3;
        *piVar3 = *piVar3 + -1;
        UNLOCK();
        if (iVar4 != 1) {
          return iVar15;
        }
        (**(code **)(*plVar18 + 8))(plVar18);
        return iVar15;
      }
      lVar21 = *(longlong *)(lVar6 + 0x50);
      if (*(longlong *)(lVar6 + 0x48) == lVar21) {
        iVar15 = 0;
        goto LAB_140057580;
      }
      uVar8 = *(undefined8 *)(lVar21 + -8);
      *(undefined8 *)(lVar21 + -8) = 0xffffffffffffffff;
      uVar9 = *(undefined8 *)(lVar6 + 0x40);
      *(undefined8 *)(lVar6 + 0x40) = uVar8;
      FUN_14028fdf0(uVar9);
      FUN_14028fdf0(*(undefined8 *)(*(longlong *)(lVar6 + 0x50) + -8));
      *(longlong *)(lVar6 + 0x50) = *(longlong *)(lVar6 + 0x50) + -8;
      uVar10 = *(ulonglong *)(lVar6 + 0x38);
      if (uVar10 < 8) {
        lVar21 = lVar6 + 0x20;
      }
      else {
        lVar21 = *(longlong *)(lVar6 + 0x20);
      }
      uVar11 = *(ulonglong *)(lVar6 + 0x30);
      psVar20 = (short *)(lVar21 + uVar11 * 2);
      psVar16 = (short *)FUN_140015e90(lVar21);
      if ((psVar16 != psVar20) && ((*psVar16 == 0x5c || (*psVar16 == 0x2f)))) {
        psVar16 = psVar16 + 1;
      }
      if (psVar20 != psVar16) {
        do {
          psVar1 = psVar20 + -1;
          psVar12 = psVar20;
          if ((psVar20[-1] == 0x5c) || (psVar20[-1] == 0x2f)) break;
          psVar20 = psVar1;
          psVar12 = psVar1;
        } while (psVar1 != psVar16);
        do {
          psVar20 = psVar12;
          if (psVar20 == psVar16) break;
          psVar12 = psVar20 + -1;
        } while ((psVar20[-1] == 0x5c) || (psVar20[-1] == 0x2f));
      }
      uVar17 = (longlong)psVar20 - lVar21 >> 1;
      if (uVar11 < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_140012940();
      }
      *(ulonglong *)(lVar6 + 0x30) = uVar17;
      lVar19 = lVar6 + 0x20;
      if (7 < uVar10) {
        lVar19 = *(longlong *)(lVar6 + 0x20);
      }
      *(undefined2 *)(lVar19 + ((longlong)psVar20 - lVar21 & 0xfffffffffffffffeU)) = 0;
      iVar15 = FUN_14028fdd0(*(undefined8 *)(lVar6 + 0x40),local_268);
    } while (iVar15 != 0);
    uVar8 = *(undefined8 *)(lVar6 + 0x40);
    do {
      if ((local_23c != 0x2e) || ((local_23a != 0 && ((local_23a != 0x2e || (local_238 != 0)))))) {
        iVar15 = 0;
        break;
      }
      iVar15 = FUN_14028fdd0(uVar8,local_268);
    } while (iVar15 == 0);
  } while( true );
}

