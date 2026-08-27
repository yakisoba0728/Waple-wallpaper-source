// Function: FUN_1403c9880
// Addr: 1403c9880
// Size: 286 bytes


ulonglong FUN_1403c9880(longlong *param_1,uint param_2,uint *param_3)

{
  longlong lVar1;
  byte bVar2;
  int iVar3;
  longlong lVar4;
  uint uVar5;
  ulonglong in_RAX;
  int iVar7;
  uint uVar8;
  int iVar9;
  ulonglong uVar6;
  
  iVar3 = (int)param_1[5];
  iVar9 = 0;
  lVar4 = *param_1;
  iVar7 = iVar3 + -1;
  if (-1 < iVar7) {
    do {
      uVar5 = (uint)(iVar7 + iVar9) >> 1;
      uVar6 = (ulonglong)uVar5;
      lVar1 = lVar4 + uVar6 * 2;
      in_RAX = (ulonglong)*(byte *)(lVar4 + uVar6 * 2) << 8;
      if ((uint)*(byte *)(lVar4 + 1 + uVar6 * 2) + (int)in_RAX < param_2) {
        iVar9 = uVar5 + 1;
      }
      else {
        if ((uint)*(byte *)(lVar1 + 1 + (ulonglong)(iVar3 + 1) * 2) +
            (uint)*(byte *)(lVar1 + (ulonglong)(iVar3 + 1) * 2) * 0x100 <= param_2) {
          lVar4 = (ulonglong)uVar5 * 2;
          uVar8 = (uint)*(byte *)(param_1[3] + 1 + lVar4) +
                  (uint)*(byte *)(param_1[3] + lVar4) * 0x100;
          if (uVar8 == 0) {
            bVar2 = *(byte *)(param_1[2] + lVar4);
            iVar7 = param_2 + *(byte *)(param_1[2] + 1 + lVar4);
          }
          else {
            param_2 = uVar5 + ((((uVar8 >> 1) - (uint)*(byte *)(param_1[1] + 1 + lVar4)) +
                               (uint)*(byte *)(param_1[1] + lVar4) * -0x100) - iVar3) + param_2;
            in_RAX = (ulonglong)param_2;
            if (*(uint *)((longlong)param_1 + 0x2c) <= param_2) break;
            in_RAX = param_1[4];
            iVar7 = (uint)*(byte *)(in_RAX + 1 + (ulonglong)param_2 * 2) +
                    (uint)*(byte *)(in_RAX + (ulonglong)param_2 * 2) * 0x100;
            if (iVar7 == 0) break;
            bVar2 = *(byte *)(param_1[2] + lVar4);
            iVar7 = iVar7 + (uint)*(byte *)(param_1[2] + 1 + lVar4);
          }
          uVar5 = (uint)bVar2 * 0x100 + iVar7 & 0xffff;
          in_RAX = (ulonglong)uVar5;
          if (uVar5 != 0) {
            *param_3 = uVar5;
            return CONCAT71((uint7)(uint3)(uVar5 >> 8),1);
          }
          break;
        }
        iVar7 = uVar5 - 1;
      }
    } while (iVar9 <= iVar7);
  }
  return in_RAX & 0xffffffffffffff00;
}

