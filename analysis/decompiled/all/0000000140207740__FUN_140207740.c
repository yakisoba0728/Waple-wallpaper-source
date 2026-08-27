// Function: FUN_140207740
// Addr: 140207740
// Size: 1027 bytes


void FUN_140207740(longlong param_1)

{
  longlong *plVar1;
  ushort uVar2;
  uint uVar3;
  longlong *plVar4;
  longlong lVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  
  if ((*(longlong *)(param_1 + 0x4b8) == 0) ||
     (*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 1000) == 0)) {
    return;
  }
  uVar3 = *(uint *)(*(longlong *)(param_1 + 200) + 0x118);
  *(undefined4 *)(*(longlong *)(param_1 + 200) + 300) = 0x3f800000;
  *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x128) = 0x3f800000;
  *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x124) = 0x3f800000;
  *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x120) = 0x3f800000;
  plVar4 = *(longlong **)(*(longlong *)(param_1 + 0x4b8) + 1000);
  lVar5 = plVar4[1];
  plVar1 = (longlong *)(lVar5 + 0x50);
  *plVar1 = *plVar1 + 8;
  **(longlong **)(lVar5 + 0x50) = (longlong)plVar4;
  (**(code **)(*plVar4 + 0x48))();
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
  (**(code **)(*plVar1 + 0x118))(plVar1,0);
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
  (**(code **)(*plVar1 + 0x120))(plVar1,1,0);
  FUN_140155fc0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x410));
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x4b8) + 0x3f0) + 8))();
  FUN_140157430(*(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x410));
  lVar5 = *(longlong *)(param_1 + 200);
  puVar6 = *(undefined8 **)(lVar5 + 0x30);
  *(undefined1 *)(lVar5 + 0x1ca) = 1;
  *(undefined8 **)(lVar5 + 0x30) = puVar6 + 8;
  puVar6[8] = *puVar6;
  puVar6[9] = puVar6[1];
  puVar6[10] = puVar6[2];
  puVar6[0xb] = puVar6[3];
  puVar6[0xc] = puVar6[4];
  puVar6[0xd] = puVar6[5];
  puVar6[0xe] = puVar6[6];
  puVar6[0xf] = puVar6[7];
  lVar5 = *(longlong *)(param_1 + 200);
  puVar6 = *(undefined8 **)(lVar5 + 0x40);
  *(undefined1 *)(lVar5 + 0x1ca) = 1;
  *(undefined8 **)(lVar5 + 0x40) = puVar6 + 8;
  puVar6[8] = *puVar6;
  puVar6[9] = puVar6[1];
  puVar6[10] = puVar6[2];
  puVar6[0xb] = puVar6[3];
  puVar6[0xc] = puVar6[4];
  puVar6[0xd] = puVar6[5];
  puVar6[0xe] = puVar6[6];
  puVar6[0xf] = puVar6[7];
  puVar6 = *(undefined8 **)(*(longlong *)(param_1 + 200) + 0x30);
  *puVar6 = 0x3f800000;
  puVar6[1] = 0;
  *(undefined4 *)(puVar6 + 2) = 0;
  *(undefined8 *)((longlong)puVar6 + 0x14) = 0x3f800000;
  *(undefined8 *)((longlong)puVar6 + 0x1c) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x24) = 0;
  puVar6[5] = 0x3f800000;
  puVar6[6] = 0;
  *(undefined4 *)(puVar6 + 7) = 0;
  *(undefined4 *)((longlong)puVar6 + 0x3c) = 0x3f800000;
  puVar6 = *(undefined8 **)(*(longlong *)(param_1 + 200) + 0x30);
  puVar7 = *(undefined8 **)(*(longlong *)(param_1 + 200) + 0x38);
  uVar9 = puVar6[1];
  *puVar7 = *puVar6;
  puVar7[1] = uVar9;
  uVar9 = puVar6[3];
  puVar7[2] = puVar6[2];
  puVar7[3] = uVar9;
  uVar9 = puVar6[5];
  puVar7[4] = puVar6[4];
  puVar7[5] = uVar9;
  uVar10 = DAT_140492944;
  uVar9 = puVar6[7];
  puVar7[6] = puVar6[6];
  puVar7[7] = uVar9;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 200) + 0x1518);
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x4b8) + 1000);
  lVar8 = *plVar1;
  uVar2 = *(ushort *)(lVar5 + 0x1a);
  if ((uVar3 & 1) == 0) {
    fVar12 = (float)uVar2;
    fVar11 = 0.0;
  }
  else {
    fVar11 = (float)uVar2;
    fVar12 = 0.0;
  }
  (**(code **)(lVar8 + 0x18))
            (plVar1,*(undefined8 *)(*(longlong *)(param_1 + 200) + 0x40),lVar5,lVar8,fVar12,fVar11,
             DAT_140492a18,uVar10);
  *(undefined1 *)(*(longlong *)(param_1 + 200) + 0x12e9) =
       *(undefined1 *)
        ((longlong)*(int *)(*(longlong *)(param_1 + 0x4b8) + 0x390) * 200 + 0x1c +
        *(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x18));
  FUN_1404210f0(*(longlong *)(param_1 + 200) + 0x12ec,*(longlong *)(param_1 + 0x4b8) + 0x350,
                (ulonglong)*(byte *)(*(longlong *)(param_1 + 200) + 0x12e9) << 4);
  if (*(char *)(param_1 + 0x4b0) == '\0') {
    lVar5 = *(longlong *)(param_1 + 200);
    fVar12 = DAT_140492704;
    if ((*(uint *)(lVar5 + 0x118) & 0x2000) != 0) {
      fVar12 = *(float *)(param_1 + 0x340);
    }
    fVar11 = *(float *)(param_1 + 0x338);
    *(ulonglong *)(lVar5 + 0x124) =
         CONCAT44((float)((ulonglong)*(undefined8 *)(param_1 + 0x330) >> 0x20) * fVar12,
                  (float)*(undefined8 *)(param_1 + 0x330) * fVar12);
    *(float *)(lVar5 + 300) = fVar12 * fVar11;
    *(undefined4 *)(*(longlong *)(param_1 + 200) + 0x120) = *(undefined4 *)(param_1 + 0x33c);
  }
  FUN_140155fc0(*(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x408));
  (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x4b8) + 0x3f8) + 8))();
  FUN_140157430(*(undefined8 *)(*(longlong *)(param_1 + 0x4b8) + 0x408));
  *(undefined1 *)(*(longlong *)(param_1 + 200) + 0x12e9) = 0;
  lVar5 = *(longlong *)(param_1 + 200);
  plVar1 = (longlong *)(lVar5 + 0x40);
  *plVar1 = *plVar1 + -0x40;
  *(undefined1 *)(lVar5 + 0x1ca) = 1;
  lVar5 = *(longlong *)(param_1 + 200);
  plVar1 = (longlong *)(lVar5 + 0x30);
  *plVar1 = *plVar1 + -0x40;
  *(undefined1 *)(lVar5 + 0x1ca) = 1;
  plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x4b8) + 1000);
  *(longlong *)(plVar1[1] + 0x50) = *(longlong *)(plVar1[1] + 0x50) + -8;
  if ((longlong *)**(longlong **)(plVar1[1] + 0x50) == (longlong *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x000140207b39. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*plVar1 + 0x50))(plVar1);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x000140207b2a. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(longlong *)**(longlong **)(plVar1[1] + 0x50) + 0x48))();
  return;
}

