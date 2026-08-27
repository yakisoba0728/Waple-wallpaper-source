// Function: FUN_1401ecb20
// Addr: 1401ecb20
// Size: 1152 bytes


void FUN_1401ecb20(longlong *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  longlong *plVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined8 uVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  float fVar34;
  char cVar35;
  undefined8 uVar36;
  undefined8 *puVar37;
  uint uVar38;
  longlong *plVar39;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  
  if (param_1[0x33] != param_1[0x34]) {
    lVar1 = param_1[0x19];
    puVar2 = *(undefined8 **)(lVar1 + 0x30);
    uVar12 = *puVar2;
    uVar13 = puVar2[1];
    uVar14 = puVar2[2];
    uVar15 = puVar2[3];
    uVar16 = puVar2[4];
    uVar17 = puVar2[5];
    uVar18 = puVar2[6];
    uVar19 = puVar2[7];
    puVar2 = *(undefined8 **)(lVar1 + 0x38);
    uVar20 = *puVar2;
    uVar21 = puVar2[1];
    uVar22 = puVar2[2];
    uVar23 = puVar2[3];
    uVar24 = puVar2[4];
    uVar25 = puVar2[5];
    uVar26 = puVar2[6];
    uVar27 = puVar2[7];
    puVar2 = *(undefined8 **)(lVar1 + 0x40);
    uVar28 = puVar2[4];
    uVar29 = puVar2[5];
    uVar30 = *puVar2;
    uVar31 = puVar2[1];
    uVar32 = puVar2[2];
    uVar33 = puVar2[3];
    uVar5 = *(undefined4 *)(puVar2 + 6);
    uVar6 = *(undefined4 *)((longlong)puVar2 + 0x34);
    uVar7 = *(undefined4 *)(puVar2 + 7);
    uVar8 = *(undefined4 *)((longlong)puVar2 + 0x3c);
    if ((*(byte *)((longlong)param_1 + 0x304) & 2) == 0) {
      uVar36 = (**(code **)(*param_1 + 0x80))();
      FUN_14005f730(&local_108,uVar36);
      puVar2 = *(undefined8 **)(param_1[0x19] + 0x30);
      *puVar2 = local_108;
      puVar2[1] = uStack_100;
      uVar38 = DAT_140492ff0;
      puVar2[2] = local_f8;
      puVar2[3] = uStack_f0;
      fVar34 = DAT_1404926c0;
      puVar2[4] = local_e8;
      puVar2[5] = uStack_e0;
      puVar2[6] = local_d8;
      puVar2[7] = uStack_d0;
      puVar2 = *(undefined8 **)(param_1[0x19] + 0x38);
      *puVar2 = 0x3f800000;
      puVar2[1] = 0;
      *(undefined4 *)(puVar2 + 2) = 0;
      *(undefined8 *)((longlong)puVar2 + 0x14) = 0x3f800000;
      *(undefined8 *)((longlong)puVar2 + 0x1c) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x24) = 0;
      puVar2[5] = 0x3f800000;
      puVar2[6] = 0;
      *(undefined4 *)(puVar2 + 7) = 0;
      *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x3f800000;
      plVar3 = *(longlong **)(param_1[0x19] + 0x1518);
      (**(code **)(*plVar3 + 0x18))
                (plVar3,*(undefined8 *)(param_1[0x19] + 0x40),
                 (float)((uint)*(float *)(param_1 + 0x5e) ^ uVar38) * fVar34,
                 *(float *)(param_1 + 0x5e) * fVar34,
                 (float)((uint)*(float *)((longlong)param_1 + 0x2f4) ^ uVar38) * fVar34,
                 *(float *)((longlong)param_1 + 0x2f4) * fVar34,DAT_140492a18,DAT_140492944);
    }
    lVar1 = param_1[0x19];
    puVar2 = *(undefined8 **)(lVar1 + 0x30);
    uVar36 = puVar2[1];
    *(undefined8 *)(lVar1 + 0xaf0) = *puVar2;
    *(undefined8 *)(lVar1 + 0xaf8) = uVar36;
    uVar36 = puVar2[3];
    *(undefined8 *)(lVar1 + 0xb00) = puVar2[2];
    *(undefined8 *)(lVar1 + 0xb08) = uVar36;
    uVar9 = *(undefined4 *)((longlong)puVar2 + 0x24);
    uVar10 = *(undefined4 *)(puVar2 + 5);
    uVar11 = *(undefined4 *)((longlong)puVar2 + 0x2c);
    *(undefined4 *)(lVar1 + 0xb10) = *(undefined4 *)(puVar2 + 4);
    *(undefined4 *)(lVar1 + 0xb14) = uVar9;
    *(undefined4 *)(lVar1 + 0xb18) = uVar10;
    *(undefined4 *)(lVar1 + 0xb1c) = uVar11;
    uVar9 = *(undefined4 *)((longlong)puVar2 + 0x34);
    uVar10 = *(undefined4 *)(puVar2 + 7);
    uVar11 = *(undefined4 *)((longlong)puVar2 + 0x3c);
    *(undefined4 *)(lVar1 + 0xb20) = *(undefined4 *)(puVar2 + 6);
    *(undefined4 *)(lVar1 + 0xb24) = uVar9;
    *(undefined4 *)(lVar1 + 0xb28) = uVar10;
    *(undefined4 *)(lVar1 + 0xb2c) = uVar11;
    uVar38 = *(uint *)((longlong)param_1 + 0x304) & 0x40;
    if (uVar38 == 0) {
      *(char *)(param_1[0x19] + 0x1c9) = *(char *)(param_1[0x19] + 0x1c9) + '\x01';
      (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0xe8))
                (*(longlong **)(param_1[0x19] + 0x1518),1);
    }
    plVar3 = (longlong *)param_1[0x34];
    for (plVar39 = (longlong *)param_1[0x33]; plVar39 != plVar3; plVar39 = plVar39 + 1) {
      plVar4 = (longlong *)*plVar39;
      cVar35 = (**(code **)(*plVar4 + 0x68))(plVar4);
      if (cVar35 != '\0') {
        (**(code **)(*plVar4 + 0x50))(plVar4);
      }
      if ((*(byte *)(plVar4 + 0x24) & 4) == 0) {
        puVar2 = (undefined8 *)plVar4[0x34];
        for (puVar37 = (undefined8 *)plVar4[0x33]; puVar37 != puVar2; puVar37 = puVar37 + 1) {
          plVar4 = (longlong *)*puVar37;
          (**(code **)(*plVar4 + 0x50))(plVar4);
          FUN_1401eca70(param_1,plVar4);
        }
      }
    }
    if (uVar38 == 0) {
      *(char *)(param_1[0x19] + 0x1c9) = *(char *)(param_1[0x19] + 0x1c9) + -1;
      if (*(char *)(param_1[0x19] + 0x1c9) == '\0') {
        plVar3 = *(longlong **)(param_1[0x19] + 0x1518);
        (**(code **)(*plVar3 + 0xe8))(plVar3,0);
      }
    }
    local_128 = (undefined4)uVar28;
    uStack_124 = (undefined4)((ulonglong)uVar28 >> 0x20);
    uStack_120 = (undefined4)uVar29;
    uStack_11c = (undefined4)((ulonglong)uVar29 >> 0x20);
    puVar2 = *(undefined8 **)(param_1[0x19] + 0x40);
    *puVar2 = uVar30;
    puVar2[1] = uVar31;
    puVar2[2] = uVar32;
    puVar2[3] = uVar33;
    *(undefined4 *)(puVar2 + 4) = local_128;
    *(undefined4 *)((longlong)puVar2 + 0x24) = uStack_124;
    *(undefined4 *)(puVar2 + 5) = uStack_120;
    *(undefined4 *)((longlong)puVar2 + 0x2c) = uStack_11c;
    *(undefined4 *)(puVar2 + 6) = uVar5;
    *(undefined4 *)((longlong)puVar2 + 0x34) = uVar6;
    *(undefined4 *)(puVar2 + 7) = uVar7;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = uVar8;
    puVar2 = *(undefined8 **)(param_1[0x19] + 0x38);
    *puVar2 = uVar20;
    puVar2[1] = uVar21;
    puVar2[2] = uVar22;
    puVar2[3] = uVar23;
    puVar2[4] = uVar24;
    puVar2[5] = uVar25;
    puVar2[6] = uVar26;
    puVar2[7] = uVar27;
    puVar2 = *(undefined8 **)(param_1[0x19] + 0x30);
    *puVar2 = uVar12;
    puVar2[1] = uVar13;
    puVar2[2] = uVar14;
    puVar2[3] = uVar15;
    puVar2[4] = uVar16;
    puVar2[5] = uVar17;
    puVar2[6] = uVar18;
    puVar2[7] = uVar19;
    lVar1 = param_1[0x19];
    *(undefined8 *)(lVar1 + 0xaf0) = 0x3f800000;
    *(undefined8 *)(lVar1 + 0xaf8) = 0;
    *(undefined4 *)(lVar1 + 0xb00) = 0;
    *(undefined8 *)(lVar1 + 0xb04) = 0x3f800000;
    *(undefined8 *)(lVar1 + 0xb0c) = 0;
    *(undefined4 *)(lVar1 + 0xb14) = 0;
    *(undefined8 *)(lVar1 + 0xb18) = 0x3f800000;
    *(undefined8 *)(lVar1 + 0xb20) = 0;
    *(undefined4 *)(lVar1 + 0xb28) = 0;
    *(undefined4 *)(lVar1 + 0xb2c) = 0x3f800000;
    (**(code **)(**(longlong **)(param_1[0x19] + 0x1518) + 0xd8))
              (*(longlong **)(param_1[0x19] + 0x1518),1);
  }
  return;
}

