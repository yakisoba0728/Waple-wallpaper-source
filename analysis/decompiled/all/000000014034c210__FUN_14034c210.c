// Function: FUN_14034c210
// Addr: 14034c210
// Size: 485 bytes


uint FUN_14034c210(longlong *param_1,int *param_2,byte param_3)

{
  longlong lVar1;
  undefined1 *puVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  
  lVar3 = param_1[3];
  uVar10 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar3 + 0xc),*(undefined1 *)(lVar3 + 0xd)),
                             *(undefined1 *)(lVar3 + 0xe)),*(undefined1 *)(lVar3 + 0xf));
  if (uVar10 != 0) {
    lVar1 = lVar3 + 0x18;
    uVar11 = (uint)param_3 + *param_2;
    uVar5 = 0;
    uVar8 = uVar10;
    do {
      uVar7 = uVar8 + uVar5 >> 1;
      uVar4 = uVar7 * 0xc;
      uVar6 = (ulonglong)uVar4;
      uVar12 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)uVar4 + lVar3 + 0x10),
                                          *(undefined1 *)((ulonglong)uVar4 + lVar3 + 0x11)),
                                 *(undefined1 *)(uVar6 + lVar3 + 0x12)),
                        *(undefined1 *)(uVar6 + lVar3 + 0x13));
      uVar9 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((uVar6 - 4) + lVar1),
                                         *(undefined1 *)((uVar6 - 3) + lVar1)),
                                *(undefined1 *)((uVar6 - 2) + lVar1)),
                       *(undefined1 *)((uVar6 - 1) + lVar1));
      uVar4 = uVar7;
      if (uVar12 <= uVar11) {
        puVar2 = (undefined1 *)(uVar6 + lVar1);
        if (uVar11 <= uVar9) {
          uVar5 = CONCAT31(CONCAT21(CONCAT11(*puVar2,puVar2[1]),puVar2[2]),puVar2[3]);
          if ((uVar12 - uVar11) - 1 < uVar5) {
            uVar5 = 0;
          }
          else {
            uVar5 = (uVar5 - uVar12) + uVar11;
          }
          goto LAB_14034c35d;
        }
        uVar5 = uVar7 + 1;
        uVar4 = uVar8;
      }
      uVar8 = uVar4;
    } while (uVar5 < uVar8);
    uVar5 = 0;
LAB_14034c35d:
    if (param_3 == 0) {
      return uVar5;
    }
    if ((uVar11 <= uVar9) || (uVar7 = uVar7 + 1, uVar7 != uVar10)) {
      *(uint *)((longlong)param_1 + 0x34) = uVar7;
      *(undefined1 *)(param_1 + 5) = 1;
      *(uint *)((longlong)param_1 + 0x2c) = uVar11;
      uVar10 = 0;
      if (uVar5 < *(uint *)(*param_1 + 0x10)) {
        uVar10 = uVar5;
      }
      if (uVar10 == 0) {
        FUN_14034c400(param_1);
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

