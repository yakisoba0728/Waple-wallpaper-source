// Function: FUN_1403ab720
// Addr: 1403ab720
// Size: 376 bytes


void FUN_1403ab720(longlong param_1,longlong param_2,longlong param_3,longlong param_4)

{
  uint *puVar1;
  longlong lVar2;
  undefined8 *puVar3;
  uint uVar4;
  ulonglong uVar5;
  uint uVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  
  lVar7 = *(longlong *)(param_2 + 0x20);
  if (*(char *)(lVar7 + 0x58) != '\0') {
    if ((*(byte *)(lVar7 + 0x18) & 0x40) != 0) {
      uVar9 = *(uint *)(lVar7 + 0x60);
      if (*(uint *)(lVar7 + 0x60) == 0xffffffff) {
        uVar9 = 0xffffffff;
      }
      uVar5 = 0;
      if (uVar9 != 0) {
        do {
          uVar4 = (int)uVar5 + 1;
          puVar1 = (uint *)(*(longlong *)(lVar7 + 0x70) + 4 + uVar5 * 0x14);
          *puVar1 = *puVar1 | 2;
          uVar5 = (ulonglong)uVar4;
        } while (uVar4 < uVar9);
      }
    }
    FUN_14040b530(param_2);
    *(undefined4 *)(param_2 + 0xb0) = 0;
    uVar9 = (uint)*(byte *)(param_1 + 5) * 0x10000 + (uint)*(byte *)(param_1 + 6) * 0x100 +
            (uint)*(byte *)(param_1 + 4) * 0x1000000 + (uint)*(byte *)(param_1 + 7);
    if (uVar9 != 0) {
      uVar4 = 0;
      param_1 = param_1 + 8;
      do {
        lVar7 = *(longlong *)(param_2 + 0x18);
        if (*(int *)(lVar7 + 0x18) == -1) {
          lVar2 = FUN_140398ae0(lVar7 + 0x80);
          iVar8 = (uint)*(byte *)(lVar2 + 5) + (uint)*(byte *)(lVar2 + 4) * 0x100;
          if (iVar8 == 0) {
            iVar8 = 0;
          }
          *(int *)(lVar7 + 0x18) = iVar8;
        }
        if (uVar4 < *(uint *)(param_4 + 8)) {
          lVar7 = *(longlong *)((ulonglong)uVar4 * 8 + *(longlong *)(param_4 + 0x10));
          if (lVar7 == 0) {
            uVar6 = (uint)*(byte *)(param_1 + 0xc) * 0x1000000 +
                    (uint)*(byte *)(param_1 + 0xe) * 0x100 +
                    (uint)*(byte *)(param_1 + 0xd) * 0x10000 + (uint)*(byte *)(param_1 + 0xf);
            if (uVar6 < 0x750750) {
                    /* WARNING: Subroutine does not return */
              thunk_FUN_1402dd8b0(1,uVar6 * 0x230 + 8);
            }
            lVar7 = 0;
          }
        }
        else {
          lVar7 = 0;
        }
        if (uVar4 < *(uint *)(param_3 + 4)) {
          puVar3 = (undefined8 *)((ulonglong)uVar4 * 0x10 + *(longlong *)(param_3 + 8));
        }
        else {
          puVar3 = &DAT_14045dde0;
        }
        *(undefined8 **)(param_2 + 0x80) = puVar3;
        func_0x0001403a5600(param_1,param_2,lVar7);
        if (*(char *)(*(longlong *)(param_2 + 0x20) + 0x58) == '\0') {
          return;
        }
        uVar4 = uVar4 + 1;
        param_1 = param_1 + (ulonglong)*(byte *)(param_1 + 7) +
                  ((ulonglong)CONCAT11(*(undefined1 *)(param_1 + 4),*(undefined1 *)(param_1 + 5)) *
                   0x100 + (ulonglong)*(byte *)(param_1 + 6)) * 0x100;
      } while (uVar4 < uVar9);
    }
  }
  return;
}

