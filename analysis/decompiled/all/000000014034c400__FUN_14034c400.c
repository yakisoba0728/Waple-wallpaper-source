// Function: FUN_14034c400
// Addr: 14034c400
// Size: 275 bytes


void FUN_14034c400(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  
  uVar9 = *(uint *)((longlong)param_1 + 0x34);
  if (uVar9 < *(uint *)(param_1 + 7)) {
    lVar2 = param_1[3];
    uVar3 = *(int *)((longlong)param_1 + 0x2c) + 1;
    do {
      uVar4 = uVar9 * 0xc;
      uVar5 = (ulonglong)uVar4;
      lVar1 = uVar5 + lVar2;
      uVar6 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)uVar4 + 0x10 + lVar2),
                                         *(undefined1 *)((ulonglong)uVar4 + 0x11 + lVar2)),
                                *(undefined1 *)(uVar5 + 0x12 + lVar2)),
                       *(undefined1 *)(uVar5 + 0x13 + lVar2));
      uVar8 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(uVar5 + 0x14 + lVar2),
                                         *(undefined1 *)(lVar1 + 0x15)),
                                *(undefined1 *)(lVar1 + 0x16)),*(undefined1 *)(lVar1 + 0x17));
      uVar4 = uVar6;
      if (uVar6 <= uVar3) {
        uVar4 = uVar3;
      }
      uVar3 = uVar4;
      if (uVar3 <= uVar8) {
        uVar4 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar1 + 0x18),
                                           *(undefined1 *)(lVar1 + 0x19)),
                                  *(undefined1 *)(lVar1 + 0x1a)),*(undefined1 *)(lVar1 + 0x1b));
        do {
          if ((uVar6 - uVar3) - 1 < uVar4) break;
          uVar7 = (uVar4 - uVar6) + uVar3;
          if (uVar7 != 0) {
            if (uVar7 < *(uint *)(*param_1 + 0x10)) {
              *(uint *)((longlong)param_1 + 0x2c) = uVar3;
              *(uint *)(param_1 + 6) = uVar7;
              *(uint *)((longlong)param_1 + 0x34) = uVar9;
              return;
            }
            break;
          }
          if (uVar3 == 0xffffffff) goto LAB_14034c4fa;
          uVar3 = uVar3 + 1;
        } while (uVar3 <= uVar8);
      }
      uVar9 = uVar9 + 1;
    } while (uVar9 < *(uint *)(param_1 + 7));
  }
LAB_14034c4fa:
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}

