// Function: FUN_14034c700
// Addr: 14034c700
// Size: 224 bytes


void FUN_14034c700(longlong *param_1)

{
  longlong lVar1;
  longlong lVar2;
  uint uVar3;
  ulonglong uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar5 = *(uint *)((longlong)param_1 + 0x34);
  if (uVar5 < *(uint *)(param_1 + 7)) {
    lVar2 = param_1[3];
    uVar6 = *(int *)((longlong)param_1 + 0x2c) + 1;
    do {
      uVar3 = uVar5 * 0xc;
      uVar4 = (ulonglong)uVar3;
      lVar1 = uVar4 + lVar2;
      uVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)((ulonglong)uVar3 + 0x10 + lVar2),
                                         *(undefined1 *)((ulonglong)uVar3 + 0x11 + lVar2)),
                                *(undefined1 *)(uVar4 + 0x12 + lVar2)),
                       *(undefined1 *)(uVar4 + 0x13 + lVar2));
      if (uVar3 <= uVar6) {
        uVar3 = uVar6;
      }
      uVar6 = uVar3;
      if (((uVar6 <= CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar1 + 0x14),
                                                *(undefined1 *)(lVar1 + 0x15)),
                                       *(undefined1 *)(lVar1 + 0x16)),*(undefined1 *)(lVar1 + 0x17))
           ) && (uVar3 = CONCAT31(CONCAT21(CONCAT11(*(undefined1 *)(lVar1 + 0x18),
                                                    *(undefined1 *)(lVar1 + 0x19)),
                                           *(undefined1 *)(lVar1 + 0x1a)),
                                  *(undefined1 *)(lVar1 + 0x1b)), uVar3 != 0)) &&
         (uVar3 < *(uint *)(*param_1 + 0x10))) {
        *(uint *)((longlong)param_1 + 0x2c) = uVar6;
        *(uint *)(param_1 + 6) = uVar3;
        *(uint *)((longlong)param_1 + 0x34) = uVar5;
        return;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 < *(uint *)(param_1 + 7));
  }
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}

