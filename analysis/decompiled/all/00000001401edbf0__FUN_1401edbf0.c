// Function: FUN_1401edbf0
// Addr: 1401edbf0
// Size: 387 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1401edbf0(longlong *param_1,undefined4 *param_2,float *param_3,float *param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec [12];
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined1 local_d0 [176];
  
  local_f8 = *param_2;
  local_f4 = param_2[1];
  local_e0 = _DAT_140492ef0;
  uStack_d8 = _UNK_140492ef8;
  if ((*(byte *)(*param_1 + 0x120) & 0x80) != 0) {
    local_f0 = 0x3f800000;
    puVar3 = (undefined8 *)FUN_14019e060(local_ec,&local_f8,param_1[2],param_1[3],&local_e0);
    *(undefined8 *)param_4 = *puVar3;
    param_4[2] = *(float *)(puVar3 + 1);
                    /* WARNING: Subroutine does not return */
    FUN_14005f800(local_d0,param_1[2]);
  }
  local_f0 = 0x3f000000;
  puVar3 = (undefined8 *)FUN_14019e060(local_ec,&local_f8,param_1[2],param_1[1] + 0x11a0,&local_e0);
  *(undefined8 *)param_4 = *puVar3;
  param_4[2] = *(float *)(puVar3 + 1);
  lVar2 = param_1[1];
  uVar1 = *(uint *)(lVar2 + 0x118);
  fVar4 = *(float *)(lVar2 + 0x70);
  *(undefined8 *)param_3 = *(undefined8 *)(lVar2 + 0x68);
  param_3[2] = fVar4;
  if ((uVar1 & 0x400) == 0) {
    fVar5 = *param_4 - *(float *)(lVar2 + 0x68);
    *param_4 = fVar5;
    fVar6 = param_4[1] - *(float *)(lVar2 + 0x6c);
    param_4[1] = fVar6;
    fVar7 = param_4[2] - *(float *)(lVar2 + 0x70);
    fVar4 = fVar5 * fVar5 + fVar6 * fVar6 + fVar7 * fVar7;
    if (fVar4 < 0.0) {
                    /* WARNING: Subroutine does not return */
      FUN_14041ade0();
    }
    fVar4 = DAT_1404927d4 / SQRT(fVar4);
    param_4[2] = fVar7 * fVar4;
    param_4[1] = fVar6 * fVar4;
    *param_4 = fVar5 * fVar4;
  }
  else {
    *param_3 = *param_4;
    param_3[1] = param_4[1];
    param_4[0] = 0.0;
    param_4[1] = 0.0;
    param_4[2] = 1.0;
    param_3[2] = param_3[2] - DAT_140492a1c;
  }
  return;
}

