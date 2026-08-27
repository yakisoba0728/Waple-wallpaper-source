// Function: FUN_14034d8a0
// Addr: 14034d8a0
// Size: 593 bytes


undefined8
FUN_14034d8a0(longlong param_1,uint param_2,uint param_3,undefined8 param_4,undefined8 param_5,
             undefined4 *param_6)

{
  int iVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  undefined8 uVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  
  iVar7 = 0;
  iVar1 = *(int *)(*(longlong *)(param_1 + 0x480) + (ulonglong)param_2 * 4);
  *param_6 = 0;
  lVar6 = (ulonglong)(uint)(iVar1 * 4) + *(longlong *)(param_1 + 0x468);
  uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar6 + 8),*(undefined1 *)(lVar6 + 9)),
                            *(undefined1 *)(lVar6 + 10)),*(undefined1 *)(lVar6 + 0xb));
  if (param_3 <= *(uint *)(param_1 + 0x10)) {
    do {
      if ((*(uint *)(param_1 + 0x4d4) <= uVar8) ||
         (*(uint *)(param_1 + 0x4d4) - uVar8 < param_3 * 4 + 0xc)) {
        return 3;
      }
      uVar5 = FUN_1402f5c50(param_4,*(int *)(param_1 + 0x4d0) + 4 + param_3 * 4 + uVar8);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar5 = FUN_1402f4fe0(param_4,8);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar3 = FUN_1402f5200(param_4);
      uVar4 = FUN_1402f5200(param_4);
      FUN_1402f5100(param_4);
      if (uVar3 == uVar4) {
        return 0x9d;
      }
      if (uVar4 < uVar3) {
        return 3;
      }
      if (uVar4 - uVar3 < 8) {
        return 3;
      }
      if (*(int *)(param_1 + 0x4d4) - uVar8 < uVar4) {
        return 3;
      }
      uVar5 = FUN_1402f5c50(param_4,*(int *)(param_1 + 0x4d0) + uVar3 + uVar8);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar5 = FUN_1402f4fe0(param_4,uVar4 - uVar3);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      FUN_1402f52a0(param_4);
      FUN_1402f52a0(param_4);
      uVar3 = FUN_1402f5200(param_4);
      if (0x706e6720 < uVar3) {
        if (uVar3 != 0x7267626c) {
          bVar9 = uVar3 == 0x74696666;
          goto LAB_14034daa4;
        }
LAB_14034daab:
        uVar5 = 2;
LAB_14034dab0:
        FUN_1402f5100(param_4);
        return uVar5;
      }
      if (uVar3 == 0x706e6720) {
        FUN_1402f5100(param_4);
        return 7;
      }
      if ((uVar3 != 0x64757065) && (uVar3 != 0x666c6970)) {
        bVar9 = uVar3 == 0x6a706720;
LAB_14034daa4:
        uVar5 = 7;
        if (!bVar9) goto LAB_14034dab0;
        goto LAB_14034daab;
      }
      if (3 < iVar7) {
        FUN_1402f5100(param_4);
        return 3;
      }
      iVar7 = iVar7 + 1;
      uVar2 = FUN_1402f52a0(param_4);
      param_3 = (uint)uVar2;
      FUN_1402f5100(param_4);
    } while (param_3 <= *(uint *)(param_1 + 0x10));
  }
  return 6;
}

