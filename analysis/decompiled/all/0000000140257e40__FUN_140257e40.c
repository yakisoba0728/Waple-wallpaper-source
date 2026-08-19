// Function: FUN_140257e40
// Addr: 140257e40
// Size: 300 bytes


void FUN_140257e40(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float local_res8;
  float fStackX_c;
  undefined8 uStack_b8;
  float fStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  
  if (*(longlong *)(param_1 + 0x5a8) != 0) {
    lVar10 = *(longlong *)(param_1 + 200);
    puVar8 = *(undefined8 **)(lVar10 + 0x30);
    *(undefined1 *)(lVar10 + 0x1ca) = 1;
    *(undefined8 **)(lVar10 + 0x30) = puVar8 + 8;
    puVar8[8] = *puVar8;
    puVar8[9] = puVar8[1];
    puVar8[10] = puVar8[2];
    puVar8[0xb] = puVar8[3];
    puVar8[0xc] = puVar8[4];
    puVar8[0xd] = puVar8[5];
    puVar8[0xe] = puVar8[6];
    puVar8[0xf] = puVar8[7];
    lVar10 = *(longlong *)(param_1 + 200) + 0x18a0;
    fVar11 = *(float *)(*(longlong *)(param_1 + 0x5a8) + 0x90);
    if (((*(int *)(param_1 + 800) < 1) && ((*(byte *)(param_1 + 0x304) & 0x10) == 0)) &&
       ((*(byte *)(param_1 + 0x594) & 2) == 0)) {
      fStackX_c = 0.0;
      local_res8 = 0.0;
    }
    else {
      local_res8 = *(float *)(param_1 + 0x4e8);
      fStackX_c = *(float *)(param_1 + 0x4ec);
      if (DAT_140492a04 <= local_res8) {
        local_res8 = DAT_140492a04;
      }
      if (DAT_140492a04 <= fStackX_c) {
        fStackX_c = DAT_140492a04;
      }
    }
    fStackX_c = fStackX_c - *(float *)(*(longlong *)(param_1 + 0x5a8) + 0x94);
    if (fVar11 < 0.0) {
      local_res8 = local_res8 - fVar11;
    }
    puVar8 = *(undefined8 **)(*(longlong *)(param_1 + 200) + 0x30);
    uVar2 = puVar8[4];
    uVar3 = puVar8[5];
    uVar4 = puVar8[2];
    uVar5 = puVar8[3];
    uVar6 = *puVar8;
    uVar7 = puVar8[1];
    *puVar8 = *puVar8;
    puVar8[1] = puVar8[1];
    puVar8[2] = puVar8[2];
    puVar8[3] = puVar8[3];
    *(undefined4 *)(puVar8 + 4) = *(undefined4 *)(puVar8 + 4);
    *(undefined4 *)((longlong)puVar8 + 0x24) = *(undefined4 *)((longlong)puVar8 + 0x24);
    *(undefined4 *)(puVar8 + 5) = *(undefined4 *)(puVar8 + 5);
    *(undefined4 *)((longlong)puVar8 + 0x2c) = *(undefined4 *)((longlong)puVar8 + 0x2c);
    puVar8[6] = CONCAT44((float)((ulonglong)uVar6 >> 0x20) * local_res8 +
                         (float)((ulonglong)uVar4 >> 0x20) * fStackX_c +
                         (float)((ulonglong)uVar2 >> 0x20) * 0.0 +
                         (float)((ulonglong)puVar8[6] >> 0x20),
                         (float)uVar6 * local_res8 + (float)uVar4 * fStackX_c + (float)uVar2 * 0.0 +
                         (float)puVar8[6]);
    puVar8[7] = CONCAT44((float)((ulonglong)uVar7 >> 0x20) * local_res8 +
                         (float)((ulonglong)uVar5 >> 0x20) * fStackX_c +
                         (float)((ulonglong)uVar3 >> 0x20) * 0.0 +
                         (float)((ulonglong)puVar8[7] >> 0x20),
                         (float)uVar7 * local_res8 + (float)uVar5 * fStackX_c + (float)uVar3 * 0.0 +
                         (float)puVar8[7]);
    *(undefined1 *)(*(longlong *)(param_1 + 200) + 0x1ca) = 1;
    if ((*(int *)(param_1 + 0x518) != 0) && (lVar9 = *(longlong *)(param_1 + 0x5a8), lVar9 != 0)) {
      uStack_98 = 0;
      uStack_80 = 0;
      uStack_a8 = 0;
      uStack_a0 = 0;
      uStack_90 = 0;
      uStack_88 = 0;
      FUN_140258c50(param_1,&uStack_a8);
      *(undefined8 *)(lVar9 + 0x1c) = uStack_a8;
      *(undefined8 *)(lVar9 + 0x24) = uStack_a0;
      *(undefined8 *)(lVar9 + 0x2c) = uStack_98;
      *(undefined8 *)(lVar9 + 0x34) = uStack_90;
      *(undefined8 *)(lVar9 + 0x3c) = uStack_88;
      *(undefined8 *)(lVar9 + 0x44) = uStack_80;
    }
    fVar11 = DAT_1404927d4;
    if ((*(uint *)(*(longlong *)(param_1 + 200) + 0x118) & 0x2000) != 0) {
      fVar11 = *(float *)(param_1 + 0x340);
    }
    fStack_b0 = fVar11 * *(float *)(param_1 + 0x338);
    uStack_b8 = CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x330) >> 0x20) * fVar11,
                         (float)*(undefined8 *)(param_1 + 0x330) * fVar11);
    FUN_1401b3500(lVar10,*(undefined8 *)(param_1 + 0x5a8),0,0,&uStack_b8,
                  *(undefined4 *)(param_1 + 0x33c));
    lVar10 = *(longlong *)(param_1 + 200);
    plVar1 = (longlong *)(lVar10 + 0x30);
    *plVar1 = *plVar1 + -0x40;
    *(undefined1 *)(lVar10 + 0x1ca) = 1;
  }
  return;
}

