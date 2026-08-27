// Function: FUN_1403ca530
// Addr: 1403ca530
// Size: 611 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1403ca530(longlong param_1,char *param_2,uint param_3,uint *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  size_t sVar6;
  longlong lVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong local_res8;
  char *local_res10;
  undefined1 local_68 [48];
  
  if (*(int *)(param_1 + 8) == 0x10000) {
    uVar12 = 0x102;
  }
  else {
    if (*(int *)(param_1 + 8) != 0x20000) {
      return 0;
    }
    uVar12 = (uint)**(byte **)(param_1 + 0x10) * 0x100 + (uint)(*(byte **)(param_1 + 0x10))[1];
    if (uVar12 == 0) {
      return 0;
    }
  }
  local_res10 = param_2;
  if ((int)param_3 < 0) {
    sVar6 = strlen(param_2);
    param_3 = (uint)sVar6;
  }
  iVar3 = _UNK_140471abc;
  iVar5 = _UNK_140471ab8;
  iVar11 = _UNK_140471ab4;
  iVar13 = _DAT_140471ab0;
  if (param_3 != 0) {
    lVar7 = *(longlong *)(param_1 + 0x30);
    if (lVar7 == 0) {
      do {
        lVar7 = _malloc_base();
        if (lVar7 == 0) {
          return 0;
        }
        if (uVar12 != 0) {
          uVar10 = 0;
          if (0xf < uVar12) {
            do {
              iVar2 = (int)uVar10;
              uVar4 = iVar2 + 4;
              auVar15._0_4_ = iVar2 + iVar13;
              auVar15._4_4_ = iVar2 + iVar11;
              auVar15._8_4_ = iVar2 + iVar5;
              auVar15._12_4_ = iVar2 + iVar3;
              auVar15 = pshufhw(auVar15,auVar15,0xd8);
              auVar17 = pshuflw(in_XMM1,auVar15,0xd8);
              *(ulonglong *)(lVar7 + uVar10 * 2) = CONCAT44(auVar17._8_4_,auVar17._0_4_);
              auVar18._0_4_ = uVar4 + iVar13;
              auVar18._4_4_ = uVar4 + iVar11;
              auVar18._8_4_ = uVar4 + iVar5;
              auVar18._12_4_ = uVar4 + iVar3;
              auVar15 = pshufhw(auVar18,auVar18,0xd8);
              auVar18 = pshuflw(auVar17,auVar15,0xd8);
              *(ulonglong *)(lVar7 + (ulonglong)uVar4 * 2) = CONCAT44(auVar18._8_4_,auVar18._0_4_);
              uVar4 = iVar2 + 8;
              auVar17._0_4_ = uVar4 + iVar13;
              auVar17._4_4_ = uVar4 + iVar11;
              auVar17._8_4_ = uVar4 + iVar5;
              auVar17._12_4_ = uVar4 + iVar3;
              auVar15 = pshufhw(auVar17,auVar17,0xd8);
              auVar18 = pshuflw(auVar18,auVar15,0xd8);
              *(ulonglong *)(lVar7 + (ulonglong)uVar4 * 2) = CONCAT44(auVar18._8_4_,auVar18._0_4_);
              uVar4 = iVar2 + 0xc;
              uVar9 = iVar2 + 0x10;
              uVar10 = (ulonglong)uVar9;
              auVar16._0_4_ = uVar4 + iVar13;
              auVar16._4_4_ = uVar4 + iVar11;
              auVar16._8_4_ = uVar4 + iVar5;
              auVar16._12_4_ = uVar4 + iVar3;
              auVar15 = pshufhw(auVar16,auVar16,0xd8);
              in_XMM1 = pshuflw(auVar18,auVar15,0xd8);
              *(ulonglong *)(lVar7 + (ulonglong)uVar4 * 2) = CONCAT44(in_XMM1._8_4_,in_XMM1._0_4_);
            } while (uVar9 < (uVar12 & 0xfffffff0));
            if (uVar12 <= uVar9) goto LAB_1403ca6aa;
          }
          do {
            *(short *)(lVar7 + uVar10 * 2) = (short)uVar10;
            uVar4 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar4;
          } while (uVar4 < uVar12);
        }
LAB_1403ca6aa:
        local_res8 = param_1;
        FUN_140368800(lVar7,(ulonglong)uVar12 * 2 + lVar7,(ulonglong)uVar12,&local_res8);
        LOCK();
        bVar14 = *(longlong *)(param_1 + 0x30) == 0;
        if (bVar14) {
          *(longlong *)(param_1 + 0x30) = lVar7;
        }
        UNLOCK();
        if (bVar14) break;
        thunk_FUN_1402d9040(lVar7);
        lVar7 = *(longlong *)(param_1 + 0x30);
      } while (lVar7 == 0);
    }
    iVar11 = 0;
    iVar13 = uVar12 - 1;
    if (-1 < iVar13) {
      do {
        uVar4 = (uint)(iVar13 + iVar11) >> 1;
        uVar1 = *(ushort *)(lVar7 + (ulonglong)uVar4 * 2);
        lVar8 = FUN_1403c03e0(param_1,local_68,uVar1);
        uVar12 = *(uint *)(lVar8 + 0x10);
        if (uVar12 == param_3) {
          if (uVar12 == 0) {
            iVar5 = 0;
          }
          else {
            iVar5 = memcmp(local_res10,*(void **)(lVar8 + 8),(ulonglong)uVar12);
          }
        }
        else {
          iVar5 = param_3 - uVar12;
        }
        if (iVar5 < 0) {
          iVar13 = uVar4 - 1;
        }
        else {
          if (iVar5 < 1) {
            if (lVar7 + (ulonglong)uVar4 * 2 == 0) {
              return 0;
            }
            *param_4 = (uint)uVar1;
            return 1;
          }
          iVar11 = uVar4 + 1;
        }
      } while (iVar11 <= iVar13);
    }
  }
  return 0;
}

