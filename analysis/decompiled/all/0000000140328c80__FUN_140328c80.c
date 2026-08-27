// Function: FUN_140328c80
// Addr: 140328c80
// Size: 903 bytes


int FUN_140328c80(longlong param_1)

{
  int iVar1;
  undefined8 uVar2;
  char *_Str1;
  longlong lVar3;
  char *_Str2;
  int iVar4;
  int iVar5;
  longlong lVar6;
  longlong lVar7;
  int iVar8;
  uint uVar9;
  ulonglong uVar10;
  int iVar11;
  int iVar12;
  int local_res8;
  int local_res10;
  undefined1 local_268 [32];
  undefined8 local_248;
  code *local_238;
  undefined8 local_1d0;
  undefined4 local_1c8;
  char local_1c4;
  undefined4 local_1c0;
  undefined1 local_1b8 [28];
  int local_19c;
  longlong local_198;
  code *local_168;
  undefined4 local_160;
  undefined8 local_158 [4];
  undefined8 local_138;
  code *local_108;
  undefined8 local_100 [3];
  int local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  code *local_b0;
  undefined1 local_a8 [80];
  code *local_58;
  
  uVar2 = *(undefined8 *)(param_1 + 0x98);
  FUN_1404217a0(local_268,0,0x218);
  *(undefined8 *)(param_1 + 0x2a8) = 0;
  *(undefined4 *)(param_1 + 0x2b0) = 0;
  iVar4 = FUN_140329230(local_268,*(undefined8 *)(param_1 + 0xa0),uVar2,
                        *(undefined8 *)(param_1 + 0x2a0));
  if ((iVar4 == 0) && (iVar4 = FUN_140329010(param_1,local_268,local_1d0,local_1c8), iVar4 == 0)) {
    if (*(char *)(param_1 + 0x261) == '*') {
      *(undefined4 *)(param_1 + 0x240) = local_160;
      if (local_e8 == 0) {
        iVar4 = 3;
      }
      local_e8 = 0;
      *(undefined8 *)(param_1 + 0x210) = local_100[0];
      *(undefined8 *)(param_1 + 0x250) = local_e0;
      *(undefined8 *)(param_1 + 600) = local_d8;
      *(undefined8 *)(param_1 + 0x218) = local_158[0];
      *(undefined8 *)(param_1 + 0x248) = local_138;
      local_158[0] = 0;
      local_138 = 0;
      if (*(int *)(param_1 + 0x1e0) == 1) {
        iVar8 = 0;
        iVar11 = 0;
        local_res8 = 0;
        iVar12 = 0;
        local_res10 = 0;
        if (0 < local_19c) {
LAB_140328df0:
          lVar6 = (longlong)iVar12 * 8;
          _Str1 = *(char **)(lVar6 + local_198);
          lVar7 = (longlong)iVar12 * 2;
          *(undefined2 *)(lVar7 + *(longlong *)(param_1 + 0x1f8)) = 0;
          *(char **)(lVar6 + *(longlong *)(param_1 + 0x200)) = ".notdef";
          if ((_Str1 != (char *)0x0) && (iVar1 = *(int *)(param_1 + 0x240), 0 < iVar1)) {
            lVar3 = *(longlong *)(param_1 + 0x248);
            uVar10 = 0;
            do {
              _Str2 = *(char **)(lVar3 + uVar10 * 8);
              iVar5 = strcmp(_Str1,_Str2);
              iVar8 = local_res8;
              iVar11 = local_res10;
              if (iVar5 == 0) {
                *(short *)(lVar7 + *(longlong *)(param_1 + 0x1f8)) = (short)uVar10;
                *(char **)(lVar6 + *(longlong *)(param_1 + 0x200)) = _Str2;
                lVar6 = 0;
                goto LAB_140328eb0;
              }
              uVar9 = (int)uVar10 + 1;
              uVar10 = (ulonglong)uVar9;
            } while ((int)uVar9 < iVar1);
          }
          goto LAB_140328f0b;
        }
LAB_140328f3b:
        *(undefined4 *)(param_1 + 0x1e8) = local_1c0;
        *(int *)(param_1 + 0x1ec) = iVar8;
        *(int *)(param_1 + 0x1f0) = iVar11;
      }
    }
    else {
      iVar4 = 2;
    }
  }
  if (local_168 != (code *)0x0) {
    (*local_168)(local_1b8);
  }
  if (local_b0 != (code *)0x0) {
    (*local_b0)(local_100);
  }
  if (local_108 != (code *)0x0) {
    (*local_108)(local_158);
  }
  if (local_58 != (code *)0x0) {
    (*local_58)(local_a8);
  }
  if (local_1c4 == '\0') {
    FUN_1402f7f90(local_248,local_1d0);
    local_1d0 = 0;
  }
  if (local_238 != (code *)0x0) {
    (*local_238)(local_268);
  }
  if (iVar4 != 0) {
    FUN_1402f7f90(uVar2,*(undefined8 *)(param_1 + 0x2a8));
    *(undefined8 *)(param_1 + 0x2a8) = 0;
    *(undefined4 *)(param_1 + 0x2b0) = 0;
  }
  return iVar4;
  while (lVar6 = lVar7, lVar7 != 8) {
LAB_140328eb0:
    lVar7 = lVar6 + 1;
    if (".notdef"[lVar6] != _Str2[lVar6]) {
      iVar8 = iVar12;
      if (local_res8 <= iVar12) {
        iVar8 = local_res8;
      }
      local_res8 = iVar8;
      if (local_res10 <= iVar12) {
        local_res10 = iVar12 + 1;
        iVar11 = local_res10;
      }
      break;
    }
  }
LAB_140328f0b:
  iVar12 = iVar12 + 1;
  if (local_19c <= iVar12) goto LAB_140328f3b;
  goto LAB_140328df0;
}

