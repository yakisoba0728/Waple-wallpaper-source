// Function: FUN_14033ca20
// Addr: 14033ca20
// Size: 1076 bytes


int FUN_14033ca20(undefined8 param_1,longlong param_2,uint param_3,code *param_4,code *param_5,
                 undefined8 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  char *_Str2;
  longlong lVar6;
  longlong lVar7;
  ulonglong uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  int local_d8;
  uint local_d4;
  int local_d0 [11];
  int local_a4;
  longlong local_a0;
  undefined8 local_98;
  uint local_90 [10];
  undefined8 local_68;
  code *local_60;
  code *local_58;
  
  local_58 = param_5;
  uVar9 = 0;
  local_68 = param_6;
  *(undefined4 *)(param_2 + 0x18) = 0;
  local_a4 = param_3 + 10;
  iVar3 = 0;
  local_d0[0] = 0;
  local_d0[1] = 0;
  local_d0[2] = 0;
  local_d0[3] = 0;
  local_d0[4] = 0;
  local_d0[5] = 0;
  local_d0[6] = 0;
  local_d0[7] = 0;
  local_d0[8] = 0;
  local_d0[9] = 0;
  local_d4 = param_3;
  local_a0 = param_2;
  local_98 = param_1;
  local_60 = param_4;
  puVar5 = (uint *)FUN_1402f7ff0(param_1,8,0,local_a4,0,&local_d8);
  pcVar2 = local_60;
  uVar1 = local_68;
  *(uint **)(local_a0 + 0x20) = puVar5;
  if (local_d8 == 0) {
    iVar10 = 0;
    iVar13 = iVar3;
    iVar14 = iVar3;
    iVar11 = iVar3;
    iVar12 = 0;
    if (local_d4 != 0) {
      do {
        _Str2 = (char *)(*pcVar2)(uVar1,uVar9);
        if ((_Str2 != (char *)0x0) && (*_Str2 != '\0')) {
          iVar3 = strcmp("Delta",_Str2);
          lVar7 = 0;
          if (iVar3 == 0) {
LAB_14033cbfa:
            if (local_d0[lVar7] == 0) {
              local_d0[lVar7] = 1;
              local_90[lVar7] = uVar9;
            }
          }
          else {
            iVar3 = strcmp("Omega",_Str2);
            lVar7 = 1;
            if (iVar3 == 0) goto LAB_14033cbfa;
            iVar3 = strcmp("fraction",_Str2);
            lVar7 = 2;
            if (iVar3 == 0) goto LAB_14033cbfa;
            iVar3 = strcmp("hyphen",_Str2);
            lVar7 = 3;
            if (iVar3 == 0) goto LAB_14033cbfa;
            iVar3 = strcmp("macron",_Str2);
            lVar7 = 4;
            if (iVar3 == 0) goto LAB_14033cbfa;
            iVar3 = strcmp("mu",_Str2);
            lVar7 = 5;
            if (iVar3 == 0) goto LAB_14033cbfa;
            iVar3 = strcmp("periodcentered",_Str2);
            lVar7 = 6;
            if (iVar3 == 0) goto LAB_14033cbfa;
            iVar3 = strcmp("space",_Str2);
            lVar7 = 7;
            if (iVar3 == 0) goto LAB_14033cbfa;
            iVar3 = strcmp("Tcommaaccent",_Str2);
            lVar7 = 8;
            if (iVar3 == 0) goto LAB_14033cbfa;
            iVar3 = strcmp("tcommaaccent",_Str2);
            lVar7 = 9;
            if (iVar3 == 0) goto LAB_14033cbfa;
          }
          uVar4 = FUN_14033c700();
          if ((uVar4 & 0x7fffffff) != 0) {
            lVar7 = 0;
            if ((((((uVar4 == 0x394) || (lVar7 = 1, uVar4 == 0x3a9)) || (lVar7 = 2, uVar4 == 0x2215)
                  ) || ((lVar7 = 3, uVar4 == 0xad || (lVar7 = 4, uVar4 == 0x2c9)))) ||
                ((lVar7 = 5, uVar4 == 0x3bc ||
                 ((lVar7 = 6, uVar4 == 0x2219 || (lVar7 = 7, uVar4 == 0xa0)))))) ||
               ((lVar7 = 8, uVar4 == 0x21a || (lVar7 = 9, uVar4 == 0x21b)))) {
              local_d0[lVar7] = 2;
            }
            *puVar5 = uVar4;
            puVar5[1] = uVar9;
            puVar5 = puVar5 + 2;
          }
          if (local_58 != (code *)0x0) {
            (*local_58)(uVar1,_Str2);
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < local_d4);
      iVar10 = local_d0[0];
      iVar3 = local_d0[1];
      iVar13 = local_d0[2];
      iVar14 = local_d0[3];
      iVar11 = local_d0[4];
      iVar12 = local_d0[5];
    }
    lVar7 = local_a0;
    if (iVar10 == 1) {
      puVar5[1] = local_90[0];
      *puVar5 = 0x394;
      puVar5 = puVar5 + 2;
    }
    if (iVar3 == 1) {
      *puVar5 = 0x3a9;
      puVar5[1] = local_90[1];
      puVar5 = puVar5 + 2;
    }
    if (iVar13 == 1) {
      *puVar5 = 0x2215;
      puVar5[1] = local_90[2];
      puVar5 = puVar5 + 2;
    }
    if (iVar14 == 1) {
      *puVar5 = 0xad;
      puVar5[1] = local_90[3];
      puVar5 = puVar5 + 2;
    }
    if (iVar11 == 1) {
      *puVar5 = 0x2c9;
      puVar5[1] = local_90[4];
      puVar5 = puVar5 + 2;
    }
    if (iVar12 == 1) {
      *puVar5 = 0x3bc;
      puVar5[1] = local_90[5];
      puVar5 = puVar5 + 2;
    }
    if (local_d0[6] == 1) {
      *puVar5 = 0x2219;
      puVar5[1] = local_90[6];
      puVar5 = puVar5 + 2;
    }
    if (local_d0[7] == 1) {
      *puVar5 = 0xa0;
      puVar5[1] = local_90[7];
      puVar5 = puVar5 + 2;
    }
    if (local_d0[8] == 1) {
      *puVar5 = 0x21a;
      puVar5[1] = local_90[8];
      puVar5 = puVar5 + 2;
    }
    if (local_d0[9] == 1) {
      *puVar5 = 0x21b;
      puVar5[1] = local_90[9];
      puVar5 = puVar5 + 2;
    }
    lVar6 = *(longlong *)(local_a0 + 0x20);
    uVar8 = (longlong)puVar5 - lVar6 >> 3;
    uVar9 = (uint)uVar8;
    if (uVar9 == 0) {
      FUN_1402f7f90(local_98,lVar6);
      *(undefined8 *)(lVar7 + 0x20) = 0;
      if (local_d8 == 0) {
        local_d8 = 0xa3;
      }
    }
    else {
      if (uVar9 < local_d4 >> 1) {
        lVar6 = FUN_1402f7ff0(local_98,8,local_a4,uVar8 & 0xffffffff,lVar6,&local_d8);
        *(longlong *)(lVar7 + 0x20) = lVar6;
        local_d8 = 0;
      }
      FUN_1402ea670(lVar6,uVar8 & 0xffffffff,8,&LAB_14033d020);
    }
    *(uint *)(lVar7 + 0x18) = uVar9;
  }
  return local_d8;
}

