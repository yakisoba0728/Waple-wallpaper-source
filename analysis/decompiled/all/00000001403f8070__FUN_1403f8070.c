// Function: FUN_1403f8070
// Addr: 1403f8070
// Size: 1198 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403f8070(longlong param_1,longlong param_2,undefined8 param_3)

{
  uint *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  uint uVar8;
  float fVar9;
  float *pfVar10;
  float *pfVar11;
  uint uVar12;
  float *pfVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  float fVar19;
  float fVar20;
  undefined1 auStack_128 [32];
  float local_108;
  undefined8 local_100;
  float local_f8;
  undefined8 local_f0;
  float local_e8;
  undefined8 local_e0;
  longlong local_d8;
  int local_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  float fStack_c0;
  undefined8 local_bc;
  undefined8 uStack_b4;
  undefined8 local_ac;
  undefined4 local_a4;
  ulonglong local_a0;
  
  local_a0 = DAT_1404dc040 ^ (ulonglong)auStack_128;
  puVar18 = *(uint **)(param_1 + 0x18);
  local_ac = 0;
  puVar1 = puVar18 + *(uint *)(param_1 + 0x14);
  local_a4 = 0;
  local_bc = 0;
  uStack_b4 = 0;
  local_d8 = param_1;
  uVar15 = 0;
  for (; puVar18 != puVar1; puVar18 = puVar18 + 1) {
    fStack_c0 = 0.0;
    fStack_cc = 0.0;
    local_d0 = 0;
    fStack_c4 = 0.0;
    fStack_c8 = 0.0;
    uVar8 = *puVar18;
    uVar12 = 0;
    if (uVar15 <= *(uint *)(local_d8 + 4)) {
      uVar12 = *(int *)(local_d8 + 4) - uVar15;
    }
    uVar14 = uVar8 - uVar15;
    if (uVar12 <= uVar14) {
      uVar14 = uVar12;
    }
    pfVar13 = (float *)(*(longlong *)(local_d8 + 8) + (ulonglong)uVar15 * 0xc);
    fVar6 = 0.0;
    fVar7 = 0.0;
    iVar17 = 0;
    fVar4 = fStack_c4;
    fVar5 = fStack_c0;
    while (fStack_c0 = fVar5, fStack_c4 = fVar4, uVar15 = uVar14, fVar20 = fVar7, fVar19 = fVar6,
          pfVar11 = pfVar13, uVar15 != 0) {
      uVar14 = uVar15 - 1;
      pfVar13 = pfVar11 + 3;
      fVar9 = pfVar11[2];
      fVar2 = *pfVar11;
      fVar3 = pfVar11[1];
      fVar6 = fVar2;
      fVar7 = fVar3;
      fVar4 = fVar2;
      fVar5 = fVar3;
      if (fVar9 == 0.0) {
        if (iVar17 != 0) {
          if ((fStack_cc != fVar19) || (fStack_c8 != fVar20)) {
            local_100 = 0;
            if (*(longlong *)(param_2 + 0x38) != 0) {
              local_100 = *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 8);
            }
            local_108 = fStack_c8;
            (**(code **)(param_2 + 0x18))(param_2,param_3,&local_d0,fStack_cc);
          }
          (**(code **)(param_2 + 0x30))(param_2,param_3,&local_d0);
          iVar17 = 0;
          local_d0 = 0;
          fStack_cc = 0.0;
          fStack_c8 = 0.0;
        }
      }
      else if (fVar9 == 1.4013e-45) {
        if (iVar17 == 0) {
          local_100 = 0;
          if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
            local_100 = **(undefined8 **)(param_2 + 0x38);
          }
          local_108 = fVar20;
          (**(code **)(param_2 + 0x10))(param_2,param_3,&local_d0,fVar19);
          fStack_cc = fStack_c4;
          fStack_c8 = fStack_c0;
          local_d0 = 1;
        }
        local_100 = 0;
        if (*(longlong *)(param_2 + 0x38) != 0) {
          local_100 = *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 8);
        }
        local_108 = fVar3;
        (**(code **)(param_2 + 0x18))(param_2,param_3,&local_d0,fVar2);
        iVar17 = local_d0;
      }
      else if (fVar9 == 2.8026e-45) {
        if (uVar14 == 0) {
          pfVar10 = (float *)&DAT_14045dd10;
        }
        else {
          uVar14 = uVar15 - 2;
          pfVar10 = pfVar13;
          pfVar13 = pfVar11 + 6;
        }
        fVar6 = *pfVar10;
        fVar7 = pfVar10[1];
        if (iVar17 == 0) {
          local_100 = 0;
          if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
            local_100 = **(undefined8 **)(param_2 + 0x38);
          }
          local_108 = fVar20;
          (**(code **)(param_2 + 0x10))(param_2,param_3,&local_d0,fVar19);
          fStack_cc = fStack_c4;
          fStack_c8 = fStack_c0;
          local_d0 = 1;
        }
        local_f0 = 0;
        if (*(longlong *)(param_2 + 0x38) != 0) {
          local_f0 = *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x10);
        }
        local_100 = CONCAT44(local_100._4_4_,fVar6);
        local_108 = fVar3;
        local_f8 = fVar7;
        (**(code **)(param_2 + 0x20))(param_2,param_3,&local_d0,fVar2);
        iVar17 = local_d0;
        fVar4 = fVar6;
        fVar5 = fVar7;
      }
      else {
        fVar6 = fVar19;
        fVar7 = fVar20;
        fVar4 = fStack_c4;
        fVar5 = fStack_c0;
        if (fVar9 == 4.2039e-45) {
          if (uVar14 == 0) {
            pfVar10 = (float *)&DAT_14045dd10;
            iVar16 = 0;
          }
          else {
            iVar16 = uVar15 - 2;
            pfVar10 = pfVar13;
            pfVar13 = pfVar11 + 6;
          }
          fVar4 = *pfVar10;
          fVar5 = pfVar10[1];
          if (iVar16 == 0) {
            pfVar11 = (float *)&DAT_14045dd10;
            uVar14 = 0;
          }
          else {
            uVar14 = iVar16 - 1;
            pfVar11 = pfVar13;
            pfVar13 = pfVar13 + 3;
          }
          fVar6 = *pfVar11;
          fVar7 = pfVar11[1];
          if (iVar17 == 0) {
            local_100 = 0;
            if (*(undefined8 **)(param_2 + 0x38) != (undefined8 *)0x0) {
              local_100 = **(undefined8 **)(param_2 + 0x38);
            }
            local_108 = fVar20;
            (**(code **)(param_2 + 0x10))(param_2,param_3,&local_d0,fVar19);
            fStack_cc = fStack_c4;
            fStack_c8 = fStack_c0;
            local_d0 = 1;
          }
          local_e0 = 0;
          if (*(longlong *)(param_2 + 0x38) != 0) {
            local_e0 = *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 0x18);
          }
          local_f0 = CONCAT44(local_f0._4_4_,fVar6);
          local_100 = CONCAT44(local_100._4_4_,fVar4);
          local_108 = fVar3;
          local_f8 = fVar5;
          local_e8 = fVar7;
          (**(code **)(param_2 + 0x28))(param_2,param_3,&local_d0,fVar2);
          iVar17 = local_d0;
          fVar4 = fVar6;
          fVar5 = fVar7;
        }
      }
    }
    if (iVar17 != 0) {
      if ((fStack_cc != fVar19) || (fStack_c8 != fVar20)) {
        local_100 = 0;
        if (*(longlong *)(param_2 + 0x38) != 0) {
          local_100 = *(undefined8 *)(*(longlong *)(param_2 + 0x38) + 8);
        }
        local_108 = fStack_c8;
        (**(code **)(param_2 + 0x18))(param_2,param_3,&local_d0,fStack_cc);
      }
      (**(code **)(param_2 + 0x30))(param_2,param_3,&local_d0);
    }
    uVar15 = uVar8;
  }
  return;
}

