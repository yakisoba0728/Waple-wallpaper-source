// Function: FUN_14035acd0
// Addr: 14035acd0
// Size: 884 bytes


ulonglong FUN_14035acd0(int *param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ulonglong uVar6;
  uint uVar7;
  uint local_res8;
  byte local_res18 [8];
  uint local_res20;
  undefined1 auStack_48 [16];
  
  uVar4 = param_1[0x13];
  uVar6 = 0;
  uVar2 = param_1[0x14];
  uVar7 = param_1[0x12];
  local_res20 = uVar4;
  if (param_3 != 0) {
    iVar3 = *param_1;
    if (iVar3 == 0) {
      iVar3 = func_0x0001402f5d20(*(undefined8 *)(param_1 + 0x32),2);
      if ((iVar3 == 0) &&
         (iVar3 = FUN_1402f5dc0(*(undefined8 *)(param_1 + 0x32),local_res18,1), iVar3 == 1)) {
        uVar4 = local_res18[0] & 0x1f;
        param_1[0xd] = local_res18[0] & 0x80;
        iVar3 = 1 << (sbyte)uVar4;
        param_1[0xc] = uVar4;
        param_1[0xe] = iVar3 + -0x100;
        if (uVar4 < 0x11) {
          param_1[0xf] = 9;
          uVar2 = 0;
          param_1[0x10] = (uint)((local_res18[0] & 0x80) != 0);
          iVar1 = 0x100;
          local_res8 = 0;
          if (uVar4 < 10) {
            iVar1 = iVar3 + -0xff;
          }
          param_1[0x11] = iVar1;
          uVar4 = FUN_14035ab70(param_1);
          if (uVar4 < 0x100) {
            if (param_2 != (undefined1 *)0x0) {
              *param_2 = (char)uVar4;
            }
            uVar6 = 1;
            uVar7 = uVar4;
            local_res20 = uVar4;
            if (1 < param_3) {
              *param_1 = 1;
              goto LAB_14035ae2b;
            }
            goto LAB_14035ad2f;
          }
        }
      }
      *param_1 = 3;
    }
    else {
      local_res8 = uVar2;
      if (iVar3 == 1) goto LAB_14035ae2b;
      if (iVar3 == 2) {
        while( true ) {
          iVar3 = param_1[0x1e];
          while (iVar3 != 0) {
            param_1[0x1e] = iVar3 - 1U;
            if (param_2 != (undefined1 *)0x0) {
              param_2[uVar6] =
                   *(undefined1 *)((ulonglong)(iVar3 - 1U) + *(longlong *)(param_1 + 0x1c));
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
            uVar2 = local_res8;
            if (uVar5 == param_3) goto LAB_14035ad2f;
            iVar3 = param_1[0x1e];
          }
          if ((uint)param_1[0x10] < (uint)param_1[0xe]) {
            uVar4 = param_1[0x1a];
            if (uVar4 <= (uint)param_1[0x10]) {
              iVar3 = (uVar4 >> 2) + uVar4;
              if (uVar4 == 0) {
                iVar3 = 0x200;
              }
                    /* WARNING: Subroutine does not return */
              FUN_1402f8180(*(undefined8 *)(param_1 + 0x34),3,uVar4,iVar3,
                            *(undefined8 *)(param_1 + 0x16),auStack_48);
            }
            *(short *)(*(longlong *)(param_1 + 0x16) + (ulonglong)(uint)param_1[0x10] * 2) =
                 (short)uVar7;
            *(char *)((ulonglong)(uint)param_1[0x10] + *(longlong *)(param_1 + 0x18)) =
                 (char)local_res20;
            param_1[0x10] = param_1[0x10] + 1;
            uVar4 = local_res20;
          }
          *param_1 = 1;
          uVar7 = local_res8;
LAB_14035ae2b:
          while( true ) {
            uVar2 = FUN_14035ab70(param_1);
            if ((int)uVar2 < 0) goto LAB_14035b056;
            if ((uVar2 != 0x100) || (param_1[0xd] == 0)) break;
            param_1[0x10] = 0;
            uVar4 = 0;
            *(undefined1 *)(param_1 + 8) = 1;
            local_res20 = 0;
            uVar7 = 0;
          }
          local_res8 = uVar2;
          if (0xff < uVar2) {
            if ((uint)param_1[0x10] <= uVar2 - 0x100) {
              if (uVar2 - 0x100 != param_1[0x10]) {
                *param_1 = 3;
                goto LAB_14035ad2f;
              }
              if ((*(ulonglong *)(param_1 + 0x20) <= (ulonglong)(uint)param_1[0x1e]) &&
                 (iVar3 = func_0x00014035b0a0(param_1), iVar3 < 0)) {
                *param_1 = 3;
                goto LAB_14035ad2f;
              }
              *(char *)((ulonglong)(uint)param_1[0x1e] + *(longlong *)(param_1 + 0x1c)) =
                   (char)uVar4;
              param_1[0x1e] = param_1[0x1e] + 1;
              uVar2 = uVar7;
            }
            for (; 0xff < uVar2;
                uVar2 = (uint)*(ushort *)
                               (*(longlong *)(param_1 + 0x16) + (ulonglong)(uVar2 - 0x100) * 2)) {
              if ((*(longlong *)(param_1 + 0x16) == 0) ||
                 ((*(ulonglong *)(param_1 + 0x20) <= (ulonglong)(uint)param_1[0x1e] &&
                  (iVar3 = func_0x00014035b0a0(param_1), iVar3 < 0)))) goto LAB_14035b056;
              *(undefined1 *)((ulonglong)(uint)param_1[0x1e] + *(longlong *)(param_1 + 0x1c)) =
                   *(undefined1 *)((ulonglong)(uVar2 - 0x100) + *(longlong *)(param_1 + 0x18));
              param_1[0x1e] = param_1[0x1e] + 1;
            }
          }
          uVar4 = uVar2;
          local_res20 = uVar4;
          if ((*(ulonglong *)(param_1 + 0x20) <= (ulonglong)(uint)param_1[0x1e]) &&
             (iVar3 = func_0x00014035b0a0(param_1), iVar3 < 0)) break;
          *(char *)((ulonglong)(uint)param_1[0x1e] + *(longlong *)(param_1 + 0x1c)) = (char)uVar4;
          param_1[0x1e] = param_1[0x1e] + 1;
          *param_1 = 2;
        }
LAB_14035b056:
        *param_1 = 3;
        uVar2 = local_res8;
      }
    }
  }
LAB_14035ad2f:
  param_1[0x13] = local_res20;
  param_1[0x12] = uVar7;
  param_1[0x14] = uVar2;
  return uVar6;
}

