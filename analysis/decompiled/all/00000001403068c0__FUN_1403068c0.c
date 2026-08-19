// Function: FUN_1403068c0
// Addr: 1403068c0
// Size: 883 bytes


ulonglong FUN_1403068c0(undefined8 param_1,longlong param_2,uint param_3,undefined4 param_4,
                       undefined8 param_5)

{
  longlong lVar1;
  char *pcVar2;
  ushort uVar3;
  uint3 uVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint uVar10;
  char *pcVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  ulonglong uVar14;
  uint uVar15;
  uint local_res10 [2];
  uint local_48 [2];
  undefined8 local_40;
  longlong local_38;
  
  lVar8 = FUN_1402f0580(*(undefined8 *)(*(longlong *)(param_2 + 0x90) + 8),&DAT_14043be24);
  if (lVar8 == 0) {
    return 0xb;
  }
  uVar6 = func_0x0001402f5d20(param_1,0);
  if (uVar6 != 0) {
    return (ulonglong)uVar6;
  }
  uVar6 = (**(code **)(lVar8 + 8))(param_1,param_2,param_3,param_4,param_5);
  if (uVar6 != 0) {
    return (ulonglong)uVar6;
  }
  iVar7 = *(int *)(param_2 + 0xf0);
  if ((((iVar7 == 0x10000) || (iVar7 == 0x20000)) || (iVar7 == 0x74727565)) ||
     ((iVar7 == -0x5a949d9c || (iVar7 == -0x5a938c8c)))) {
    *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x800;
    if ((int)param_3 < 0) {
      return 0;
    }
    lVar1 = *(longlong *)(param_2 + 0xa0);
    uVar6 = (**(code **)(lVar8 + 0x10))(lVar1,param_2,param_3,param_4,param_5);
    if (uVar6 != 0) {
      return (ulonglong)uVar6;
    }
    pcVar2 = *(char **)(param_2 + 0x18);
    uVar13 = 0;
    if (pcVar2 != (char *)0x0) {
      uVar14 = uVar13;
      if (((0x19 < (int)*pcVar2 - 0x41U) || (0x19 < (int)pcVar2[1] - 0x41U)) ||
         ((0x19 < (int)pcVar2[2] - 0x41U ||
          ((((0x19 < (int)pcVar2[3] - 0x41U || (0x19 < (int)pcVar2[4] - 0x41U)) ||
            (0x19 < (int)pcVar2[5] - 0x41U)) ||
           ((pcVar2[6] != '+' || (pcVar11 = pcVar2 + 7, pcVar2[7] == '\0')))))))) {
        pcVar11 = pcVar2;
      }
      do {
        lVar8 = FUN_1402bbc10(pcVar11,&DAT_14043b6e0 + uVar14 * 0x14);
        if (lVar8 != 0) goto LAB_140306a4a;
        uVar6 = (int)uVar14 + 1;
        uVar14 = (ulonglong)uVar6;
      } while ((int)uVar6 < 0x14);
    }
    cVar5 = FUN_140312f00(param_2);
    if (cVar5 != '\0') {
LAB_140306a4a:
      *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) | 0x2000;
    }
    local_40 = *(undefined8 *)(lVar1 + 0x30);
    local_res10[0] = (**(code **)(param_2 + 0x2a0))(param_2,0x68646d78,lVar1,local_48);
    if ((local_res10[0] == 0) && (7 < local_48[0])) {
      local_res10[0] = FUN_1402f5220(lVar1,local_48[0],param_2 + 0x448);
      if (local_res10[0] == 0) {
        local_38 = *(longlong *)(param_2 + 0x448);
        uVar13 = local_38 + 8;
        uVar3 = CONCAT11(*(undefined1 *)(local_38 + 2),*(undefined1 *)(local_38 + 3));
        uVar15 = (uint)uVar3;
        uVar4 = CONCAT21(CONCAT11(*(undefined1 *)(local_38 + 4),*(undefined1 *)(local_38 + 5)),
                         *(undefined1 *)(local_38 + 6));
        uVar10 = CONCAT31(uVar4,*(byte *)(local_38 + 7));
        uVar6 = (uVar4 & 0xff) << 8 | (uint)*(byte *)(local_38 + 7);
        if (uVar10 < 0xffff0000) {
          uVar6 = uVar10;
        }
        if ((uVar15 - 1 < 0xff) && (uVar6 == (*(int *)(param_2 + 0x10) + 5U & 0xfffffffc))) {
          uVar14 = (ulonglong)local_48[0];
          uVar9 = FUN_1402f80c0(local_40,8,0,uVar15,0,local_res10);
          *(undefined8 *)(param_2 + 0x460) = uVar9;
          if (local_res10[0] == 0) {
            uVar12 = 0;
            if (uVar3 != 0) {
              do {
                if (local_38 + uVar14 < uVar6 + uVar13) break;
                *(ulonglong *)(*(longlong *)(param_2 + 0x460) + uVar12 * 8) = uVar13;
                uVar10 = (int)uVar12 + 1;
                uVar12 = (ulonglong)uVar10;
                uVar13 = uVar6 + uVar13;
              } while (uVar10 < uVar15);
            }
            func_0x0001402ea740(*(undefined8 *)(param_2 + 0x460),uVar12,8,&UNK_140310240);
            *(uint *)(param_2 + 0x450) = local_48[0];
            *(int *)(param_2 + 0x454) = (int)uVar12;
            *(uint *)(param_2 + 0x458) = uVar6;
            goto LAB_140306be6;
          }
        }
        FUN_1402f5cd0(lVar1,param_2 + 0x448);
        *(undefined4 *)(param_2 + 0x450) = 0;
      }
LAB_140306be6:
      uVar13 = (ulonglong)local_res10[0];
      if (local_res10[0] != 0) {
        return uVar13;
      }
    }
    uVar14 = 0;
    if ((*(uint *)(param_2 + 8) & 0x20001) != 0) {
      if (*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x50) == 0) {
        uVar6 = func_0x000140313870(param_2,lVar1);
        if (*(int *)(param_2 + 0x3f8) == 0) {
          if ((uVar6 & 0xff) == 0x90) goto LAB_140306c8e;
        }
        else if ((uVar6 & 0xff) == 0x8e) {
          return (ulonglong)uVar6;
        }
        if (uVar6 != 0) {
          return (ulonglong)uVar6;
        }
      }
      uVar6 = FUN_140313270(param_2,lVar1);
      if ((uVar6 != 0) && ((char)uVar6 != -0x72)) {
        return (ulonglong)uVar6;
      }
      iVar7 = (**(code **)(param_2 + 0x2a0))(param_2,0x6670676d,lVar1,local_res10);
      if (iVar7 == 0) {
        *(uint *)(param_2 + 0x3b0) = local_res10[0];
        uVar6 = FUN_1402f5220(lVar1,local_res10[0],param_2 + 0x3b8);
        if ((uVar6 != 0) && ((char)uVar6 != -0x72)) {
          return (ulonglong)uVar6;
        }
      }
      else {
        *(undefined8 *)(param_2 + 0x3b8) = 0;
        *(undefined4 *)(param_2 + 0x3b0) = 0;
      }
      iVar7 = (**(code **)(param_2 + 0x2a0))(param_2,0x70726570,lVar1,local_res10);
      if (iVar7 == 0) {
        *(uint *)(param_2 + 0x3c0) = local_res10[0];
        uVar6 = FUN_1402f5220(lVar1,local_res10[0],param_2 + 0x3c8);
        uVar14 = (ulonglong)uVar6;
        if ((uVar6 != 0) && ((char)uVar6 != -0x72)) {
          return uVar14;
        }
      }
      else {
        *(undefined8 *)(param_2 + 0x3c8) = 0;
        *(undefined4 *)(param_2 + 0x3c0) = 0;
      }
      uVar13 = uVar14;
      if ((((*(longlong *)(*(longlong *)(param_2 + 0xd0) + 0x50) == 0) &&
           (*(int *)(param_2 + 0x28) != 0)) && (*(longlong *)(param_2 + 0x440) != 0)) &&
         (cVar5 = func_0x000140312d30(param_2), cVar5 != '\0')) {
        *(uint *)(param_2 + 8) = *(uint *)(param_2 + 8) & 0xfffffffe;
      }
    }
    if ((param_3 >> 0x10 != 0) && ((*(uint *)(param_2 + 8) & 0x100) != 0)) {
      uVar6 = FUN_1402fa900(param_2,param_3 >> 0x10);
      uVar13 = (ulonglong)uVar6;
      if (uVar6 != 0) {
        return uVar13;
      }
    }
    *(code **)(param_2 + 0x2a8) = FUN_14030b750;
    *(undefined **)(param_2 + 0x2b8) = &UNK_14030c200;
    *(undefined8 *)(param_2 + 0x2c0) = 0x14030c2a0;
    *(undefined **)(param_2 + 0x2c8) = &UNK_14030b9f0;
    *(undefined **)(param_2 + 0x2b0) = &UNK_14030b7b0;
  }
  else {
LAB_140306c8e:
    uVar13 = 2;
  }
  return uVar13;
}

