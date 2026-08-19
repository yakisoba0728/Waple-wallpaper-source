// Function: FUN_14022be10
// Addr: 14022be10
// Size: 115 bytes


/* WARNING: Removing unreachable block (ram,0x00014022c15d) */
/* WARNING: Removing unreachable block (ram,0x00014022be73) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14022be10(longlong *param_1,char param_2,ulonglong param_3)

{
  longlong *plVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  float fVar4;
  char cVar5;
  longlong lVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  float fVar18;
  byte bVar19;
  undefined8 *puVar20;
  uint uVar21;
  char *pcVar22;
  undefined8 *puVar23;
  longlong lVar24;
  longlong lVar25;
  ulonglong uVar26;
  ulonglong uVar27;
  float fStack_188;
  undefined8 uStack_184;
  char cStack_17c;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined8 auStack_138 [8];
  undefined8 auStack_f8 [26];
  
  param_3 = param_3 & 0xffffffff;
  func_0x000140229830();
  lVar6 = param_1[1];
  fStack_188 = *(float *)(lVar6 + 0x85c);
  uVar7 = *(undefined8 *)(lVar6 + 0x860);
  if (((fStack_188 < 0.0) ||
      ((((float)((uint)(*(float *)((longlong)param_1 + 0x34) - fStack_188) & _DAT_140493090) <
         _UNK_1404926e4 &&
        (uStack_184._0_4_ = (float)uVar7,
        (float)((uint)(*(float *)(param_1 + 7) - (float)uStack_184) & _DAT_140493090) <
        _UNK_1404926e4)) &&
       (uStack_184._4_4_ = (float)((ulonglong)uVar7 >> 0x20),
       (float)((uint)(*(float *)((longlong)param_1 + 0x3c) - uStack_184._4_4_) & _DAT_140493090) <
       _UNK_1404926e4)))) || ((*(byte *)(param_1 + 4) & 8) != 0)) {
    cStack_17c = false;
  }
  else {
    cStack_17c = true;
  }
  uVar26 = param_3 & 0xffffffff;
  if (((param_3 & 1) != 0) && (uVar26 = (ulonglong)((uint)param_3 | 2), (bool)cStack_17c)) {
    uVar26 = param_3 & 0xffffffff;
  }
  if ((uVar26 & 2) != 0) {
    cStack_17c = false;
  }
  uStack_184 = uVar7;
  FUN_1401d1670(*param_1 + 0x1a60,param_1 + 3,lVar6 + 0x778,&fStack_188,param_1);
  if (cStack_17c == '\0') {
    bVar19 = *(byte *)((longlong)param_1 + 0x3f7) & 0xfd;
  }
  else {
    bVar19 = *(byte *)((longlong)param_1 + 0x3f7) | 2;
  }
  *(byte *)((longlong)param_1 + 0x3f7) = bVar19;
  fVar18 = _UNK_140492a4c;
  uVar27 = 0;
  puVar23 = *(undefined8 **)(*param_1 + 0x30);
  uStack_178 = *puVar23;
  uStack_170 = puVar23[1];
  uStack_168 = puVar23[2];
  uStack_160 = puVar23[3];
  uStack_158 = *(undefined4 *)(puVar23 + 4);
  uStack_154 = *(undefined4 *)((longlong)puVar23 + 0x24);
  uStack_150 = *(undefined4 *)(puVar23 + 5);
  uStack_14c = *(undefined4 *)((longlong)puVar23 + 0x2c);
  uStack_148 = *(undefined4 *)(puVar23 + 6);
  uStack_144 = *(undefined4 *)((longlong)puVar23 + 0x34);
  uStack_140 = *(undefined4 *)(puVar23 + 7);
  uStack_13c = *(undefined4 *)((longlong)puVar23 + 0x3c);
  if (*(int *)((longlong)param_1 + 0x44) != 0) {
    do {
      lVar25 = param_1[0x80];
      lVar24 = uVar27 * 0xd0;
      if ((*(uint *)(lVar25 + 0xc0 + lVar24) & 0x10005) == 0) {
        if (*(float *)(lVar6 + 0x8c8 + uVar27 * 0xc) != fVar18) {
          uVar3 = *(undefined4 *)(lVar6 + 0x8d0 + uVar27 * 0xc);
          FUN_14041a3b0(uVar3);
                    /* WARNING: Subroutine does not return */
          FUN_14041aa90(uVar3);
        }
        fVar4 = *(float *)(lVar6 + 0x868 + uVar27 * 0xc);
        if (fVar4 != fVar18) {
          *(float *)(lVar25 + 0xb0 + lVar24) = fVar4;
          *(undefined4 *)(lVar25 + 0xb4 + lVar24) = *(undefined4 *)(lVar6 + 0x86c + uVar27 * 0xc);
          *(undefined4 *)(lVar25 + 0xb8 + lVar24) = *(undefined4 *)(lVar6 + 0x870 + uVar27 * 0xc);
          lVar8 = param_1[0x80];
          uVar21 = *(uint *)(lVar24 + 0xc0 + lVar8) & 2;
          if (((uVar21 == 0) || ((int)uVar27 == 0)) && ((*(byte *)(param_1 + 4) & 1) != 0)) {
            puVar23 = &uStack_178;
            puVar20 = auStack_138;
          }
          else {
            if ((uVar21 == 0) || ((*(byte *)(param_1 + 4) & 1) != 0)) {
              puVar23 = (undefined8 *)(lVar25 + 0x80 + lVar24);
              uVar7 = puVar23[1];
              puVar20 = (undefined8 *)(lVar25 + 0x90 + lVar24);
              uVar16 = *puVar20;
              uVar17 = puVar20[1];
              *(undefined8 *)(lVar25 + lVar24) = *puVar23;
              ((undefined8 *)(lVar25 + lVar24))[1] = uVar7;
              puVar2 = (undefined4 *)(lVar25 + 0xa0 + lVar24);
              uVar3 = *puVar2;
              uVar9 = puVar2[1];
              uVar10 = puVar2[2];
              uVar11 = puVar2[3];
              puVar23 = (undefined8 *)(lVar25 + 0x10 + lVar24);
              *puVar23 = uVar16;
              puVar23[1] = uVar17;
              puVar2 = (undefined4 *)(lVar25 + 0xb0 + lVar24);
              uVar12 = *puVar2;
              uVar13 = puVar2[1];
              uVar14 = puVar2[2];
              uVar15 = puVar2[3];
              puVar2 = (undefined4 *)(lVar25 + 0x20 + lVar24);
              *puVar2 = uVar3;
              puVar2[1] = uVar9;
              puVar2[2] = uVar10;
              puVar2[3] = uVar11;
              puVar2 = (undefined4 *)(lVar25 + 0x30 + lVar24);
              *puVar2 = uVar12;
              puVar2[1] = uVar13;
              puVar2[2] = uVar14;
              puVar2[3] = uVar15;
              goto code_r0x00014022c24d;
            }
            func_0x0001402291a0(&uStack_178,auStack_138);
            puVar23 = auStack_138;
            puVar20 = auStack_f8;
          }
          puVar20 = (undefined8 *)FUN_14024f1b0(puVar20,puVar23,lVar8 + 0x80 + lVar24);
          uVar7 = puVar20[1];
          *(undefined8 *)(lVar24 + lVar8) = *puVar20;
          ((undefined8 *)(lVar24 + lVar8))[1] = uVar7;
          uVar7 = puVar20[3];
          puVar23 = (undefined8 *)(lVar24 + 0x10 + lVar8);
          *puVar23 = puVar20[2];
          puVar23[1] = uVar7;
          uVar3 = *(undefined4 *)((longlong)puVar20 + 0x24);
          uVar9 = *(undefined4 *)(puVar20 + 5);
          uVar10 = *(undefined4 *)((longlong)puVar20 + 0x2c);
          puVar2 = (undefined4 *)(lVar24 + 0x20 + lVar8);
          *puVar2 = *(undefined4 *)(puVar20 + 4);
          puVar2[1] = uVar3;
          puVar2[2] = uVar9;
          puVar2[3] = uVar10;
          uVar3 = *(undefined4 *)((longlong)puVar20 + 0x34);
          uVar9 = *(undefined4 *)(puVar20 + 7);
          uVar10 = *(undefined4 *)((longlong)puVar20 + 0x3c);
          puVar2 = (undefined4 *)(lVar24 + 0x30 + lVar8);
          *puVar2 = *(undefined4 *)(puVar20 + 6);
          puVar2[1] = uVar3;
          puVar2[2] = uVar9;
          puVar2[3] = uVar10;
        }
      }
