// Function: FUN_14015a0d0
// Addr: 14015a0d0
// Size: 269 bytes


longlong * FUN_14015a0d0(longlong param_1,longlong *param_2,undefined8 *param_3)

{
  byte *pbVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong *plVar6;
  ulonglong uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  ulonglong uVar10;
  
  uVar2 = param_3[3];
  puVar8 = param_3;
  if (0xf < uVar2) {
    puVar8 = (undefined8 *)*param_3;
  }
  uVar3 = param_3[2];
  uVar7 = 0;
  uVar10 = 0xcbf29ce484222325;
  if (uVar3 != 0) {
    do {
      pbVar1 = (byte *)((longlong)puVar8 + uVar7);
      uVar7 = uVar7 + 1;
      uVar10 = (uVar10 ^ *pbVar1) * 0x100000001b3;
    } while (uVar7 < uVar3);
  }
  uVar10 = uVar10 & *(ulonglong *)(param_1 + 0x30);
  lVar9 = *(longlong *)(*(longlong *)(param_1 + 0x18) + 8 + uVar10 * 0x10);
  if (lVar9 != *(longlong *)(param_1 + 8)) {
    lVar4 = *(longlong *)(*(longlong *)(param_1 + 0x18) + uVar10 * 0x10);
    while( true ) {
      plVar6 = (longlong *)(lVar9 + 0x10);
      if (0xf < *(ulonglong *)(lVar9 + 0x28)) {
        plVar6 = (longlong *)*plVar6;
      }
      puVar8 = param_3;
      if (0xf < uVar2) {
        puVar8 = (undefined8 *)*param_3;
      }
      if ((uVar3 == *(ulonglong *)(lVar9 + 0x20)) &&
         ((uVar3 == 0 || (iVar5 = func_0x0001404210c0(puVar8,plVar6,uVar3), iVar5 == 0)))) {
        *(undefined1 *)(param_2 + 1) = 0;
        *param_2 = lVar9;
        return param_2;
      }
      if (lVar9 == lVar4) break;
      lVar9 = *(longlong *)(lVar9 + 8);
    }
  }
  if (*(longlong *)(param_1 + 0x10) == 0x1e1e1e1e1e1e1e1) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c3b0("unordered_map/set too long");
  }
  plVar6 = (longlong *)func_0x00014028aff0(0x88);
  return plVar6;
}

