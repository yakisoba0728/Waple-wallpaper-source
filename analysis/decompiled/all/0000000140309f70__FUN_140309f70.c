// Function: FUN_140309f70
// Addr: 140309f70
// Size: 561 bytes


void FUN_140309f70(longlong param_1)

{
  int *piVar1;
  longlong lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  byte bVar10;
  longlong lVar11;
  short local_res8;
  longlong local_58;
  longlong local_50;
  longlong local_48;
  uint local_40;
  
  uVar6 = *(uint *)(param_1 + 0x324);
  if (uVar6 != 7) {
    if (uVar6 != 0) {
      *(uint *)(param_1 + 0x324) = uVar6 | 1 << (*(byte *)(param_1 + 0x1f0) & 1);
    }
    if (*(short *)(param_1 + 0xea) != 0) {
      lVar2 = *(longlong *)(param_1 + 0xf0);
      local_48 = *(longlong *)(param_1 + 0x100);
      lVar11 = *(longlong *)(param_1 + 0xf8);
      if ((*(byte *)(param_1 + 0x1f0) & 1) == 0) {
        lVar2 = lVar2 + 4;
        lVar11 = lVar11 + 4;
        local_48 = local_48 + 4;
        bVar10 = 0x10;
      }
      else {
        bVar10 = 8;
      }
      uVar6 = 0;
      local_40 = (uint)*(ushort *)(param_1 + 0xe8);
      local_res8 = 0;
      local_58 = lVar2;
      local_50 = lVar11;
      do {
        uVar3 = (uint)*(ushort *)(*(longlong *)(param_1 + 0x110) + (longlong)local_res8 * 2) -
                (uint)*(ushort *)(param_1 + 0x118);
        uVar5 = *(ushort *)(param_1 + 0xe8) - 1;
        if (uVar3 < *(ushort *)(param_1 + 0xe8)) {
          uVar5 = uVar3;
        }
        uVar3 = uVar6;
        if (uVar6 <= uVar5) {
          uVar7 = (ulonglong)uVar6;
          uVar8 = uVar6;
          while (uVar3 = uVar8 + 1,
                (*(byte *)((ulonglong)uVar8 + *(longlong *)(param_1 + 0x108)) & bVar10) == 0) {
            uVar8 = uVar3;
            if (uVar5 < uVar3) goto LAB_14030a14d;
          }
          uVar9 = (ulonglong)uVar8;
          if (uVar5 < uVar3) goto LAB_14030a10f;
          do {
            if ((*(byte *)((ulonglong)uVar3 + *(longlong *)(param_1 + 0x108)) & bVar10) != 0) {
              FUN_140311b10(&local_58,(int)uVar9 + 1,uVar3 - 1,uVar9,uVar3);
              uVar9 = (ulonglong)uVar3;
            }
            uVar3 = uVar3 + 1;
          } while (uVar3 <= uVar5);
          if ((uint)uVar9 == uVar8) {
LAB_14030a10f:
            uVar8 = (uint)uVar9;
            iVar4 = *(int *)(lVar11 + uVar9 * 8) - *(int *)(lVar2 + uVar9 * 8);
            if (iVar4 != 0) {
              while (uVar6 < uVar8) {
                uVar6 = (int)uVar7 + 1;
                piVar1 = (int *)(lVar11 + uVar7 * 8);
                *piVar1 = *piVar1 + iVar4;
                uVar7 = (ulonglong)uVar6;
              }
              while (uVar8 = uVar8 + 1, uVar8 <= uVar5) {
                piVar1 = (int *)(lVar11 + (ulonglong)uVar8 * 8);
                *piVar1 = *piVar1 + iVar4;
              }
            }
          }
          else {
            FUN_140311b10(&local_58,(uint)uVar9 + 1 & 0xffff,uVar5,uVar9,uVar8);
            if (uVar8 != 0) {
              FUN_140311b10(&local_58,uVar7,uVar8 - 1,uVar9,uVar8);
            }
          }
        }
LAB_14030a14d:
        uVar6 = uVar3;
        local_res8 = local_res8 + 1;
        if ((int)(uint)*(ushort *)(param_1 + 0xea) <= (int)local_res8) {
          return;
        }
      } while( true );
    }
  }
  return;
}