code_r0x00014022c24d:
      uVar21 = (int)uVar27 + 1;
      uVar27 = (ulonglong)uVar21;
    } while (uVar21 < *(uint *)((longlong)param_1 + 0x44));
  }
  lVar6 = param_1[0x91];
  uVar21 = (uint)uVar26 & 0xfffffffe;
  for (lVar25 = param_1[0x90]; lVar25 != lVar6; lVar25 = lVar25 + 0x10) {
    FUN_14022be10(*(undefined8 *)(lVar25 + 8),param_2,uVar21);
  }
  lVar6 = param_1[0x94];
  for (lVar25 = param_1[0x93]; lVar25 != lVar6; lVar25 = lVar25 + 0x38) {
    puVar23 = *(undefined8 **)(lVar25 + 0x10);
    for (puVar20 = *(undefined8 **)(lVar25 + 8); puVar20 != puVar23; puVar20 = puVar20 + 1) {
      FUN_14022be10(*puVar20,0,uVar21);
    }
    puVar23 = *(undefined8 **)(lVar25 + 0x28);
    for (puVar20 = *(undefined8 **)(lVar25 + 0x20); puVar20 != puVar23; puVar20 = puVar20 + 1) {
      FUN_14022be10(*puVar20,0,uVar21);
    }
  }
  lVar6 = *param_1;
  plVar1 = (longlong *)(lVar6 + 0x30);
  *plVar1 = *plVar1 + -0x40;
  *(undefined1 *)(lVar6 + 0x1ca) = 1;
  if (param_2 != '\0') {
    pcVar22 = (char *)param_1[0xe];
    cVar5 = *pcVar22;
    while (cVar5 != '\0') {
      cVar5 = *pcVar22;
      if ((((cVar5 == '\x01') || (cVar5 == '\x02')) || (cVar5 == '\x03')) &&
         (((int)*(uint *)(pcVar22 + 0x4c) < 0 && (0.0 < *(float *)(pcVar22 + 0x10))))) {
        *(uint *)(pcVar22 + 0x4c) = *(uint *)(pcVar22 + 0x4c) & 0x7fffffff;
      }
      pcVar22 = pcVar22 + *(ushort *)(pcVar22 + 2);
      cVar5 = *pcVar22;
    }
  }
  return;
}

