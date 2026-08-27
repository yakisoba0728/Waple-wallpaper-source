// Function: FUN_140185520
// Addr: 140185520
// Size: 1052 bytes


undefined8
FUN_140185520(undefined8 param_1,longlong *param_2,undefined8 param_3,float *param_4,float *param_5,
             float *param_6)

{
  float fVar1;
  float fVar2;
  longlong *plVar3;
  undefined8 uVar4;
  float *pfVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float local_114;
  float local_110;
  float local_10c;
  float local_108;
  float local_104;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_d8;
  float local_d4;
  float local_d0;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_b8;
  float local_b4;
  float local_b0;
  
  plVar3 = (longlong *)param_2[0x5d];
  if ((plVar3 != (longlong *)0x0) && (*plVar3 != 0)) {
    local_104 = *(float *)(plVar3 + 0x37);
    fVar7 = *(float *)((longlong)plVar3 + 0x1c4);
    if (local_104 < fVar7) {
      fVar12 = *(float *)(plVar3 + 0x39);
      fVar6 = *(float *)((longlong)plVar3 + 0x1bc);
      fVar13 = *(float *)(plVar3 + 0x38);
      fVar14 = *(float *)((longlong)plVar3 + 0x1cc);
      uVar4 = (**(code **)(*param_2 + 0x80))(param_2);
      FUN_14005f730(&local_e8,uVar4);
      fVar10 = param_5[1];
      fVar11 = param_5[2];
      fVar15 = *param_5;
      fVar1 = param_4[1];
      fVar2 = param_4[2];
      fVar9 = local_e0 * fVar15 + local_d0 * fVar10 + local_c0 * fVar11;
      fVar8 = local_e4 * fVar15 + local_d4 * fVar10 + local_c4 * fVar11;
      fVar10 = local_e8 * fVar15 + local_d8 * fVar10 + local_c8 * fVar11;
      fVar11 = (fVar7 - local_104) * DAT_1404926c0;
      fVar15 = (fVar12 - fVar6) * DAT_1404926c0;
      fVar16 = (fVar14 - fVar13) * DAT_1404926c0;
      fVar7 = *param_4;
      fVar13 = (local_e8 * fVar7 + local_d8 * fVar1 + local_c8 * fVar2 + local_b8) - fVar11;
      fVar6 = DAT_140492704 / fVar10;
      fVar14 = (local_e4 * fVar7 + local_d4 * fVar1 + local_c4 * fVar2 + local_b4) - fVar15;
      fVar12 = (fVar11 - fVar13) * fVar6;
      local_10c = DAT_140492704 / fVar9;
      fVar6 = ((float)((uint)fVar11 ^ DAT_140492ff0) - fVar13) * fVar6;
      local_110 = DAT_140492704 / fVar8;
      local_114 = (fVar15 - fVar14) * local_110;
      fVar11 = (local_e0 * fVar7 + local_d0 * fVar1 + local_c0 * fVar2 + local_b0) - fVar16;
      fVar7 = fVar12;
      if (fVar12 <= fVar6) {
        fVar7 = fVar6;
      }
      if (fVar6 <= fVar12) {
        fVar12 = fVar6;
      }
      local_110 = ((float)((uint)fVar15 ^ DAT_140492ff0) - fVar14) * local_110;
      local_108 = ((float)((uint)fVar16 ^ DAT_140492ff0) - fVar11) * local_10c;
      pfVar5 = &local_114;
      if (local_110 <= local_114) {
        pfVar5 = &local_110;
      }
      local_10c = (fVar16 - fVar11) * local_10c;
      fVar6 = *pfVar5;
      if (*pfVar5 <= fVar12) {
        fVar6 = fVar12;
      }
      pfVar5 = &local_10c;
      if (local_108 <= local_10c) {
        pfVar5 = &local_108;
      }
      fVar12 = *pfVar5;
      if (*pfVar5 <= fVar6) {
        fVar12 = fVar6;
      }
      pfVar5 = &local_114;
      if (local_114 <= local_110) {
        pfVar5 = &local_110;
      }
      fVar6 = *pfVar5;
      if (fVar7 <= *pfVar5) {
        fVar6 = fVar7;
      }
      pfVar5 = &local_10c;
      if (local_10c <= local_108) {
        pfVar5 = &local_108;
      }
      fVar7 = *pfVar5;
      if (fVar6 <= *pfVar5) {
        fVar7 = fVar6;
      }
      if (fVar12 <= fVar7) {
        *param_6 = fVar10 * fVar12 + fVar13;
        param_6[1] = fVar12 * fVar8 + fVar14;
        param_6[2] = fVar12 * fVar9 + fVar11;
        return 1;
      }
    }
  }
  return 0;
}

