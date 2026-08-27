// Function: FUN_140393180
// Addr: 140393180
// Size: 1716 bytes


longlong * FUN_140393180(longlong *param_1,longlong param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  longlong lVar8;
  int *piVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  code *pcVar13;
  int iVar14;
  short sVar15;
  undefined8 *puVar16;
  byte *pbVar17;
  int *piVar18;
  longlong *local_res8 [4];
  undefined4 local_88 [2];
  longlong local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined1 local_60;
  int *local_58;
  int local_50;
  undefined2 local_4c;
  
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  local_88[0] = 0;
  local_80 = 0;
  uStack_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = (int *)0x0;
  local_50 = 0x10000;
  local_4c = 0;
  iVar14 = *(int *)(param_2 + 0x18);
  if (iVar14 == -1) {
    lVar8 = FUN_140398a10(param_2 + 0x80);
    iVar14 = (uint)*(byte *)(lVar8 + 5) + (uint)*(byte *)(lVar8 + 4) * 0x100;
    if (iVar14 == 0) {
      iVar14 = 0;
    }
    *(int *)(param_2 + 0x18) = iVar14;
  }
  local_4c = CONCAT11(local_4c._1_1_,1);
  local_50 = iVar14;
  if (*(code **)(param_2 + 0x20) == (code *)0x0) {
    piVar18 = (int *)&DAT_14045dd10;
  }
  else {
    piVar9 = (int *)(**(code **)(param_2 + 0x20))
                              (param_2,0x636d6170,*(undefined8 *)(param_2 + 0x28));
    piVar18 = (int *)&DAT_14045dd10;
    if (piVar9 != (int *)0x0) {
      piVar18 = piVar9;
    }
  }
  if (*piVar18 != 0) {
    LOCK();
    *piVar18 = *piVar18 + 1;
    UNLOCK();
  }
  local_60 = 0;
  local_58 = piVar18;
  FUN_14040c230(local_88,0,0);
  if (local_80 == 0) {
    FUN_1403beff0(local_88);
  }
  else {
    cVar7 = FUN_1404067e0(local_80,local_88);
    FUN_1403beff0(local_88);
    if (cVar7 == '\0') {
      FUN_140414150(piVar18);
      piVar18 = (int *)&DAT_14045dd10;
    }
    else if ((char)piVar18[1] != '\0') {
      *(undefined1 *)(piVar18 + 1) = 0;
    }
  }
  piVar9 = local_58;
  param_1[0xb] = (longlong)piVar18;
  if (local_58 != (int *)0x0) {
    iVar14 = 1;
    FUN_1402fc370("SANITIZE",local_80,0,1,0,0xffffffff,"end [%p..%p]",local_80,uStack_78);
    if ((piVar9 != (int *)0x0) && (*piVar9 != 0)) {
      LOCK();
      iVar1 = *piVar9;
      *piVar9 = *piVar9 + -1;
      UNLOCK();
      if (iVar1 == iVar14) {
        *piVar9 = -0xdead;
        lVar8 = *(longlong *)(piVar9 + 2);
        if (lVar8 != 0) {
          FUN_1403c3220(lVar8);
          thunk_FUN_1402d9040(lVar8);
          piVar9[2] = 0;
          piVar9[3] = 0;
        }
        if (*(code **)(piVar9 + 10) != (code *)0x0) {
          (**(code **)(piVar9 + 10))(*(undefined8 *)(piVar9 + 8));
          piVar9[8] = 0;
          piVar9[9] = 0;
          piVar9[10] = 0;
          piVar9[0xb] = 0;
        }
        thunk_FUN_1402d9040(piVar9);
      }
    }
  }
  puVar16 = &DAT_14045dd10;
  if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
    puVar16 = (undefined8 *)param_1[0xb];
  }
  if (*(uint *)(puVar16 + 3) < 4) {
    puVar16 = &DAT_14045dd10;
  }
  else {
    puVar16 = (undefined8 *)puVar16[2];
  }
  bVar6 = false;
  bVar5 = false;
  puVar10 = (undefined8 *)FUN_1403c05d0(puVar16,3,0);
  if (puVar10 == (undefined8 *)0x0) {
    bVar4 = false;
    puVar10 = (undefined8 *)FUN_1403c05d0(puVar16,3,10);
    if (((((puVar10 == (undefined8 *)0x0) &&
          (puVar10 = (undefined8 *)FUN_1403c05d0(puVar16,0,6), puVar10 == (undefined8 *)0x0)) &&
         (puVar10 = (undefined8 *)FUN_1403c05d0(puVar16,0,4), puVar10 == (undefined8 *)0x0)) &&
        ((puVar10 = (undefined8 *)FUN_1403c05d0(puVar16,3,1), puVar10 == (undefined8 *)0x0 &&
         (puVar10 = (undefined8 *)FUN_1403c05d0(puVar16,0,3), puVar10 == (undefined8 *)0x0)))) &&
       ((puVar10 = (undefined8 *)FUN_1403c05d0(puVar16,0,2), puVar10 == (undefined8 *)0x0 &&
        ((puVar10 = (undefined8 *)FUN_1403c05d0(puVar16,0,1), puVar10 == (undefined8 *)0x0 &&
         (puVar10 = (undefined8 *)FUN_1403c05d0(puVar16,0,0), puVar10 == (undefined8 *)0x0)))))) {
      puVar10 = (undefined8 *)FUN_1403c05d0(puVar16,1,0);
      if (puVar10 == (undefined8 *)0x0) {
        puVar10 = (undefined8 *)FUN_1403c05d0(puVar16,1,0xffff);
        if (puVar10 == (undefined8 *)0x0) {
          puVar10 = &DAT_14045dd10;
        }
        else {
          bVar6 = true;
        }
      }
      else {
        bVar6 = true;
        bVar5 = true;
      }
    }
  }
  else {
    bVar4 = true;
  }
  *param_1 = (longlong)puVar10;
  param_1[1] = (longlong)&DAT_14045dd10;
  puVar16 = &DAT_14045dd10;
  if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
    puVar16 = (undefined8 *)param_1[0xb];
  }
  if (*(uint *)(puVar16 + 3) < 4) {
    puVar16 = &DAT_14045dd10;
  }
  else {
    puVar16 = (undefined8 *)puVar16[2];
  }
  pbVar11 = (byte *)FUN_1403c05d0(puVar16,0,5);
  if ((pbVar11 != (byte *)0x0) && ((uint)*pbVar11 * 0x100 + (uint)pbVar11[1] == 0xe)) {
    param_1[1] = (longlong)pbVar11;
  }
  puVar16 = (undefined8 *)_malloc_base(0x400);
  param_1[10] = (longlong)puVar16;
  if (puVar16 == (undefined8 *)0x0) {
    return param_1;
  }
  lVar8 = 8;
  puVar10 = puVar16;
  do {
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
    puVar10[6] = 0;
    puVar10[7] = 0;
    puVar10[8] = 0;
    puVar10[9] = 0;
    puVar10[10] = 0;
    puVar10[0xb] = 0;
    puVar10[0xc] = 0;
    puVar10[0xd] = 0;
    puVar10[0xe] = 0;
    puVar10[0xf] = 0;
    puVar10 = puVar10 + 0x10;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  puVar10 = puVar16 + 0x80;
  for (; puVar16 != puVar10; puVar16 = (undefined8 *)((longlong)puVar16 + 4)) {
    *(undefined4 *)puVar16 = 0xffffffff;
  }
  pbVar11 = (byte *)*param_1;
  if (pbVar11 == (byte *)0x0) {
    param_1[3] = (longlong)&DAT_14045dd10;
    pbVar17 = (byte *)&DAT_14045dd10;
  }
  else {
    param_1[3] = (longlong)pbVar11;
    pbVar17 = pbVar11;
  }
  sVar15 = (ushort)*pbVar17 * 0x100 + (ushort)pbVar17[1];
  local_res8[0] = param_1;
  if (bVar4) {
    pbVar11 = (byte *)FUN_140398100(param_2 + 0xa0);
    if (((uint)pbVar11[1] + (uint)*pbVar11 * 0x100 != 0) || (bVar2 = pbVar11[0x3e], bVar2 == 0)) {
      if (sVar15 == 4) {
        FUN_140399300(local_res8,FUN_1403875b0);
        return param_1;
      }
      pcVar13 = FUN_140387450;
      goto LAB_140393819;
    }
    if (bVar2 == 0xb2) {
      if (sVar15 == 4) {
        FUN_140399300(local_res8,FUN_1403874d0);
        return param_1;
      }
      pcVar13 = FUN_140387350;
      goto LAB_140393819;
    }
    if (bVar2 == 0xb3) {
      if (sVar15 != 4) {
        pcVar13 = FUN_1403873d0;
        goto LAB_140393819;
      }
      pbVar11 = (byte *)*param_1;
      pbVar17 = (byte *)&DAT_14045dd10;
      if (pbVar11 != (byte *)0x0) {
        pbVar17 = pbVar11;
      }
      puVar16 = &DAT_14045dd10;
      if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
        puVar16 = (undefined8 *)param_1[0xb];
      }
      uVar3 = *(uint *)(puVar16 + 3);
      pbVar12 = (byte *)&DAT_14045dd10;
      if (3 < uVar3) {
        pbVar12 = (byte *)puVar16[2];
      }
      if (pbVar17 < pbVar12) {
        iVar14 = 0;
      }
      else {
        iVar14 = uVar3 - (int)((longlong)pbVar17 - (longlong)pbVar12);
        if ((ulonglong)uVar3 <= (ulonglong)((longlong)pbVar17 - (longlong)pbVar12)) {
          iVar14 = 0;
        }
      }
      pbVar17 = (byte *)&DAT_14045dd10;
      if (pbVar11 != (byte *)0x0) {
        pbVar17 = pbVar11;
      }
      FUN_1403e3650(param_1 + 4,pbVar17,iVar14);
      pcVar13 = FUN_140387540;
    }
    else {
      if (sVar15 != 4) {
        param_1[2] = (longlong)&LAB_140387130;
        return param_1;
      }
      pbVar11 = (byte *)*param_1;
      pbVar17 = (byte *)&DAT_14045dd10;
      if (pbVar11 != (byte *)0x0) {
        pbVar17 = pbVar11;
      }
      puVar16 = &DAT_14045dd10;
      if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
        puVar16 = (undefined8 *)param_1[0xb];
      }
      uVar3 = *(uint *)(puVar16 + 3);
      pbVar12 = (byte *)&DAT_14045dd10;
      if (3 < uVar3) {
        pbVar12 = (byte *)puVar16[2];
      }
      if (pbVar17 < pbVar12) {
        iVar14 = 0;
      }
      else {
        iVar14 = uVar3 - (int)((longlong)pbVar17 - (longlong)pbVar12);
        if ((ulonglong)uVar3 <= (ulonglong)((longlong)pbVar17 - (longlong)pbVar12)) {
          iVar14 = 0;
        }
      }
      pbVar17 = (byte *)&DAT_14045dd10;
      if (pbVar11 != (byte *)0x0) {
        pbVar17 = pbVar11;
      }
      FUN_1403e3650(param_1 + 4,pbVar17,iVar14);
      pcVar13 = (code *)&LAB_140387190;
    }
  }
  else {
    if (bVar5) {
      if (sVar15 == 4) {
        FUN_140399300(local_res8,FUN_1403872b0);
        return param_1;
      }
      pcVar13 = FUN_140387200;
      goto LAB_140393819;
    }
    if (bVar6) {
      if (sVar15 == 4) {
        FUN_140399300(local_res8,FUN_1403871d0);
        return param_1;
      }
      pcVar13 = FUN_1403871a0;
      goto LAB_140393819;
    }
    pbVar17 = (byte *)&DAT_14045dd10;
    if (pbVar11 != (byte *)0x0) {
      pbVar17 = pbVar11;
    }
    iVar14 = (uint)pbVar17[1] + (uint)*pbVar17 * 0x100;
    if (iVar14 != 4) {
      pcVar13 = FUN_140387140;
      if (iVar14 != 0xc) {
        pcVar13 = (code *)&LAB_140387130;
      }
      goto LAB_140393819;
    }
    pbVar17 = (byte *)&DAT_14045dd10;
    if (pbVar11 != (byte *)0x0) {
      pbVar17 = pbVar11;
    }
    puVar16 = &DAT_14045dd10;
    if ((undefined8 *)param_1[0xb] != (undefined8 *)0x0) {
      puVar16 = (undefined8 *)param_1[0xb];
    }
    uVar3 = *(uint *)(puVar16 + 3);
    pbVar12 = (byte *)&DAT_14045dd10;
    if (3 < uVar3) {
      pbVar12 = (byte *)puVar16[2];
    }
    if (pbVar17 < pbVar12) {
      iVar14 = 0;
    }
    else {
      iVar14 = uVar3 - (int)((longlong)pbVar17 - (longlong)pbVar12);
      if ((ulonglong)uVar3 <= (ulonglong)((longlong)pbVar17 - (longlong)pbVar12)) {
        iVar14 = 0;
      }
    }
    pbVar17 = (byte *)&DAT_14045dd10;
    if (pbVar11 != (byte *)0x0) {
      pbVar17 = pbVar11;
    }
    FUN_1403e3650(param_1 + 4,pbVar17,iVar14);
    pcVar13 = (code *)&LAB_140387190;
  }
  param_1[3] = (longlong)(param_1 + 4);
LAB_140393819:
  param_1[2] = (longlong)pcVar13;
  return param_1;
}

