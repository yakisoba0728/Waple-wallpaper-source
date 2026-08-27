// Function: FUN_140319c60
// Addr: 140319c60
// Size: 1556 bytes


int FUN_140319c60(longlong param_1)

{
  int iVar1;
  int *piVar2;
  char *_Str1;
  char *_Str2;
  int iVar3;
  undefined8 uVar4;
  uint uVar5;
  ulonglong uVar6;
  longlong lVar7;
  longlong lVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int local_res8 [2];
  int local_res10;
  int local_res18;
  longlong local_res20;
  undefined1 local_2e8 [32];
  undefined8 local_2c8;
  code *local_2b8;
  undefined8 local_250;
  undefined4 local_248;
  undefined8 local_240;
  undefined4 local_238;
  char local_233;
  undefined4 local_230;
  undefined1 local_228 [28];
  int local_20c;
  longlong local_208;
  code *local_1d8;
  undefined4 local_1d0;
  undefined8 local_1c8 [4];
  undefined8 local_1a8;
  code *local_178;
  undefined8 local_170 [3];
  int local_158;
  undefined8 local_150;
  undefined8 local_148;
  code *local_120;
  undefined1 local_118 [80];
  code *local_c8;
  undefined4 local_c0;
  undefined8 local_b8 [3];
  int local_a0;
  undefined8 local_98;
  undefined8 local_90;
  code *local_68;
  undefined8 local_60;
  
  uVar4 = *(undefined8 *)(param_1 + 0x2a0);
  FUN_1404217a0(local_2e8,0,0x298);
  *(undefined8 *)(param_1 + 0x2e8) = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2f0) = 0;
  *(undefined4 *)(param_1 + 0x184) = 7;
  *(undefined4 *)(param_1 + 0x188) = 1;
  *(undefined4 *)(param_1 + 0x118) = 4;
  *(undefined4 *)(param_1 + 0x1c8) = 0xf5c;
  *(undefined4 *)(param_1 + 0x180) = 0x27a000;
  local_res8[0] =
       FUN_140319a40(local_2e8,*(undefined8 *)(param_1 + 0xa0),*(undefined8 *)(param_1 + 0x98),uVar4
                    );
  if ((((local_res8[0] == 0) &&
       (local_res8[0] = FUN_14031a9c0(param_1,local_2e8,local_250,local_248), local_res8[0] == 0))
      && (local_res8[0] = FUN_1403195f0(local_2e8,uVar4), local_res8[0] == 0)) &&
     (local_res8[0] = FUN_14031a9c0(param_1,local_2e8,local_240,local_238), local_res8[0] == 0)) {
    *(byte *)(param_1 + 0x11c) = *(byte *)(param_1 + 0x11c) & 0xfe;
    piVar2 = *(int **)(param_1 + 0x2e0);
    if ((piVar2 != (int *)0x0) && (*piVar2 != 1 << ((byte)piVar2[1] & 0x1f))) {
      FUN_140316ed0();
    }
    lVar7 = *(longlong *)(param_1 + 0x2e0);
    if (((lVar7 != 0) && (*(int *)(lVar7 + 0x2f8) != 0)) &&
       (*(int *)(lVar7 + 0x2f8) != *(int *)(lVar7 + 4))) {
      *(undefined4 *)(lVar7 + 0x2f8) = 0;
    }
    piVar2 = *(int **)(param_1 + 0x2e0);
    if ((piVar2 != (int *)0x0) && ((*piVar2 == 0 || (piVar2[1] == 0)))) {
      FUN_140316ed0();
    }
    if ((*(longlong *)(param_1 + 0x2e0) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x2e0) + 0x108) == 0)) {
      FUN_140316ed0();
    }
    if ((*(longlong *)(param_1 + 0x2e0) != 0) &&
       (*(longlong *)(*(longlong *)(param_1 + 0x2e0) + 0x28) == 0)) {
      FUN_140316ed0();
    }
    lVar7 = *(longlong *)(param_1 + 0x2e0);
    if (lVar7 != 0) {
      uVar6 = 0;
      if (*(uint *)(lVar7 + 4) != 0) {
        do {
          if (*(char *)(lVar7 + (uVar6 + 7) * 0x18) == '\0') {
            FUN_140316ed0(param_1);
            break;
          }
          uVar5 = (int)uVar6 + 1;
          uVar6 = (ulonglong)uVar5;
        } while (uVar5 < *(uint *)(lVar7 + 4));
      }
    }
    if (*(longlong *)(param_1 + 0x2e0) == 0) {
      *(undefined4 *)(param_1 + 0x2f0) = 0;
    }
    else if (*(int *)(param_1 + 0x2f0) != 0) {
      uVar4 = FUN_1402f80b0(*(undefined8 *)(param_1 + 0x98),4,0,*(int *)(param_1 + 0x2f0),0,
                            local_res8);
      *(undefined8 *)(param_1 + 0x2f8) = uVar4;
      if (local_res8[0] != 0) {
        *(undefined4 *)(param_1 + 0x2f0) = 0;
        goto LAB_14031a192;
      }
    }
    *(undefined4 *)(param_1 + 0x240) = local_1d0;
    if (local_a0 != 0) {
      *(undefined4 *)(param_1 + 0x220) = local_c0;
      *(undefined8 *)(param_1 + 0x208) = local_b8[0];
      *(undefined8 *)(param_1 + 0x228) = local_98;
      *(undefined8 *)(param_1 + 0x230) = local_90;
      *(undefined8 *)(param_1 + 0x238) = local_60;
      local_a0 = 0;
      local_60 = 0;
    }
    if ((*(longlong *)(*(longlong *)(param_1 + 0xd0) + 0x50) == 0) && (local_158 == 0)) {
      local_res8[0] = 3;
    }
    *(undefined8 *)(param_1 + 0x210) = local_170[0];
    *(undefined8 *)(param_1 + 0x250) = local_150;
    *(undefined8 *)(param_1 + 600) = local_148;
    *(undefined8 *)(param_1 + 0x218) = local_1c8[0];
    *(undefined8 *)(param_1 + 0x248) = local_1a8;
    local_158 = 0;
    local_1c8[0] = 0;
    local_1a8 = 0;
    if (*(int *)(param_1 + 0x1e0) == 1) {
      iVar9 = 0;
      iVar10 = 0;
      local_res10 = 0;
      iVar11 = 0;
      local_res18 = 0;
      if (0 < local_20c) {
LAB_14031a000:
        lVar7 = (longlong)iVar11 * 8;
        _Str1 = *(char **)(local_208 + lVar7);
        local_res20 = (longlong)iVar11 * 2;
        *(undefined2 *)(local_res20 + *(longlong *)(param_1 + 0x1f8)) = 0;
        *(char **)(lVar7 + *(longlong *)(param_1 + 0x200)) = ".notdef";
        if ((_Str1 != (char *)0x0) && (iVar1 = *(int *)(param_1 + 0x240), 0 < iVar1)) {
          lVar8 = *(longlong *)(param_1 + 0x248);
          uVar6 = 0;
          do {
            _Str2 = *(char **)(lVar8 + uVar6 * 8);
            iVar3 = strcmp(_Str1,_Str2);
            iVar9 = local_res10;
            iVar10 = local_res18;
            if (iVar3 == 0) {
              *(short *)(local_res20 + *(longlong *)(param_1 + 0x1f8)) = (short)uVar6;
              *(char **)(lVar7 + *(longlong *)(param_1 + 0x200)) = _Str2;
              lVar7 = 0;
              goto LAB_14031a0c0;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < iVar1);
        }
        goto LAB_14031a11b;
      }
LAB_14031a148:
      *(undefined4 *)(param_1 + 0x1e8) = local_230;
      *(int *)(param_1 + 0x1ec) = iVar9;
      *(int *)(param_1 + 0x1f0) = iVar10;
    }
    if (1000 < *(uint *)(param_1 + 0x184)) {
      *(undefined4 *)(param_1 + 0x184) = 7;
    }
    if (1000 < *(uint *)(param_1 + 0x188)) {
      *(undefined4 *)(param_1 + 0x188) = 1;
    }
  }
