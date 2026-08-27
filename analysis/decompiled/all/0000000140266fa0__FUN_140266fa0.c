// Function: FUN_140266fa0
// Addr: 140266fa0
// Size: 507 bytes


void FUN_140266fa0(longlong param_1,uint *param_2)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  
  uVar8 = *(uint *)(param_1 + 0x38) | 0x2000000;
  lVar1 = *(longlong *)(param_1 + 0x98);
  *param_2 = uVar8;
  if (lVar1 == 0) {
    uVar3 = *(int *)(param_1 + 0x40) / *(int *)(param_1 + 0x3c);
    iVar4 = FUN_1400ea5b0(uVar8,(longlong)*(int *)(param_1 + 0x40) %
                                (longlong)*(int *)(param_1 + 0x3c) & 0xffffffff);
    *(uint *)(param_1 + 0x90) = iVar4 * uVar3;
    lVar5 = thunk_FUN_14028af20();
    lVar1 = *(longlong *)(param_1 + 0x48);
    uVar10 = 0;
    *(longlong *)(param_1 + 0x98) = lVar5;
    uVar6 = 0;
    do {
      iVar7 = (int)uVar6;
      if (iVar7 == 2) break;
      if (((&DAT_140484a20)[uVar6] & uVar8) != 0) {
        uVar10 = (ulonglong)(uint)((int)uVar10 + (&DAT_1404849b0)[uVar6]);
      }
      if (iVar7 == 1) break;
      if (((&DAT_140484a24)[uVar6] & uVar8) != 0) {
        uVar10 = (ulonglong)(uint)((int)uVar10 + (&DAT_1404849b4)[uVar6]);
      }
      uVar6 = (ulonglong)(iVar7 + 2U);
    } while ((int)(iVar7 + 2U) < 0x1a);
    if (*(longlong *)(param_1 + 0x88) == 0) {
      uVar8 = 0;
      if (uVar3 != 0) {
        do {
          uVar9 = (ulonglong)(uVar8 * iVar4);
          FUN_1404210f0((ulonglong)(uVar8 * iVar4) + lVar5,
                        (ulonglong)(uVar8 * *(int *)(param_1 + 0x3c)) + lVar1,uVar10);
          uVar6 = (ulonglong)(uVar8 * *(int *)(param_1 + 0x3c));
          *(undefined8 *)(uVar9 + lVar5 + uVar10) = *(undefined8 *)(uVar6 + lVar1);
          *(undefined4 *)(uVar9 + 8 + lVar5 + uVar10) = *(undefined4 *)(uVar6 + 8 + lVar1);
          FUN_1404210f0(lVar5 + 0xc + uVar10 + uVar9,
                        (ulonglong)(*(int *)(param_1 + 0x3c) * uVar8) + lVar1 + uVar10,
                        *(int *)(param_1 + 0x3c) - (int)uVar10);
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar3);
      }
    }
    else {
      uVar8 = 0;
      if (uVar3 != 0) {
        do {
          uVar6 = (ulonglong)(uVar8 * iVar4);
          FUN_1404210f0((ulonglong)(uVar8 * iVar4) + lVar5,
                        (ulonglong)(uVar8 * *(int *)(param_1 + 0x3c)) + lVar1,uVar10);
          lVar2 = *(longlong *)(param_1 + 0x88);
          *(undefined8 *)(uVar6 + lVar5 + uVar10) =
               *(undefined8 *)((ulonglong)(uVar8 * 0xc) + lVar2);
          *(undefined4 *)(uVar6 + 8 + lVar5 + uVar10) =
               *(undefined4 *)((ulonglong)(uVar8 * 0xc) + 8 + lVar2);
          FUN_1404210f0(lVar5 + 0xc + uVar10 + uVar6,
                        (ulonglong)(*(int *)(param_1 + 0x3c) * uVar8) + lVar1 + uVar10,
                        *(int *)(param_1 + 0x3c) - (int)uVar10);
          uVar8 = uVar8 + 1;
        } while (uVar8 < uVar3);
      }
    }
  }
  return;
}

