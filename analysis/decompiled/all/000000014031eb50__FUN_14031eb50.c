// Function: FUN_14031eb50
// Addr: 14031eb50
// Size: 1744 bytes


int FUN_14031eb50(undefined8 param_1,longlong param_2,uint param_3,undefined8 *param_4,
                 undefined8 param_5,char param_6,int param_7)

{
  char cVar1;
  byte bVar2;
  char cVar3;
  undefined1 uVar4;
  ushort uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  longlong lVar9;
  undefined8 uVar10;
  int iVar11;
  ulonglong uVar12;
  uint uVar13;
  undefined4 uVar14;
  int local_res8 [2];
  uint local_res10;
  undefined8 in_stack_ffffffffffffff48;
  undefined4 uVar16;
  undefined8 uVar15;
  undefined8 in_stack_ffffffffffffff50;
  undefined4 uVar17;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  longlong lStack_70;
  longlong local_68 [2];
  uint local_58;
  undefined8 local_48;
  longlong local_40;
  
  uVar16 = (undefined4)((ulonglong)in_stack_ffffffffffffff48 >> 0x20);
  uVar17 = (undefined4)((ulonglong)in_stack_ffffffffffffff50 >> 0x20);
  uVar10 = *(undefined8 *)(param_2 + 0x30);
  FUN_1404217a0(param_4,0,0x1138);
  local_98 = 0;
  uStack_90 = 0;
  local_88 = 0;
  uStack_80 = 0;
  local_78 = 0;
  lStack_70 = 0;
  iVar6 = FUN_1402f54a0(param_2);
  param_4[2] = uVar10;
  cVar1 = (char)param_7;
  *(char *)((longlong)param_4 + 0x2c) = (char)param_7;
  *param_4 = param_1;
  param_4[1] = param_2;
  *(int *)(param_4 + 3) = iVar6;
  local_res8[0] = FUN_1402f5610(param_2,&DAT_14043d550,param_4);
  if (local_res8[0] != 0) goto LAB_14031ec6d;
  if (cVar1 == '\0') {
    bVar2 = FUN_1402f55a0(param_2,local_res8);
    if (local_res8[0] != 0) goto LAB_14031ec6d;
    if (((*(char *)((longlong)param_4 + 0x24) == '\x01') &&
        (3 < *(byte *)((longlong)param_4 + 0x26))) && (bVar2 < 5)) goto LAB_14031ec3f;
  }
  else if ((*(char *)((longlong)param_4 + 0x24) == '\x02') &&
          (4 < *(byte *)((longlong)param_4 + 0x26))) {
    uVar5 = FUN_1402f5ac0(param_2,local_res8);
    *(uint *)(param_4 + 5) = (uint)uVar5;
    if (local_res8[0] != 0) goto LAB_14031ec6d;
LAB_14031ec3f:
    local_res8[0] = FUN_1402f5c50(param_2,(uint)*(byte *)((longlong)param_4 + 0x26) + iVar6);
    if (local_res8[0] == 0) {
      if (cVar1 == '\0') {
        local_res8[0] = FUN_14031f7c0(param_4 + 6,param_2,0,0);
        if (local_res8[0] != 0) goto joined_r0x00014031ec5b;
        if ((1 < *(uint *)(param_4 + 8)) &&
           (*(uint *)((longlong)param_4 + 0x4c) < *(uint *)(param_4 + 8))) {
          local_res8[0] = 3 - (uint)(param_6 != '\0');
          goto LAB_14031ec6d;
        }
        local_res8[0] = FUN_14031f7c0(param_4 + 0xa4,param_2,0,0);
        if ((((local_res8[0] != 0) ||
             (local_res8[0] = FUN_14031f7c0(&local_98,param_2,1,0), local_res8[0] != 0)) ||
            (local_res8[0] = FUN_14031f7c0(param_4 + 0x12,param_2,1,0), local_res8[0] != 0)) ||
           (local_res8[0] = FUN_14031f570(&local_98,param_4 + 0xb9,param_4 + 0xba,param_4 + 0xbb),
           local_res8[0] != 0)) goto LAB_14031ec6d;
        if (*(uint *)(param_4 + 8) <= *(uint *)(param_4 + 0xa6)) goto LAB_14031ee24;
      }
      else {
        param_4[0xa4] = 0;
        param_4[0xa5] = 0;
        param_4[0xa6] = 0;
        param_4[0xa7] = 0;
        param_4[0xa8] = 0;
        param_4[0xa9] = 0;
        uVar7 = FUN_1402f54a0(param_2);
        *(undefined4 *)((longlong)param_4 + 0x53c) = *(undefined4 *)(param_4 + 5);
        *(undefined4 *)(param_4 + 0xa7) = uVar7;
        local_res8[0] = FUN_1402f5c90(param_2);
        if ((local_res8[0] != 0) ||
           (local_res8[0] = FUN_14031f7c0(param_4 + 0x12,param_2,1,cVar1), local_res8[0] != 0))
        goto LAB_14031ec6d;
LAB_14031ee24:
        *(undefined4 *)(param_4 + 0xb8) = (undefined4)local_88;
        if (param_6 == '\0') {
          local_res10 = 0;
          if (1 < *(uint *)(param_4 + 8)) goto LAB_14031f20a;
        }
        else {
          local_res10 = param_3 & 0xffff;
          if ((0 < (int)param_3) && (*(uint *)(param_4 + 8) <= local_res10)) {
            local_res8[0] = 6;
            goto LAB_14031ec6d;
          }
          *(undefined4 *)((longlong)param_4 + 0x1c) = *(undefined4 *)(param_4 + 8);
        }
        if ((int)param_3 < 0) goto LAB_14031ec6d;
        uVar14 = 0x1000;
        uVar7 = 0x1000;
        if (cVar1 != '\0') {
          uVar7 = 0x3000;
        }
        uVar15 = CONCAT44(uVar16,iVar6);
        local_res8[0] =
             FUN_140321280(param_4 + 0xbc,param_4 + 0xa4,local_res10,param_2,uVar15,
                           CONCAT44(uVar17,uVar7),param_4,param_5);
        uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
        if (((local_res8[0] != 0) ||
            (local_res8[0] = FUN_1402f5c50(param_2,*(int *)((longlong)param_4 + 0x64c) + iVar6),
            local_res8[0] != 0)) ||
           (local_res8[0] = FUN_14031f7c0(param_4 + 0x9e,param_2,0,cVar1), local_res8[0] != 0))
        goto LAB_14031ec6d;
        if ((*(int *)(param_4 + 0xcc) == 0xffff) && (cVar1 == '\0')) {
          *(undefined4 *)(param_4 + 0x115) = 0;
          local_res8[0] = 0;
        }
        else {
          local_res8[0] =
               FUN_140321670(param_4 + 0x222,param_2,iVar6,*(undefined4 *)(param_4 + 0xd2));
          if ((local_res8[0] != 0) ||
             ((local_res8[0] = FUN_1402f5c50(param_2,*(int *)(param_4 + 0xd0) + iVar6),
              local_res8[0] != 0 ||
              (local_res8[0] = FUN_14031f7c0(local_68,param_2,0,cVar1), local_res8[0] != 0))))
          goto LAB_14031ec6d;
          iVar8 = local_res8[0];
          if (local_58 < 0x101) {
            uVar15 = 0;
            *(uint *)(param_4 + 0x115) = local_58;
            lVar9 = FUN_1402f80b0(uVar10,0x2c8,0,local_58,0,local_res8);
            uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
            iVar8 = local_res8[0];
            if (local_res8[0] == 0) {
              uVar12 = 0;
              if (local_58 != 0) {
                do {
                  param_4[uVar12 + 0x116] = uVar12 * 0x2c8 + lVar9;
                  uVar13 = (int)uVar12 + 1;
                  uVar12 = (ulonglong)uVar13;
                } while (uVar13 < local_58);
              }
              uVar12 = 0;
              if (local_58 != 0) {
                if (cVar1 != '\0') {
                  uVar14 = 0x4000;
                }
                do {
                  local_res8[0] = iVar8;
                  uVar15 = CONCAT44((int)((ulonglong)uVar15 >> 0x20),iVar6);
                  local_res8[0] =
                       FUN_140321280(param_4[uVar12 + 0x116],local_68,uVar12,param_2,uVar15,uVar14,
                                     param_4,param_5);
                  uVar16 = (undefined4)((ulonglong)uVar15 >> 0x20);
                  iVar8 = local_res8[0];
                  if (local_res8[0] != 0) goto LAB_14031f0e5;
                  uVar13 = (int)uVar12 + 1;
                  uVar12 = (ulonglong)uVar13;
                  iVar8 = 0;
                } while (uVar13 < local_58);
              }
              if ((cVar1 == '\0') || (iVar8 = local_res8[0], 1 < local_58)) {
                iVar11 = *(int *)(param_4 + 0xa0);
                param_7 = FUN_1402f5c50(param_2,*(int *)((longlong)param_4 + 0x684) + iVar6);
                iVar8 = param_7;
                if ((param_7 == 0) &&
                   (cVar3 = FUN_1402f55a0(param_2,&param_7), iVar8 = param_7, param_7 == 0)) {
                  *(char *)(param_4 + 0x216) = cVar3;
                  *(undefined4 *)(param_4 + 0x219) = 0;
                  if (cVar3 == '\0') {
LAB_14031f0c9:
                    *(int *)(param_4 + 0x218) = iVar11;
                    iVar8 = FUN_1402f5150(param_2,iVar11,param_4 + 0x217);
                  }
                  else if (cVar3 == '\x03') {
                    uVar5 = FUN_1402f5ac0(param_2,&param_7);
                    iVar8 = param_7;
                    if (param_7 == 0) {
                      if (uVar5 != 0) {
                        iVar11 = (uint)uVar5 * 3 + 2;
                        goto LAB_14031f0c9;
                      }
                      iVar8 = 3;
                    }
                  }
                  else {
                    iVar8 = 3;
                  }
                }
              }
            }
          }
LAB_14031f0e5:
          local_res8[0] = iVar8;
          if (local_68[0] != 0) {
            uVar10 = *(undefined8 *)(local_68[0] + 0x30);
            if (local_40 != 0) {
              FUN_1402f5c00(local_68[0],&local_40);
            }
            FUN_1402f7f90(uVar10,local_48);
          }
          if (local_res8[0] != 0) goto LAB_14031ec6d;
        }
        if (*(int *)((longlong)param_4 + 0x64c) != 0) {
          *(undefined4 *)(param_4 + 4) = *(undefined4 *)(param_4 + 0xa0);
          local_res8[0] = FUN_14031f570(param_4 + 0x12,param_4 + 0xb7,0,0);
          if (local_res8[0] == 0) {
            if ((cVar1 == '\0') && (*(int *)(param_4 + 4) != 0)) {
              if ((*(int *)(param_4 + 0xcc) == 0xffff) || (param_6 == '\0')) {
                uVar4 = 0;
              }
              else {
                uVar4 = 1;
              }
              local_res8[0] =
                   FUN_14031e180(param_4 + 0x9a,*(int *)(param_4 + 4),param_2,iVar6,
                                 CONCAT44(uVar16,*(undefined4 *)((longlong)param_4 + 0x644)),uVar4);
              if ((local_res8[0] != 0) ||
                 ((*(int *)(param_4 + 0xcc) == 0xffff &&
                  (local_res8[0] =
                        FUN_14031e490(param_4 + 0x18,param_4 + 0x9a,*(undefined4 *)(param_4 + 4),
                                      param_2,iVar6,*(undefined4 *)(param_4 + 0xc9)),
                  local_res8[0] != 0)))) goto LAB_14031ec6d;
            }
            uVar10 = FUN_14031f4c0(param_4,local_res10);
            param_4[0xb6] = uVar10;
          }
          goto LAB_14031ec6d;
        }
      }
LAB_14031f20a:
      local_res8[0] = 3;
      goto LAB_14031ec6d;
    }
joined_r0x00014031ec5b:
    if (param_6 == '\0') goto LAB_14031ec6d;
  }
  local_res8[0] = 2;
LAB_14031ec6d:
  if (local_98 == 0) {
    return local_res8[0];
  }
  uVar10 = *(undefined8 *)(local_98 + 0x30);
  if (lStack_70 != 0) {
    FUN_1402f5c00(local_98,&lStack_70);
  }
  FUN_1402f7f90(uVar10,local_78);
  return local_res8[0];
}

