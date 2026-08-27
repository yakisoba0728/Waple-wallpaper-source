// Function: FUN_14022a580
// Addr: 14022a580
// Size: 792 bytes


void FUN_14022a580(longlong *param_1,longlong param_2,longlong param_3,longlong param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  longlong lVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  longlong lVar9;
  longlong lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_res10;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_bc;
  float local_b8;
  float local_b4;
  
  if ((*(byte *)(param_2 + 100) & 1) != 0) {
    bVar6 = *(byte *)(param_3 + 0x20) & 1;
    local_f0 = DAT_140492704;
    local_res10 = 0.0;
    local_f8 = 0.0;
    local_f4 = 0.0;
    fVar11 = DAT_140492704;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar15 = DAT_140492704;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    if ((*(byte *)(param_1 + 4) & 1) == 0) {
      if (bVar6 != 0) {
        pfVar4 = *(float **)(*param_1 + 0x30);
        local_res10 = pfVar4[0xc];
        fVar11 = *pfVar4;
        fVar12 = pfVar4[1];
        fVar13 = pfVar4[2];
        fVar14 = pfVar4[4];
        fVar15 = pfVar4[5];
        fVar16 = pfVar4[6];
        fVar17 = pfVar4[8];
        fVar18 = pfVar4[9];
        local_f0 = pfVar4[10];
        local_f8 = pfVar4[0xd];
        local_f4 = pfVar4[0xe];
      }
    }
    else if (bVar6 == 0) {
      FUN_14005f730(&local_ec,*(undefined8 *)(*param_1 + 0x30));
      local_res10 = local_bc;
      local_f8 = local_b8;
      fVar11 = local_ec;
      fVar12 = local_e8;
      fVar13 = local_e4;
      fVar14 = local_dc;
      fVar15 = local_d8;
      fVar16 = local_d4;
      fVar17 = local_cc;
      fVar18 = local_c8;
      local_f4 = local_b4;
      local_f0 = local_c4;
    }
    iVar8 = *(int *)(param_2 + 0x68);
    for (uVar7 = 0; (iVar8 < 8 && (uVar7 < *(uint *)(param_4 + 0xe8))); uVar7 = uVar7 + 1) {
      lVar10 = (longlong)(int)uVar7;
      if (*(float *)(*(longlong *)(param_4 + 8) + lVar10 * 4) != 0.0) {
        lVar5 = *(longlong *)(param_3 + 0x400);
        lVar9 = (longlong)iVar8 * 0xd0;
        if ((*(uint *)(lVar5 + 0xc0 + lVar9) & 0x10005) == 0) {
          iVar8 = iVar8 + 1;
          fVar1 = *(float *)(*(longlong *)(param_4 + 0x58) + lVar10 * 4);
          fVar2 = *(float *)(*(longlong *)(param_4 + 0x60) + lVar10 * 4);
          fVar3 = *(float *)(*(longlong *)(param_4 + 0x68) + lVar10 * 4);
          *(float *)(lVar5 + 0x30 + lVar9) =
               fVar11 * fVar1 + fVar14 * fVar2 + fVar17 * fVar3 + local_res10;
          *(float *)(lVar5 + 0x34 + lVar9) =
               fVar12 * fVar1 + fVar15 * fVar2 + fVar18 * fVar3 + local_f8;
          *(float *)(lVar5 + 0x38 + lVar9) =
               fVar13 * fVar1 + fVar16 * fVar2 + local_f0 * fVar3 + local_f4;
        }
      }
    }
  }
  return;
}

