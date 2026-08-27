// Function: FUN_14035ac00
// Addr: 14035ac00
// Size: 970 bytes


ulonglong FUN_14035ac00(int *param_1,undefined1 *param_2,uint param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  uint uVar7;
  ulonglong uVar8;
  uint uVar9;
  uint local_res8;
  byte local_res18 [8];
  uint local_res20;
  int local_48 [4];
  
  uVar6 = param_1[0x13];
  uVar8 = 0;
  uVar3 = param_1[0x14];
  uVar9 = param_1[0x12];
  local_res20 = uVar6;
  if (param_3 != 0) {
    iVar4 = *param_1;
    if (iVar4 == 0) {
      iVar4 = FUN_1402f5c50(*(undefined8 *)(param_1 + 0x32),2);
      if ((iVar4 == 0) &&
         (iVar4 = FUN_1402f5cf0(*(undefined8 *)(param_1 + 0x32),local_res18,1), iVar4 == 1)) {
        uVar6 = local_res18[0] & 0x1f;
        param_1[0xd] = local_res18[0] & 0x80;
        iVar4 = 1 << (sbyte)uVar6;
        param_1[0xc] = uVar6;
        param_1[0xe] = iVar4 + -0x100;
        if (uVar6 < 0x11) {
          param_1[0xf] = 9;
          uVar3 = 0;
          param_1[0x10] = (uint)((local_res18[0] & 0x80) != 0);
          iVar2 = 0x100;
          local_res8 = 0;
          if (uVar6 < 10) {
            iVar2 = iVar4 + -0xff;
          }
          param_1[0x11] = iVar2;
          uVar6 = FUN_14035aaa0(param_1);
          if (uVar6 < 0x100) {
            if (param_2 != (undefined1 *)0x0) {
              *param_2 = (char)uVar6;
            }
            uVar8 = 1;
            uVar9 = uVar6;
            local_res20 = uVar6;
            if (1 < param_3) {
              *param_1 = 1;
              goto LAB_14035ad5b;
            }
            goto LAB_14035ac5f;
          }
        }
      }
      *param_1 = 3;
    }
    else {
      local_res8 = uVar3;
      if (iVar4 == 1) goto LAB_14035ad5b;
      if (iVar4 == 2) {
        do {
          iVar4 = param_1[0x1e];
          while (iVar4 != 0) {
            param_1[0x1e] = iVar4 - 1U;
            if (param_2 != (undefined1 *)0x0) {
              param_2[uVar8] =
                   *(undefined1 *)((ulonglong)(iVar4 - 1U) + *(longlong *)(param_1 + 0x1c));
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
            uVar3 = local_res8;
            if (uVar7 == param_3) goto LAB_14035ac5f;
            iVar4 = param_1[0x1e];
          }
          if ((uint)param_1[0x10] < (uint)param_1[0xe]) {
            uVar6 = param_1[0x1a];
            if (uVar6 <= (uint)param_1[0x10]) {
              uVar3 = (uVar6 >> 2) + uVar6;
              if (uVar6 == 0) {
                uVar3 = 0x200;
              }
              lVar5 = FUN_1402f80b0(*(undefined8 *)(param_1 + 0x34),3,uVar6,(ulonglong)uVar3,
                                    *(undefined8 *)(param_1 + 0x16),local_48);
              *(longlong *)(param_1 + 0x16) = lVar5;
              if (local_48[0] != 0) goto LAB_14035af86;
              lVar1 = lVar5 + (ulonglong)uVar3 * 2;
              *(longlong *)(param_1 + 0x18) = lVar1;
              FUN_1404210f0(lVar1,lVar5 + (ulonglong)uVar6 * 2,uVar6);
              param_1[0x1a] = uVar3;
            }
            *(short *)(*(longlong *)(param_1 + 0x16) + (ulonglong)(uint)param_1[0x10] * 2) =
                 (short)uVar9;
            *(char *)((ulonglong)(uint)param_1[0x10] + *(longlong *)(param_1 + 0x18)) =
                 (char)local_res20;
            param_1[0x10] = param_1[0x10] + 1;
            uVar6 = local_res20;
          }
          *param_1 = 1;
          uVar9 = local_res8;
LAB_14035ad5b:
          while( true ) {
            uVar3 = FUN_14035aaa0(param_1);
            if ((int)uVar3 < 0) goto LAB_14035af86;
            if ((uVar3 != 0x100) || (param_1[0xd] == 0)) break;
            param_1[0x10] = 0;
            uVar6 = 0;
            *(undefined1 *)(param_1 + 8) = 1;
            local_res20 = 0;
            uVar9 = 0;
          }
          local_res8 = uVar3;
          if (0xff < uVar3) {
            if ((uint)param_1[0x10] <= uVar3 - 0x100) {
              if (uVar3 - 0x100 != param_1[0x10]) {
                *param_1 = 3;
                break;
              }
              if ((*(ulonglong *)(param_1 + 0x20) <= (ulonglong)(uint)param_1[0x1e]) &&
                 (iVar4 = FUN_14035afd0(param_1), iVar4 < 0)) {
                *param_1 = 3;
                break;
              }
              *(char *)((ulonglong)(uint)param_1[0x1e] + *(longlong *)(param_1 + 0x1c)) =
                   (char)uVar6;
              param_1[0x1e] = param_1[0x1e] + 1;
              uVar3 = uVar9;
            }
            for (; 0xff < uVar3;
                uVar3 = (uint)*(ushort *)
                               (*(longlong *)(param_1 + 0x16) + (ulonglong)(uVar3 - 0x100) * 2)) {
              if ((*(longlong *)(param_1 + 0x16) == 0) ||
                 ((*(ulonglong *)(param_1 + 0x20) <= (ulonglong)(uint)param_1[0x1e] &&
                  (iVar4 = FUN_14035afd0(param_1), iVar4 < 0)))) goto LAB_14035af86;
              *(undefined1 *)((ulonglong)(uint)param_1[0x1e] + *(longlong *)(param_1 + 0x1c)) =
                   *(undefined1 *)((ulonglong)(uVar3 - 0x100) + *(longlong *)(param_1 + 0x18));
              param_1[0x1e] = param_1[0x1e] + 1;
            }
          }
          uVar6 = uVar3;
          local_res20 = uVar6;
          if ((*(ulonglong *)(param_1 + 0x20) <= (ulonglong)(uint)param_1[0x1e]) &&
             (iVar4 = FUN_14035afd0(param_1), iVar4 < 0)) goto LAB_14035af86;
          *(char *)((ulonglong)(uint)param_1[0x1e] + *(longlong *)(param_1 + 0x1c)) = (char)uVar6;
          param_1[0x1e] = param_1[0x1e] + 1;
          *param_1 = 2;
        } while( true );
      }
    }
  }
  goto LAB_14035ac5f;
LAB_14035af86:
  *param_1 = 3;
  uVar3 = local_res8;
LAB_14035ac5f:
  param_1[0x13] = local_res20;
  param_1[0x12] = uVar9;
  param_1[0x14] = uVar3;
  return uVar8;
}

