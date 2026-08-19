// Function: FUN_14018fd10
// Addr: 14018fd10
// Size: 455 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14018fd10(longlong param_1)

{
  float fVar1;
  longlong lVar2;
  undefined8 *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  undefined8 in_stack_fffffffffffffe78;
  undefined4 uVar7;
  undefined4 local_178;
  float local_174;
  undefined4 local_170;
  undefined1 local_168 [16];
  undefined1 local_158 [64];
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
  
  uVar7 = (undefined4)((ulonglong)in_stack_fffffffffffffe78 >> 0x20);
  lVar2 = *(longlong *)(param_1 + 0xd8);
  puVar3 = *(undefined8 **)(lVar2 + 0x38);
  local_118 = *puVar3;
  uStack_110 = puVar3[1];
  local_108 = puVar3[2];
  uStack_100 = puVar3[3];
  local_f8 = puVar3[4];
  uStack_f0 = puVar3[5];
  local_e8 = puVar3[6];
  uStack_e0 = puVar3[7];
  puVar3 = *(undefined8 **)(lVar2 + 0x40);
  local_c8 = *puVar3;
  uStack_c0 = puVar3[1];
  local_b8 = *(undefined4 *)(puVar3 + 2);
  fVar6 = *(float *)((longlong)puVar3 + 0x14);
  uStack_b0 = *(undefined4 *)(puVar3 + 3);
  uStack_ac = *(undefined4 *)((longlong)puVar3 + 0x1c);
  local_a8 = puVar3[4];
  uStack_a0 = puVar3[5];
  local_98 = *(undefined4 *)(puVar3 + 6);
  uStack_94 = *(undefined4 *)((longlong)puVar3 + 0x34);
  uStack_90 = *(undefined4 *)(puVar3 + 7);
  uStack_8c = *(undefined4 *)((longlong)puVar3 + 0x3c);
  fVar1 = *(float *)(lVar2 + 0x110);
  fStack_b4 = fVar6;
  fVar4 = (float)FUN_14041b1a0(fVar1 * DAT_140492790);
  local_174 = DAT_1404927d4;
  fVar5 = DAT_1404927d4 / (fVar4 / (DAT_1404927d4 / fVar6));
  fVar4 = fVar5 + DAT_140492a14;
  fVar6 = DAT_140492a2c;
  if (DAT_140492a2c <= fVar4) {
    fVar6 = fVar4;
  }
  uStack_e0 = CONCAT44(uStack_e0._4_4_,(uint)fVar5 ^ DAT_1404930c0);
  local_e8 = CONCAT44(local_e8._4_4_ - (float)*(int *)(lVar2 + 0x88) * *(float *)(lVar2 + 0xfc),
                      (float)local_e8 - (float)*(int *)(lVar2 + 0x84) * *(float *)(lVar2 + 0xf8));
  (**(code **)(**(longlong **)(lVar2 + 0x1518) + 0x10))
            (*(longlong **)(lVar2 + 0x1518),&local_c8,fVar1,
             *(float *)(lVar2 + 0x74) / *(float *)(lVar2 + 0x78),CONCAT44(uVar7,DAT_140492928),fVar6
            );
  local_170 = 0x3f000000;
  local_d8 = _DAT_140492ef0;
  uStack_d0 = _UNK_140492ef8;
  local_174 = local_174 - *(float *)(*(longlong *)(param_1 + 0xd8) + 0x90);
  local_178 = *(undefined4 *)(*(longlong *)(param_1 + 0xd8) + 0x8c);
  FUN_14019e060(local_168,&local_178,&local_118,&local_c8,&local_d8);
                    /* WARNING: Subroutine does not return */
  FUN_14005f800(local_158,&local_118);
}

