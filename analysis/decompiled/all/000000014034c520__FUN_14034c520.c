// Function: FUN_14034c520
// Addr: 14034c520
// Size: 476 bytes


uint FUN_14034c520(longlong *param_1,int *param_2,byte param_3)

{
  uint uVar1;
  longlong lVar2;
  undefined1 *puVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  lVar4 = param_1[3];
  uVar10 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar4 + 0xc),*(undefined1 *)(lVar4 + 0xd)),
                             *(undefined1 *)(lVar4 + 0xe)),*(undefined1 *)(lVar4 + 0xf));
  if (uVar10 != 0) {
    lVar2 = lVar4 + 0x18;
    uVar8 = (uint)param_3 + *param_2;
    uVar11 = 0;
    uVar6 = uVar10;
    do {
      uVar12 = uVar6 + uVar11 >> 1;
      uVar5 = uVar12 * 0xc;
      uVar1 = uVar12 + 1;
      uVar9 = (ulonglong)uVar5;
      uVar7 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(((ulonglong)uVar5 - 4) + lVar2),
                                         *(undefined1 *)(((ulonglong)uVar5 - 3) + lVar2)),
                                *(undefined1 *)((uVar9 - 2) + lVar2)),
                       *(undefined1 *)((uVar9 - 1) + lVar2));
      uVar5 = uVar12;
      if ((CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar9 + lVar4 + 0x10),
                                      *(undefined1 *)(uVar9 + lVar4 + 0x11)),
                             *(undefined1 *)(uVar9 + lVar4 + 0x12)),
                    *(undefined1 *)(uVar9 + lVar4 + 0x13)) <= uVar8) &&
         (puVar3 = (undefined1 *)(uVar9 + lVar2), uVar11 = uVar1, uVar5 = uVar6, uVar8 <= uVar7)) {
        uVar6 = CONCAT31(CONCAT21(CONCAT11(*puVar3,puVar3[1]),puVar3[2]),puVar3[3]);
        goto LAB_14034c65f;
      }
      uVar6 = uVar5;
    } while (uVar11 < uVar6);
    uVar6 = 0;
LAB_14034c65f:
    if (param_3 == 0) {
      return uVar6;
    }
    if ((uVar8 <= uVar7) || (uVar12 = uVar1, uVar1 != uVar10)) {
      *(undefined1 *)(param_1 + 5) = 1;
      *(uint *)((longlong)param_1 + 0x2c) = uVar8;
      *(uint *)((longlong)param_1 + 0x34) = uVar12;
      uVar10 = 0;
      if (uVar6 < *(uint *)(*param_1 + 0x10)) {
        uVar10 = uVar6;
      }
      if (uVar10 == 0) {
        FUN_14034c700(param_1);
        if ((char)param_1[5] != '\0') {
          uVar10 = *(uint *)(param_1 + 6);
          *param_2 = *(int *)((longlong)param_1 + 0x2c);
          return uVar10;
        }
        *param_2 = *(int *)((longlong)param_1 + 0x2c);
        return 0;
      }
      *(uint *)(param_1 + 6) = uVar10;
      *param_2 = *(int *)((longlong)param_1 + 0x2c);
      return uVar10;
    }
  }
  return 0;
}