LAB_14031a192:
  uVar4 = local_2c8;
  if (local_1d8 != (code *)0x0) {
    (*local_1d8)(local_228);
  }
  if (local_120 != (code *)0x0) {
    (*local_120)(local_170);
  }
  if (local_178 != (code *)0x0) {
    (*local_178)(local_1c8);
  }
  if (local_c8 != (code *)0x0) {
    (*local_c8)(local_118);
  }
  if (local_68 != (code *)0x0) {
    (*local_68)(local_b8);
  }
  FUN_1402f77c0(local_60,uVar4);
  FUN_1402f7f90(uVar4,local_60);
  local_60 = 0;
  FUN_1402f7f90(local_2c8,local_240);
  local_240 = 0;
  if (local_233 == '\0') {
    FUN_1402f7f90(local_2c8,local_250);
    local_250 = 0;
  }
  (*local_2b8)(local_2e8);
  return local_res8[0];
  while (lVar7 = lVar8, lVar8 != 8) {
LAB_14031a0c0:
    lVar8 = lVar7 + 1;
    if (".notdef"[lVar7] != _Str2[lVar7]) {
      iVar9 = iVar11;
      if (local_res10 <= iVar11) {
        iVar9 = local_res10;
      }
      local_res10 = iVar9;
      if (local_res18 <= iVar11) {
        local_res18 = iVar11 + 1;
        iVar10 = local_res18;
      }
      break;
    }
  }
LAB_14031a11b:
  iVar11 = iVar11 + 1;
  if (local_20c <= iVar11) goto LAB_14031a148;
  goto LAB_14031a000;
}

