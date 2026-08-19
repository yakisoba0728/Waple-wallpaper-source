// Function: FUN_14026e000
// Addr: 14026e000
// Size: 338 bytes


void FUN_14026e000(longlong *param_1,undefined8 param_2,longlong *param_3,longlong param_4,
                  int param_5,float *param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined8 local_178;
  undefined4 local_170;
  undefined1 auStack_16c [68];
  undefined8 local_128;
  float local_120;
  undefined1 local_118 [64];
  undefined1 local_d8 [208];
  
  lVar3 = *param_1;
  lVar4 = (longlong)*(int *)(*(longlong *)(param_4 + 0x10) + (longlong)param_5 * 4);
  lVar5 = lVar4 * 0x40;
  uVar1 = *(undefined8 *)(lVar5 + 0x30 + lVar3);
  lVar4 = (ulonglong)*(uint *)(lVar4 * 0xf0 + 0x60 + *param_3) * 0x40;
  uVar2 = *(undefined8 *)(lVar4 + 0x30 + lVar3);
  local_120 = *(float *)(lVar5 + 0x38 + lVar3) - *(float *)(lVar4 + 0x38 + lVar3);
  fVar7 = (float)uVar1 - (float)uVar2;
  fVar8 = (float)((ulonglong)uVar1 >> 0x20) - (float)((ulonglong)uVar2 >> 0x20);
  fVar6 = fVar8 * fVar8 + fVar7 * fVar7 + local_120 * local_120;
  if (fVar6 < 0.0) {
                    /* WARNING: Subroutine does not return */
    FUN_14041ade0(CONCAT44(fVar8,fVar6));
  }
  fVar6 = DAT_1404927d4 / SQRT(fVar6);
  local_178 = 0x3f800000;
  local_170 = 0;
  local_120 = local_120 * fVar6;
  local_128 = CONCAT44(fVar8 * fVar6,fVar7 * fVar6);
  FUN_140216890(local_d8,&local_178,&local_128);
  FUN_1402152d0(local_118,local_d8);
  fVar6 = *param_6 * *param_6 + param_6[1] * param_6[1] + 0.0;
  if (0.0 <= fVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_14005f800(auStack_16c,local_118);
  }
                    /* WARNING: Subroutine does not return */
  FUN_14041ade0(fVar6);
}

