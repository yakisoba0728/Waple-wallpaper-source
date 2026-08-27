// Function: FUN_1403451c0
// Addr: 1403451c0
// Size: 339 bytes


ulonglong FUN_1403451c0(longlong param_1,uint param_2,uint *param_3,uint *param_4,uint *param_5)

{
  longlong lVar1;
  longlong lVar2;
  longlong lVar3;
  ulonglong in_RAX;
  ulonglong uVar4;
  ushort uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  
  puVar10 = *(undefined1 **)(param_5 + 2);
  if (puVar10 == (undefined1 *)0x0) {
    lVar2 = *(longlong *)(param_1 + 0x4e0);
    if (lVar2 != 0) {
      uVar7 = (uint)*(ushort *)(lVar2 + 2);
      uVar8 = 0;
      lVar3 = *(longlong *)(lVar2 + 8);
      if (*(ushort *)(lVar2 + 2) != 0) {
        do {
          uVar6 = (uVar7 - uVar8 >> 1) + uVar8;
          uVar4 = (ulonglong)(uVar6 * 6);
          lVar1 = uVar4 + lVar3;
          in_RAX = (ulonglong)*(byte *)(uVar4 + lVar3) << 8;
          uVar9 = (uint)*(byte *)(uVar4 + 1 + lVar3) | (uint)in_RAX;
          if (uVar9 < param_2) {
            uVar8 = uVar6 + 1;
          }
          else {
            uVar7 = uVar6;
            if (uVar9 <= param_2) {
              in_RAX = 0;
              uVar5 = CONCAT11(*(undefined1 *)(lVar1 + 4),*(undefined1 *)(lVar1 + 5));
              if (uVar5 != 0) {
                uVar7 = (uint)CONCAT11(*(undefined1 *)(lVar1 + 2),*(undefined1 *)(lVar1 + 3));
                uVar8 = uVar5 + uVar7;
                in_RAX = (ulonglong)uVar8;
                if (uVar8 <= *(ushort *)(lVar2 + 4)) {
                  *param_5 = (uint)uVar5;
                  param_5[1] = 0;
                  puVar10 = (undefined1 *)((ulonglong)(uVar7 * 4) + *(longlong *)(lVar2 + 0x10));
                  *(undefined1 **)(param_5 + 2) = puVar10;
                  goto LAB_14034529f;
                }
              }
              break;
            }
          }
        } while (uVar8 < uVar7);
      }
    }
  }
  else {
LAB_14034529f:
    in_RAX = (ulonglong)*param_5;
    if (param_5[1] < *param_5) {
      *(undefined1 **)(param_5 + 2) = puVar10 + 2;
      *param_3 = (uint)CONCAT11(*puVar10,puVar10[1]);
      puVar10 = *(undefined1 **)(param_5 + 2);
      *(undefined1 **)(param_5 + 2) = puVar10 + 2;
      uVar8 = (uint)CONCAT11(*puVar10,puVar10[1]);
      *param_4 = uVar8;
      in_RAX = (ulonglong)*(uint *)(param_1 + 0x10);
      if ((*param_3 < *(uint *)(param_1 + 0x10)) &&
         ((uVar8 == 0xffff ||
          (in_RAX = (ulonglong)*(ushort *)(param_1 + 0x388), uVar8 < *(ushort *)(param_1 + 0x388))))
         ) {
        param_5[1] = param_5[1] + 1;
        return CONCAT71((int7)(in_RAX >> 8),1);
      }
    }
  }
  return in_RAX & 0xffffffffffffff00;
}

