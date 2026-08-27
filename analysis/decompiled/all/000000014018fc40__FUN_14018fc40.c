// Function: FUN_14018fc40
// Addr: 14018fc40
// Size: 799 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14018fc40(longlong param_1,float *param_2,float *param_3)

{
  longlong lVar1;
  undefined8 *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined8 in_stack_fffffffffffffe78;
  undefined4 uVar8;
  undefined4 local_178;
  float local_174;
  undefined4 local_170;
  float local_168;
  float local_164;
  float local_160;
  float local_158;
  float local_154;
  float local_150;
  float local_148;
  float local_144;
  float local_140;
  float local_138;
  float local_134;
  float local_130;
  float local_128;
  float local_124;
  float local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined4 local_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  
  uVar8 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  lVar1 = *(longlong *)(param_1 + 0xd8);
  puVar2 = *(undefined8 **)(lVar1 + 0x38);
  local_118 = *puVar2;
  uStack_110 = puVar2[1];
  local_108 = puVar2[2];
  uStack_100 = puVar2[3];
  local_f8 = puVar2[4];
  uStack_f0 = puVar2[5];
  local_e8 = puVar2[6];
  uStack_e0 = puVar2[7];
  puVar2 = *(undefined8 **)(lVar1 + 0x40);
  local_c8 = *puVar2;
  uStack_c0 = puVar2[1];
  local_b8 = *(undefined4 *)(puVar2 + 2);
  fVar6 = *(float *)((longlong)puVar2 + 0x14);
  uStack_b0 = *(undefined4 *)(puVar2 + 3);
  uStack_ac = *(undefined4 *)((longlong)puVar2 + 0x1c);
  local_a8 = puVar2[4];
  uStack_a0 = puVar2[5];
  local_98 = *(undefined4 *)(puVar2 + 6);
  uStack_94 = *(undefined4 *)((longlong)puVar2 + 0x34);
  uStack_90 = *(undefined4 *)(puVar2 + 7);
  uStack_8c = *(undefined4 *)((longlong)puVar2 + 0x3c);
  fVar5 = *(float *)(lVar1 + 0x110);
  fStack_b4 = fVar6;
  fVar3 = (float)FUN_14041b0d0(fVar5 * DAT_1404926c0);
  fVar7 = DAT_140492704;
  fVar4 = DAT_140492704 / (fVar3 / (DAT_140492704 / fVar6));
  fVar3 = fVar4 + DAT_140492944;
  fVar6 = DAT_14049295c;
  if (DAT_14049295c <= fVar3) {
    fVar6 = fVar3;
  }
  uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)fVar4 ^ DAT_140492ff0);
  local_e8 = CONCAT44(local_e8._4_4_ - (float)*(int *)(lVar1 + 0x88) * *(float *)(lVar1 + 0xfc),
                      (float)local_e8 - (float)*(int *)(lVar1 + 0x84) * *(float *)(lVar1 + 0xf8));
  (**(code **)(**(longlong **)(lVar1 + 0x1518) + 0x10))
            (*(longlong **)(lVar1 + 0x1518),&local_c8,fVar5,
             *(float *)(lVar1 + 0x74) / *(float *)(lVar1 + 0x78),CONCAT44(uVar8,DAT_140492858),fVar6
            );
  local_170 = 0x3f000000;
  local_d8 = _DAT_140492e20;
  uStack_d0 = _UNK_140492e28;
  local_174 = fVar7 - *(float *)(*(longlong *)(param_1 + 0xd8) + 0x90);
  local_178 = *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0x8c);
  FUN_14019df90(&local_168,&local_178,&local_118,&local_c8,&local_d8);
  FUN_14005f730(&local_158,&local_118);
  fVar3 = local_140 * 0.0 + local_150 * 0.0 + local_130 * 0.0 + local_120;
  fVar6 = local_158 * 0.0 + local_148 * 0.0 + local_138 * 0.0 + local_128;
  fVar5 = local_144 * 0.0 + local_154 * 0.0 + local_124 + local_134 * 0.0;
  *param_2 = fVar6;
  param_2[1] = fVar5;
  param_2[2] = fVar3;
  local_164 = local_164 - fVar5;
  local_168 = local_168 - fVar6;
  local_160 = local_160 - fVar3;
  fVar5 = local_168 * local_168 + local_164 * local_164 + local_160 * local_160;
  if (fVar5 < 0.0) {
    fVar5 = (float)FUN_14041ad10();
  }
  else {
    fVar5 = SQRT(fVar5);
  }
  fVar7 = fVar7 / fVar5;
  *param_3 = fVar7 * local_168;
  param_3[1] = fVar7 * local_164;
  param_3[2] = fVar7 * local_160;
  return;
}

