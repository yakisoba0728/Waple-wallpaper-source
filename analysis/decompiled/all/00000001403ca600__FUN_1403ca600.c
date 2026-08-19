// Function: FUN_1403ca600
// Addr: 1403ca600
// Size: 398 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_1403ca600(longlong param_1,undefined8 param_2,int param_3,uint *param_4)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  int iVar12;
  int iVar13;
  bool bVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 in_XMM1 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  longlong local_res8;
  undefined8 local_res10;
  undefined1 auStack_68 [48];
  
  iVar3 = _UNK_140471b8c;
  iVar6 = _UNK_140471b88;
  iVar12 = _UNK_140471b84;
  iVar13 = _DAT_140471b80;
  if (*(int *)(param_1 + 8) == 0x10000) {
    uVar5 = 0x102;
  }
  else {
    if (*(int *)(param_1 + 8) != 0x20000) {
      return 0;
    }
    uVar5 = (uint)**(byte **)(param_1 + 0x10) * 0x100 + (uint)(*(byte **)(param_1 + 0x10))[1];
    if (uVar5 == 0) {
      return 0;
    }
  }
  local_res10 = param_2;
  if (param_3 < 0) {
    uVar7 = func_0x000140421ed0(param_2);
    return uVar7;
  }
  if (param_3 != 0) {
    lVar8 = *(longlong *)(param_1 + 0x30);
    if (lVar8 == 0) {
      do {
        lVar8 = thunk_FUN_1402da070();
        if (lVar8 == 0) {
          return 0;
        }
        if (uVar5 != 0) {
          uVar11 = 0;
          if (0xf < uVar5) {
            do {
              iVar2 = (int)uVar11;
              uVar4 = iVar2 + 4;
              auVar15._0_4_ = iVar2 + iVar13;
              auVar15._4_4_ = iVar2 + iVar12;
              auVar15._8_4_ = iVar2 + iVar6;
              auVar15._12_4_ = iVar2 + iVar3;
              auVar15 = pshufhw(auVar15,auVar15,0xd8);
              auVar17 = pshuflw(in_XMM1,auVar15,0xd8);
              *(ulonglong *)(lVar8 + uVar11 * 2) = CONCAT44(auVar17._8_4_,auVar17._0_4_);
              auVar18._0_4_ = uVar4 + iVar13;
              auVar18._4_4_ = uVar4 + iVar12;
              auVar18._8_4_ = uVar4 + iVar6;
              auVar18._12_4_ = uVar4 + iVar3;
              auVar15 = pshufhw(auVar18,auVar18,0xd8);
              auVar18 = pshuflw(auVar17,auVar15,0xd8);
              *(ulonglong *)(lVar8 + (ulonglong)uVar4 * 2) = CONCAT44(auVar18._8_4_,auVar18._0_4_);
              uVar4 = iVar2 + 8;
              auVar17._0_4_ = uVar4 + iVar13;
              auVar17._4_4_ = uVar4 + iVar12;
              auVar17._8_4_ = uVar4 + iVar6;
              auVar17._12_4_ = uVar4 + iVar3;
              auVar15 = pshufhw(auVar17,auVar17,0xd8);
              auVar18 = pshuflw(auVar18,auVar15,0xd8);
              *(ulonglong *)(lVar8 + (ulonglong)uVar4 * 2) = CONCAT44(auVar18._8_4_,auVar18._0_4_);
              uVar4 = iVar2 + 0xc;
              uVar10 = iVar2 + 0x10;
              uVar11 = (ulonglong)uVar10;
              auVar16._0_4_ = uVar4 + iVar13;
              auVar16._4_4_ = uVar4 + iVar12;
              auVar16._8_4_ = uVar4 + iVar6;
              auVar16._12_4_ = uVar4 + iVar3;
              auVar15 = pshufhw(auVar16,auVar16,0xd8);
              in_XMM1 = pshuflw(auVar18,auVar15,0xd8);
              *(ulonglong *)(lVar8 + (ulonglong)uVar4 * 2) = CONCAT44(in_XMM1._8_4_,in_XMM1._0_4_);
            } while (uVar10 < (uVar5 & 0xfffffff0));
            if (uVar5 <= uVar10) goto LAB_1403ca77a;
          }
          do {
            *(short *)(lVar8 + uVar11 * 2) = (short)uVar11;
            uVar4 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar4;
          } while (uVar4 < uVar5);
        }
LAB_1403ca77a:
        local_res8 = param_1;
        func_0x0001403688d0(lVar8,(ulonglong)uVar5 * 2 + lVar8,(ulonglong)uVar5,&local_res8);
        LOCK();
        bVar14 = *(longlong *)(param_1 + 0x30) == 0;
        if (bVar14) {
          *(longlong *)(param_1 + 0x30) = lVar8;
        }
        UNLOCK();
        if (bVar14) break;
        func_0x0001402bf8e0(lVar8);
        lVar8 = *(longlong *)(param_1 + 0x30);
      } while (lVar8 == 0);
    }
    iVar12 = 0;
    iVar13 = uVar5 - 1;
    if (-1 < iVar13) {
      do {
        uVar5 = (uint)(iVar13 + iVar12) >> 1;
        uVar1 = *(ushort *)(lVar8 + (ulonglong)uVar5 * 2);
        lVar9 = func_0x0001403c04b0(param_1,auStack_68,uVar1);
        iVar6 = *(int *)(lVar9 + 0x10);
        if (iVar6 == param_3) {
          if (iVar6 == 0) {
            iVar6 = 0;
          }
          else {
            iVar6 = func_0x0001404210c0(local_res10,*(undefined8 *)(lVar9 + 8),iVar6);
          }
        }
        else {
          iVar6 = param_3 - iVar6;
        }
        if (iVar6 < 0) {
          iVar13 = uVar5 - 1;
        }
        else {
          if (iVar6 < 1) {
            if (lVar8 + (ulonglong)uVar5 * 2 == 0) {
              return 0;
            }
            *param_4 = (uint)uVar1;
            return 1;
          }
          iVar12 = uVar5 + 1;
        }
      } while (iVar12 <= iVar13);
    }
  }
  return 0;
}

