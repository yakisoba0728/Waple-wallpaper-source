// Function: FUN_1401edb20
// Addr: 1401edb20
// Size: 777 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401edb20(longlong *param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec [12];
  undefined8 local_e0;
  undefined8 uStack_d8;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a0;
  float local_9c;
  float local_98;
  
  fVar8 = DAT_140492704;
  local_f8 = *param_2;
  local_f4 = param_2[1];
  local_e0 = _DAT_140492e20;
  uStack_d8 = _UNK_140492e28;
  if ((*(byte *)(*param_1 + 0x120) & 0x80) == 0) {
    local_f0 = 0x3f000000;
    puVar3 = (undefined8 *)
             FUN_14019df90(local_ec,&local_f8,param_1[2],param_1[1] + 0x11a0,&local_e0);
    *(undefined8 *)param_4 = *puVar3;
    param_4[2] = *(float *)(puVar3 + 1);
    lVar2 = param_1[1];
    uVar1 = *(uint *)(lVar2 + 0x118);
    fVar8 = *(float *)(lVar2 + 0x70);
    *(undefined8 *)param_3 = *(undefined8 *)(lVar2 + 0x68);
    param_3[2] = fVar8;
    if ((uVar1 & 0x400) != 0) {
      *param_3 = *param_4;
      param_3[1] = param_4[1];
      param_4[0] = 0.0;
      param_4[1] = 0.0;
      param_4[2] = 1.0;
      param_3[2] = param_3[2] - DAT_14049294c;
      return;
    }
    fVar6 = *param_4 - *(float *)(lVar2 + 0x68);
    *param_4 = fVar6;
    fVar7 = param_4[1] - *(float *)(lVar2 + 0x6c);
    param_4[1] = fVar7;
    fVar5 = param_4[2] - *(float *)(lVar2 + 0x70);
    fVar8 = fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5;
    if (fVar8 < 0.0) {
      fVar8 = (float)FUN_14041ad10();
    }
    else {
      fVar8 = SQRT(fVar8);
    }
    fVar8 = DAT_140492704 / fVar8;
    fVar6 = fVar6 * fVar8;
    fVar7 = fVar7 * fVar8;
    fVar5 = fVar5 * fVar8;
  }
  else {
    local_f0 = 0x3f800000;
    puVar3 = (undefined8 *)FUN_14019df90(local_ec,&local_f8,param_1[2],param_1[3],&local_e0);
    *(undefined8 *)param_4 = *puVar3;
    param_4[2] = *(float *)(puVar3 + 1);
    FUN_14005f730(&local_d0,param_1[2]);
    fVar6 = local_d0 * 0.0 + local_c0 * 0.0 + local_b0 * 0.0 + local_a0;
    *param_3 = fVar6;
    fVar7 = local_cc * 0.0 + local_bc * 0.0 + local_ac * 0.0 + local_9c;
    param_3[1] = fVar7;
    param_3[2] = local_c8 * 0.0 + local_b8 * 0.0 + local_a8 * 0.0 + local_98;
    fVar6 = *param_4 - fVar6;
    fVar7 = param_4[1] - fVar7;
    fVar5 = param_4[2] - param_3[2];
    fVar4 = fVar6 * fVar6 + fVar7 * fVar7 + fVar5 * fVar5;
    if (fVar4 < 0.0) {
      fVar4 = (float)FUN_14041ad10();
    }
    else {
      fVar4 = SQRT(fVar4);
    }
    fVar8 = fVar8 / fVar4;
    fVar6 = fVar6 * fVar8;
    fVar7 = fVar7 * fVar8;
    fVar5 = fVar5 * fVar8;
  }
  param_4[2] = fVar5;
  param_4[1] = fVar7;
  *param_4 = fVar6;
  return;
}

