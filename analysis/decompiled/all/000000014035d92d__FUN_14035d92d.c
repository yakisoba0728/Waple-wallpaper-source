// Function: FUN_14035d92d
// Addr: 14035d92d
// Size: 617 bytes


void FUN_14035d92d(undefined8 param_1,undefined8 param_2)

{
  int *piVar1;
  longlong lVar2;
  uint *puVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  undefined8 *unaff_RBP;
  undefined8 uVar11;
  longlong unaff_RDI;
  ulonglong uVar12;
  longlong in_R10;
  longlong unaff_R13;
  longlong unaff_R14;
  uint uVar13;
  longlong unaff_R15;
  float fVar14;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar15;
  float unaff_XMM6_Da;
  float unaff_XMM7_Da;
  
  uVar11 = unaff_RBP[-8];
  iVar6 = (**(code **)(in_R10 + 0x40))(param_1,param_2,uVar11);
  if (iVar6 < 0) goto code_r0x00014035dc56;
  lVar9 = unaff_RBP[1];
  lVar2 = lVar9 + (ulonglong)((int)*unaff_RBP + 3U >> 2) * 4;
  uVar12 = 0;
  uVar13 = 0;
  if (*(int *)(unaff_RBP + -0x10) != 0) {
    do {
      *(undefined4 *)(lVar2 + uVar12 * 4) = 0xffffffff;
      uVar10 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
      uVar13 = *(uint *)(unaff_RBP + -0x10);
    } while (uVar10 < uVar13);
  }
  uVar12 = 0;
  if (*(int *)(unaff_R14 + 0x60) != 0) {
    do {
      uVar13 = *(uint *)(*(longlong *)(unaff_R14 + 0x70) + 8 + uVar12 * 0x14);
      uVar8 = (ulonglong)
              *(ushort *)
               (lVar9 + (ulonglong)*(uint *)(*(longlong *)(unaff_R14 + 0x70) + 0xc + uVar12 * 0x14)
                        * 2);
      if (*(uint *)(lVar2 + uVar8 * 4) <= uVar13) {
        uVar13 = *(uint *)(lVar2 + uVar8 * 4);
      }
      uVar10 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
      *(uint *)(lVar2 + uVar8 * 4) = uVar13;
    } while (uVar10 < *(uint *)(unaff_R14 + 0x60));
    uVar13 = *(uint *)(unaff_RBP + -0x10);
  }
  uVar12 = 1;
  if (1 < uVar13) {
    do {
      if (*(int *)(lVar2 + uVar12 * 4) == -1) {
        *(undefined4 *)(lVar2 + uVar12 * 4) =
             *(undefined4 *)(lVar2 + (ulonglong)((int)uVar12 - 1) * 4);
        uVar13 = *(uint *)(unaff_RBP + -0x10);
      }
      uVar10 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
    } while (uVar10 < uVar13);
  }
  cVar5 = func_0x0001403bf270();
  if (cVar5 == '\0') goto code_r0x00014035dc56;
  iVar6 = *(int *)(unaff_RBP + -0x10);
  uVar12 = 0;
  *(undefined4 *)(unaff_R14 + 0x60) = 0;
  uVar13 = 0;
  if (iVar6 != 0) {
    do {
      uVar8 = (ulonglong)*(uint *)(unaff_R14 + 0x60);
      lVar4 = *(longlong *)(unaff_R14 + 0x70);
      *(uint *)(unaff_R14 + 0x60) = *(uint *)(unaff_R14 + 0x60) + 1;
      *(uint *)(lVar4 + uVar8 * 0x14) = (uint)*(ushort *)(unaff_RDI + uVar12 * 2);
      *(undefined4 *)(lVar4 + 8 + uVar8 * 0x14) = *(undefined4 *)(lVar2 + uVar12 * 4);
      *(int *)(lVar4 + 4 + uVar8 * 0x14) = (int)(longlong)*(float *)(unaff_R15 + uVar12 * 4);
      *(int *)(lVar4 + 0xc + uVar8 * 0x14) = (int)*(float *)(unaff_R13 + uVar12 * 8);
      lVar9 = uVar12 * 8;
      uVar10 = (int)uVar12 + 1;
      uVar12 = (ulonglong)uVar10;
      *(int *)(lVar4 + 0x10 + uVar8 * 0x14) = (int)*(float *)(unaff_R13 + 4 + lVar9);
      uVar13 = *(uint *)(unaff_RBP + -0x10);
    } while (uVar10 < uVar13);
  }
  *(undefined8 *)(unaff_R14 + 0x78) = *(undefined8 *)(unaff_R14 + 0x70);
  *(undefined2 *)(unaff_R14 + 0x59) = 0x100;
  *(undefined4 *)(unaff_R14 + 100) = 0;
  if ((*(int *)(unaff_R14 + 0x60) * 5 & 0x3fffffffU) != 0) {
    func_0x000140421870(*(undefined8 *)(unaff_R14 + 0x80),0,*(int *)(unaff_R14 + 0x60) * 0x14);
    return;
  }
  uVar15 = extraout_XMM0_Qa;
  if (uVar13 != 0) {
    iVar6 = *(int *)((longlong)unaff_RBP + -0x7c);
    uVar12 = 0;
    do {
      lVar2 = *(longlong *)(unaff_R14 + 0x70);
      lVar9 = *(longlong *)(unaff_R14 + 0x80);
      fVar14 = (float)FUN_1402edfc0((float)*(int *)(lVar2 + 4 + uVar12 * 0x14) * unaff_XMM6_Da);
      *(int *)(lVar9 + uVar12 * 0x14) = (int)fVar14;
      iVar7 = -*(int *)(lVar2 + 0xc + uVar12 * 0x14);
      if (iVar6 != 5) {
        iVar7 = *(int *)(lVar2 + 0xc + uVar12 * 0x14);
      }
      fVar14 = (float)FUN_1402edfc0((float)iVar7 * unaff_XMM6_Da);
      *(int *)(lVar9 + 8 + uVar12 * 0x14) = (int)fVar14;
      uVar15 = FUN_1402edfc0((float)*(int *)(lVar2 + 0x10 + uVar12 * 0x14) * unaff_XMM7_Da);
      uVar13 = (int)uVar12 + 1;
      *(int *)(lVar9 + 0xc + uVar12 * 0x14) = (int)(float)uVar15;
      uVar12 = (ulonglong)uVar13;
    } while (uVar13 < *(uint *)(unaff_RBP + -0x10));
    uVar11 = unaff_RBP[-8];
  }
  if (*(int *)((longlong)unaff_RBP + -0x7c) == 5) {
    uVar15 = FUN_1403f8f40();
  }
  uVar12 = 0;
  uVar13 = 0;
  if (*(int *)(unaff_R14 + 0x60) != 0) {
    do {
      uVar10 = (int)uVar12 + 1;
      puVar3 = (uint *)(*(longlong *)(unaff_R14 + 0x70) + 4 + uVar12 * 0x14);
      *puVar3 = *puVar3 & 0xfffffff8;
      uVar13 = *(uint *)(unaff_R14 + 0x60);
      uVar12 = (ulonglong)uVar10;
    } while (uVar10 < uVar13);
  }
  if (uVar13 == 0xffffffff) {
    uVar13 = 0xffffffff;
  }
  uVar12 = (ulonglong)uVar13;
  if (1 < uVar13) {
    lVar2 = *(longlong *)(unaff_R14 + 0x70);
    iVar6 = FUN_1403a1af0(uVar15,lVar2,0,uVar12,0xffffffff);
    piVar1 = (int *)(unaff_R14 + 0xe0);
    *piVar1 = *piVar1 - uVar13;
    if (*piVar1 < 0) {
      *(undefined1 *)(unaff_R14 + 0x58) = 0;
    }
    if (*(int *)(unaff_R14 + 0x1c) == 2) {
code_r0x00014035dbf7:
      uVar10 = 0;
      lVar9 = 0;
      do {
        if (iVar6 != *(int *)(lVar2 + 8 + lVar9 * 0x14)) {
          puVar3 = (uint *)(lVar2 + 4 + lVar9 * 0x14);
          *puVar3 = *puVar3 | 3;
        }
        uVar10 = uVar10 + 1;
        lVar9 = lVar9 + 1;
      } while (uVar10 < uVar13);
    }
    else {
      iVar7 = *(int *)(lVar2 + 8);
      if (iVar6 == iVar7) {
        do {
          uVar13 = (int)uVar12 - 1;
          uVar12 = (ulonglong)uVar13;
          if (*(int *)(lVar2 + 8 + uVar12 * 0x14) == iVar7) break;
          puVar3 = (uint *)(lVar2 + 4 + uVar12 * 0x14);
          *puVar3 = *puVar3 | 3;
        } while (uVar13 != 0);
      }
      else {
        iVar7 = *(int *)(lVar2 + 8 + (ulonglong)(uVar13 - 1) * 0x14);
        if (iVar6 != iVar7) goto code_r0x00014035dbf7;
        uVar12 = 0;
        do {
          if (*(int *)(lVar2 + 8 + uVar12 * 0x14) == iVar7) break;
          puVar3 = (uint *)(lVar2 + 4 + uVar12 * 0x14);
          *puVar3 = *puVar3 | 3;
          uVar10 = (int)uVar12 + 1;
          uVar12 = (ulonglong)uVar10;
        } while (uVar10 < uVar13);
      }
    }
  }
  func_0x00014028b040(uVar11);
  func_0x00014028b040(unaff_RBP[-0xd]);
  func_0x00014028b040(unaff_RBP[-7]);
  func_0x00014028b040(unaff_RBP[-0xe]);
  func_0x00014028b040(unaff_RBP[-0xc]);
  func_0x00014028b040();
code_r0x00014035dc56:
  if (1 < *(int *)(unaff_RBP + -4) + 1U) {
    func_0x0001402bf8e0(unaff_RBP[-3]);
  }
  if (1 < *(int *)(unaff_RBP + -2) + 1U) {
    func_0x0001402bf8e0(unaff_RBP[-1]);
  }
  if (1 < *(int *)(unaff_RBP + -6) + 1U) {
    func_0x0001402bf8e0(unaff_RBP[-5]);
  }
  if (1 < *(int *)(unaff_RBP + -0xb) + 1U) {
    func_0x0001402bf8e0(unaff_RBP[-10]);
  }
  unaff_RBP[4] = &UNK_140470c60;
  unaff_RBP[5] = &PTR_DAT_140470cb0;
  lVar2 = unaff_RBP[0xf];
  while (lVar2 != 0) {
    lVar9 = *(longlong *)(lVar2 + 0x20);
    func_0x00014028b040(lVar2,0x28);
    lVar2 = lVar9;
  }
  func_0x0001402ed2f0(unaff_RBP[0x15] ^ (ulonglong)&stack0x00000000);
  return;
}

