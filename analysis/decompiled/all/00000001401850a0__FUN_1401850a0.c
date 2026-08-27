// Function: FUN_1401850a0
// Addr: 1401850a0
// Size: 599 bytes


float * FUN_1401850a0(longlong param_1)

{
  float *pfVar1;
  float fVar2;
  uint uVar3;
  longlong *plVar4;
  char cVar5;
  undefined8 uVar6;
  undefined8 *puVar7;
  undefined1 local_98 [144];
  
  uVar3 = *(uint *)(param_1 + 0xd0);
  if ((uVar3 != 0) &&
     ((*(int *)(param_1 + 400) < 0 || (uVar3 == *(uint *)(*(longlong *)(param_1 + 200) + 0x144)))))
  {
    if (*(longlong *)(param_1 + 0x180) == 0) {
LAB_1401850f0:
      return (float *)(param_1 + 0xe0);
    }
    if (*(uint *)(*(longlong *)(param_1 + 0x180) + 0xd0) <= uVar3) {
      cVar5 = FUN_140185040();
      if (cVar5 != '\0') goto LAB_1401850f0;
    }
  }
  pfVar1 = (float *)(param_1 + 0xe0);
  *(undefined4 *)(param_1 + 0xd0) = *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x144);
  *(undefined4 *)(param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0xfc) = 0;
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined4 *)(param_1 + 0x11c) = 0x3f800000;
  *(undefined4 *)(param_1 + 0x110) = *(undefined4 *)(param_1 + 0x128);
  *(undefined4 *)(param_1 + 0x114) = *(undefined4 *)(param_1 + 300);
  *(undefined4 *)(param_1 + 0x118) = *(undefined4 *)(param_1 + 0x130);
  fVar2 = *(float *)(param_1 + 0x134);
  *pfVar1 = fVar2 * *(float *)(param_1 + 0x14c);
  *(float *)(param_1 + 0xe4) = fVar2 * *(float *)(param_1 + 0x150);
  *(float *)(param_1 + 0xe8) = fVar2 * *(float *)(param_1 + 0x154);
  fVar2 = *(float *)(param_1 + 0x138);
  *(float *)(param_1 + 0xf0) = fVar2 * *(float *)(param_1 + 0x158);
  *(float *)(param_1 + 0xf4) = fVar2 * *(float *)(param_1 + 0x15c);
  *(float *)(param_1 + 0xf8) = fVar2 * *(float *)(param_1 + 0x160);
  fVar2 = *(float *)(param_1 + 0x13c);
  *(float *)(param_1 + 0x100) = fVar2 * *(float *)(param_1 + 0x164);
  *(float *)(param_1 + 0x104) = fVar2 * *(float *)(param_1 + 0x168);
  *(float *)(param_1 + 0x108) = fVar2 * *(float *)(param_1 + 0x16c);
  plVar4 = *(longlong **)(param_1 + 0x180);
  if (plVar4 != (longlong *)0x0) {
    if (-1 < *(int *)(param_1 + 400)) {
      (**(code **)(*plVar4 + 0x78))(plVar4,*(int *)(param_1 + 400),pfVar1);
    }
    uVar6 = FUN_1401850a0(*(undefined8 *)(param_1 + 0x180));
    puVar7 = (undefined8 *)FUN_14005ecb0(local_98,uVar6,pfVar1);
    uVar6 = puVar7[1];
    *(undefined8 *)pfVar1 = *puVar7;
    *(undefined8 *)(param_1 + 0xe8) = uVar6;
    uVar6 = puVar7[3];
    *(undefined8 *)(param_1 + 0xf0) = puVar7[2];
    *(undefined8 *)(param_1 + 0xf8) = uVar6;
    uVar6 = puVar7[5];
    *(undefined8 *)(param_1 + 0x100) = puVar7[4];
    *(undefined8 *)(param_1 + 0x108) = uVar6;
    uVar6 = puVar7[7];
    *(undefined8 *)(param_1 + 0x110) = puVar7[6];
    *(undefined8 *)(param_1 + 0x118) = uVar6;
  }
  return pfVar1;
}

