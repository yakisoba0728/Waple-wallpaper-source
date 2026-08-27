// Function: FUN_1401708c0
// Addr: 1401708c0
// Size: 1292 bytes


ulonglong FUN_1401708c0(undefined8 *param_1,undefined8 *param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  int iVar3;
  undefined8 *puVar4;
  ulonglong uVar5;
  longlong lVar6;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  longlong *plVar7;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined8 *puVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  ulonglong uVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  ulonglong uVar14;
  longlong *plVar15;
  longlong lVar16;
  bool bVar17;
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [24];
  longlong local_48 [4];
  
  puVar13 = auStack_68;
  puVar10 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar10 = (undefined8 *)*param_1;
  }
  puVar4 = (undefined8 *)0x0;
  if (((param_1[2] == 0) ||
      (puVar8 = (undefined8 *)(param_1[2] + (longlong)puVar10),
      puVar4 = (undefined8 *)thunk_FUN_14028cf70(puVar10,puVar8,0x3a), puVar4 == puVar8)) ||
     (uVar14 = (longlong)puVar4 - (longlong)puVar10, uVar14 == 0xffffffffffffffff))
  goto LAB_140170da4;
  puVar10 = (undefined8 *)(uVar14 + 1);
  puVar4 = (undefined8 *)param_1[2];
  puVar8 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar8 = (undefined8 *)*param_1;
  }
  if (((puVar4 <= puVar10) ||
      (puVar9 = (undefined8 *)((longlong)puVar4 + (longlong)puVar8),
      puVar4 = (undefined8 *)
               thunk_FUN_14028cf70((undefined1 *)((longlong)puVar8 + (longlong)puVar10),puVar9,0x3a)
      , puVar4 == puVar9)) ||
     ((lVar16 = (longlong)puVar4 - (longlong)puVar8, lVar16 == -1 || (lVar16 - uVar14 != 7))))
  goto LAB_140170da4;
  puVar8 = (undefined8 *)0x0;
  local_48[2] = 0;
  local_48[3] = 0;
  local_48[0] = 0;
  local_48[1] = 0;
  if ((undefined8 *)param_1[2] < puVar10) goto LAB_140170dc7;
  uVar5 = (longlong)param_1[2] - (longlong)puVar10;
  uVar11 = 6;
  if (uVar5 < 6) {
    uVar11 = uVar5;
  }
  puVar4 = param_1;
  if (0xf < (ulonglong)param_1[3]) {
    puVar4 = (undefined8 *)*param_1;
  }
  FUN_140017480(local_48,(undefined1 *)((longlong)puVar4 + (longlong)puVar10),uVar11);
  FUN_14000de40(param_2 + 4,local_48);
  puVar10 = param_2;
  if ((ulonglong)local_48[3] < 0x10) {
LAB_140170a17:
    local_48[2] = 0;
    local_48[0] = 0;
    local_48[1] = 0;
    if ((ulonglong)param_1[2] < uVar14) {
      uVar14 = param_1[2];
    }
    local_48[3] = 0;
    puVar4 = param_1;
    if (0xf < (ulonglong)param_1[3]) {
      puVar4 = (undefined8 *)*param_1;
    }
    FUN_140017480(local_48,puVar4,uVar14);
    FUN_14000de40(param_2,local_48);
    if (0xf < (ulonglong)local_48[3]) {
      uVar14 = local_48[3] + 1;
      lVar6 = local_48[0];
      if (0xfff < uVar14) {
        lVar6 = *(longlong *)(local_48[0] + -8);
        if (0x1f < (local_48[0] - lVar6) - 8U) goto LAB_140170d76;
        uVar14 = local_48[3] + 0x28;
      }
      thunk_FUN_14028af80(lVar6,uVar14);
    }
    uVar14 = lVar16 + 1;
    local_48[2] = 0;
    local_48[3] = 0;
    local_48[0] = 0;
    local_48[1] = 0;
    if ((ulonglong)param_1[2] < uVar14) goto LAB_140170dc7;
    lVar6 = param_1[2] - uVar14;
    lVar16 = -1;
    if (lVar6 != -1) {
      lVar16 = lVar6;
    }
    if (0xf < (ulonglong)param_1[3]) {
      param_1 = (undefined8 *)*param_1;
    }
    FUN_140017480(local_48,(longlong)param_1 + uVar14,lVar16);
    plVar15 = param_2 + 8;
    FUN_14000de40(plVar15,local_48);
    if (0xf < (ulonglong)local_48[3]) {
      uVar14 = local_48[3] + 1;
      lVar16 = local_48[0];
      if (0xfff < uVar14) {
        lVar16 = *(longlong *)(local_48[0] + -8);
        if (0x1f < (local_48[0] - lVar16) - 8U) goto LAB_140170d76;
        uVar14 = local_48[3] + 0x28;
      }
      thunk_FUN_14028af80(lVar16,uVar14);
    }
    param_2[0xe] = 0;
    if ((ulonglong)param_2[0xf] < 0x10) {
      puVar4 = param_2 + 0xc;
    }
    else {
      puVar4 = (undefined8 *)param_2[0xc];
    }
    *(undefined1 *)puVar4 = 0;
    uVar14 = param_2[3];
    lVar16 = param_2[2];
    puVar8 = param_2;
    if (0xf < uVar14) {
      puVar8 = (undefined8 *)*param_2;
    }
    if (lVar16 == 4) {
      iVar3 = memcmp(puVar8,&DAT_140473b68,4);
      puVar4 = (undefined8 *)CONCAT44(extraout_var,iVar3);
      if (iVar3 != 0) goto LAB_140170b6a;
LAB_140170b99:
      puVar4 = param_2;
      if (0xf < uVar14) {
        puVar4 = (undefined8 *)*param_2;
      }
      if (lVar16 == 3) {
        iVar3 = memcmp(puVar4,&DAT_14048ddfc,3);
        bVar17 = iVar3 == 0;
      }
      else {
        bVar17 = false;
      }
      uVar12 = 0x7c;
      if (bVar17) {
        uVar12 = 0x20;
      }
      puVar4 = (undefined8 *)FUN_140031d10(plVar15,uVar12,0);
      if (puVar4 != (undefined8 *)0xffffffffffffffff) {
        puVar1 = (undefined1 *)((longlong)puVar4 + 1);
        local_48[2] = 0;
        local_48[3] = 0;
        local_48[0] = 0;
        local_48[1] = 0;
        if ((undefined1 *)param_2[10] < puVar1) {
LAB_140170dc7:
          local_48[3] = 0;
          local_48[2] = 0;
          local_48[1] = 0;
          local_48[0] = 0;
                    /* WARNING: Subroutine does not return */
          FUN_140012940();
        }
        lVar6 = (longlong)param_2[10] - (longlong)puVar1;
        lVar16 = -1;
        if (lVar6 != -1) {
          lVar16 = lVar6;
        }
        plVar7 = plVar15;
        if (0xf < (ulonglong)param_2[0xb]) {
          plVar7 = (longlong *)*plVar15;
        }
        FUN_140017480(local_48,puVar1 + (longlong)plVar7,lVar16);
        FUN_14000de40(param_2 + 0xc,local_48);
        puVar8 = puVar4;
        if (0xf < (ulonglong)local_48[3]) {
          uVar14 = local_48[3] + 1;
          lVar16 = local_48[0];
          if (0xfff < uVar14) {
            lVar16 = *(longlong *)(local_48[0] + -8);
            if (0x1f < (local_48[0] - lVar16) - 8U) goto LAB_140170d76;
            uVar14 = local_48[3] + 0x28;
          }
          thunk_FUN_14028af80(lVar16,uVar14);
        }
        local_48[2] = 0;
        local_48[0] = 0;
        local_48[1] = 0;
        if ((undefined8 *)param_2[10] < puVar4) {
          puVar8 = (undefined8 *)param_2[10];
        }
        local_48[3] = 0;
        if (0xf < (ulonglong)param_2[0xb]) {
          plVar15 = (longlong *)*plVar15;
        }
        FUN_140017480(local_48,plVar15,puVar8);
        puVar4 = (undefined8 *)FUN_14000de40(param_2 + 8,local_48);
        if (0xf < (ulonglong)local_48[3]) {
          uVar14 = local_48[3] + 1;
          lVar16 = local_48[0];
          if (0xfff < uVar14) {
            lVar16 = *(longlong *)(local_48[0] + -8);
            if (0x1f < (local_48[0] - lVar16) - 8U) goto LAB_140170d76;
            uVar14 = local_48[3] + 0x28;
          }
          puVar4 = (undefined8 *)thunk_FUN_14028af80(lVar16,uVar14);
        }
      }
    }
    else {
LAB_140170b6a:
      puVar8 = param_2;
      if (0xf < uVar14) {
        puVar8 = (undefined8 *)*param_2;
      }
      if (lVar16 == 3) {
        iVar3 = memcmp(puVar8,&DAT_14048ddfc,3);
        puVar4 = (undefined8 *)CONCAT44(extraout_var_00,iVar3);
        if (iVar3 == 0) goto LAB_140170b99;
      }
    }
    uVar14 = param_2[3];
    puVar8 = (undefined8 *)param_2[2];
    puVar9 = param_2;
    if (0xf < uVar14) {
      puVar9 = (undefined8 *)*param_2;
    }
    if (puVar8 != (undefined8 *)&DAT_00000004) {
LAB_140170d21:
      puVar9 = param_2;
      if (0xf < uVar14) {
        puVar9 = (undefined8 *)*param_2;
      }
      if (puVar8 == (undefined8 *)&DAT_00000009) {
        iVar3 = memcmp(puVar9,"directory",9);
        puVar4 = (undefined8 *)CONCAT44(extraout_var_02,iVar3);
        if (iVar3 == 0) goto LAB_140170d99;
      }
      puVar9 = param_2;
      if (0xf < uVar14) {
        puVar9 = (undefined8 *)*param_2;
      }
      if (puVar8 == (undefined8 *)0x3) {
        iVar3 = memcmp(puVar9,&DAT_14048ddf8,3);
        puVar4 = (undefined8 *)CONCAT44(extraout_var_03,iVar3);
        if (iVar3 == 0) goto LAB_140170d99;
      }
      if (0xf < uVar14) {
        puVar10 = (undefined8 *)*param_2;
        puVar13 = auStack_68;
      }
      goto LAB_140170d80;
    }
    iVar3 = memcmp(puVar9,&DAT_140473b68,4);
    puVar4 = (undefined8 *)CONCAT44(extraout_var_01,iVar3);
    if (iVar3 != 0) goto LAB_140170d21;
  }
  else {
    uVar11 = local_48[3] + 1;
    lVar6 = local_48[0];
    if (uVar11 < 0x1000) {
LAB_140170a12:
      thunk_FUN_14028af80(lVar6,uVar11);
      goto LAB_140170a17;
    }
    lVar6 = *(longlong *)(local_48[0] + -8);
    if ((local_48[0] - lVar6) - 8U < 0x20) {
      uVar11 = local_48[3] + 0x28;
      goto LAB_140170a12;
    }
LAB_140170d76:
    pcVar2 = (code *)swi(0x29);
    puVar4 = (undefined8 *)(*pcVar2)(5);
    puVar13 = auStack_60;
LAB_140170d80:
    if (puVar8 != (undefined8 *)0x3) goto LAB_140170da4;
    *(undefined8 *)(puVar13 + -8) = 0x140170d95;
    iVar3 = memcmp(puVar10,&DAT_14048ddfc,3);
    puVar4 = (undefined8 *)CONCAT44(extraout_var_04,iVar3);
    if (iVar3 != 0) goto LAB_140170da4;
  }
LAB_140170d99:
  if (param_2[10] != 0) {
    return CONCAT71((int7)((ulonglong)puVar4 >> 8),1);
  }
LAB_140170da4:
  return (ulonglong)puVar4 & 0xffffffffffffff00;
}

