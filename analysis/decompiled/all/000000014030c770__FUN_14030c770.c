// Function: FUN_14030c770
// Addr: 14030c770
// Size: 594 bytes


ulonglong FUN_14030c770(longlong param_1,uint param_2,ulonglong param_3)

{
  byte *pbVar1;
  longlong lVar2;
  undefined8 uVar3;
  ushort uVar4;
  short sVar5;
  uint uVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  ulonglong uVar9;
  uint local_res8 [2];
  
  lVar2 = *(longlong *)(param_1 + 0x18);
  uVar9 = (ulonglong)param_2;
  if (*(uint *)(lVar2 + 8) < *(ushort *)(lVar2 + 0x1a) + 4 + (uint)*(ushort *)(lVar2 + 0x62)) {
    uVar7 = FUN_1402f0870(lVar2,4,0);
    local_res8[0] = (uint)uVar7;
    if (local_res8[0] != 0) {
      return uVar7;
    }
  }
  else {
    local_res8[0] = 0;
  }
  *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + (ulonglong)*(ushort *)(lVar2 + 0x1a) * 8) =
       *(undefined8 *)(param_1 + 0x58);
  *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 8 + (ulonglong)*(ushort *)(lVar2 + 0x1a) * 8) =
       *(undefined8 *)(param_1 + 0x60);
  *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0x10 + (ulonglong)*(ushort *)(lVar2 + 0x1a) * 8) =
       *(undefined8 *)(param_1 + 0xf8);
  *(undefined8 *)(*(longlong *)(lVar2 + 0x20) + 0x18 + (ulonglong)*(ushort *)(lVar2 + 0x1a) * 8) =
       *(undefined8 *)(param_1 + 0x100);
  lVar2 = *(longlong *)(param_1 + 0xd8);
  uVar3 = *(undefined8 *)(param_1 + 0x28);
  uVar8 = *(undefined8 *)(lVar2 + 0x10);
  if (*(int *)(lVar2 + 0x218) != 0) {
    FUN_1402f7f90(uVar8,*(undefined8 *)(lVar2 + 0x220));
    *(undefined8 *)(lVar2 + 0x220) = 0;
  }
  *(undefined4 *)(lVar2 + 0x218) = 0;
  uVar7 = FUN_1402f5c50(uVar3,*(undefined4 *)(param_1 + 0xe0));
  local_res8[0] = (uint)uVar7;
  if (local_res8[0] == 0) {
    uVar4 = FUN_1402f5ac0(uVar3,local_res8);
    uVar7 = (ulonglong)local_res8[0];
    if ((local_res8[0] == 0) && (uVar4 != 0)) {
      uVar6 = (uint)uVar4;
      if (*(uint *)(param_1 + 0x30) < uVar6) {
        uVar7 = 0x16;
      }
      else {
        uVar8 = FUN_1402f7ff0(uVar8,1,0,uVar6,0,local_res8);
        *(undefined8 *)(lVar2 + 0x220) = uVar8;
        uVar7 = (ulonglong)local_res8[0];
        if (local_res8[0] == 0) {
          uVar7 = FUN_1402f54b0(uVar3,uVar8,uVar6);
          local_res8[0] = (uint)uVar7;
          if (local_res8[0] == 0) {
            *(uint *)(lVar2 + 0x218) = uVar6;
            lVar2 = *(longlong *)(param_1 + 0x18);
            sVar5 = (*(short *)(lVar2 + 0x1a) - (short)param_2) + 4;
            *(short *)(param_1 + 0xa0) = sVar5;
            *(short *)(param_1 + 0xa2) = *(short *)(lVar2 + 0x18) - (short)(param_3 & 0xffffffff);
            *(ulonglong *)(param_1 + 0xa8) = *(longlong *)(lVar2 + 0x40) + uVar9 * 8;
            *(ulonglong *)(param_1 + 0xb0) = *(longlong *)(lVar2 + 0x20) + uVar9 * 8;
            *(ulonglong *)(param_1 + 0xb8) = *(longlong *)(lVar2 + 0x48) + uVar9 * 8;
            *(ulonglong *)(param_1 + 0xc0) = *(longlong *)(lVar2 + 0x28) + uVar9;
            lVar2 = *(longlong *)(lVar2 + 0x30);
            *(short *)(param_1 + 0xd0) = (short)param_2;
            uVar9 = 0;
            *(ulonglong *)(param_1 + 200) = lVar2 + (param_3 & 0xffffffff) * 2;
            if (sVar5 != 4) {
              do {
                pbVar1 = (byte *)(uVar9 + *(longlong *)(param_1 + 0xc0));
                *pbVar1 = *pbVar1 & 0xe7;
                uVar6 = (int)uVar9 + 1;
                uVar9 = (ulonglong)uVar6;
              } while (uVar6 < *(ushort *)(param_1 + 0xa0) - 4);
            }
            uVar7 = FUN_14030b6f0(param_1,1);
          }
        }
      }
    }
  }
  return uVar7;
}

