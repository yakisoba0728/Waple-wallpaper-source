// Function: FUN_1402367c0
// Addr: 1402367c0
// Size: 318 bytes


void FUN_1402367c0(longlong *param_1)

{
  char cVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  longlong *plVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  float fVar10;
  float fVar11;
  longlong *plVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  char *pcVar16;
  longlong lVar17;
  float fVar18;
  undefined1 auStack_78 [112];
  
  if (param_1[0x6b] != 0) {
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      lVar3 = *param_1;
      uVar9 = *(undefined8 *)(lVar3 + 0xaf8);
      puVar13 = *(undefined8 **)(lVar3 + 0x30);
      *puVar13 = *(undefined8 *)(lVar3 + 0xaf0);
      puVar13[1] = uVar9;
      uVar9 = *(undefined8 *)(lVar3 + 0xb08);
      puVar13[2] = *(undefined8 *)(lVar3 + 0xb00);
      puVar13[3] = uVar9;
      *(undefined1 (*) [16])(puVar13 + 4) = *(undefined1 (*) [16])(lVar3 + 0xb10);
      uVar9 = *(undefined8 *)(lVar3 + 0xb28);
      puVar13[6] = *(undefined8 *)(lVar3 + 0xb20);
      puVar13[7] = uVar9;
    }
    if (*(int *)((longlong)param_1 + 0x344) != 0) {
      uVar2 = *(uint *)(param_1 + 4);
      if ((uVar2 >> 2 & 1) != 0) {
        lVar3 = *param_1;
        puVar13 = *(undefined8 **)(lVar3 + 0x38);
        *(undefined1 *)(lVar3 + 0x1ca) = 1;
        *(undefined8 **)(lVar3 + 0x38) = puVar13 + 8;
        puVar13[8] = *puVar13;
        puVar13[9] = puVar13[1];
        puVar13[10] = puVar13[2];
        puVar13[0xb] = puVar13[3];
        puVar13[0xc] = puVar13[4];
        puVar13[0xd] = puVar13[5];
        puVar13[0xe] = puVar13[6];
        puVar13[0xf] = puVar13[7];
        lVar3 = *param_1;
        puVar13 = *(undefined8 **)(lVar3 + 0x40);
        *(undefined1 *)(lVar3 + 0x1ca) = 1;
        *(undefined8 **)(lVar3 + 0x40) = puVar13 + 8;
        puVar13[8] = *puVar13;
        puVar13[9] = puVar13[1];
        puVar13[10] = puVar13[2];
        puVar13[0xb] = puVar13[3];
        puVar13[0xc] = puVar13[4];
        puVar13[0xd] = puVar13[5];
        *(undefined4 *)(puVar13 + 0xe) = *(undefined4 *)(puVar13 + 6);
        *(undefined4 *)((longlong)puVar13 + 0x74) = *(undefined4 *)((longlong)puVar13 + 0x34);
        *(undefined4 *)(puVar13 + 0xf) = *(undefined4 *)(puVar13 + 7);
        *(undefined4 *)((longlong)puVar13 + 0x7c) = *(undefined4 *)((longlong)puVar13 + 0x3c);
        FUN_1401e5c30(*param_1);
      }
      if ((*(byte *)(param_1[0x6b] + 0x1fc) & 2) != 0) {
        lVar3 = param_1[1];
        if ((*(byte *)(lVar3 + 0x93d) & 1) == 0) {
          *(byte *)(lVar3 + 0x93d) = *(byte *)(lVar3 + 0x93d) | 1;
          plVar12 = (longlong *)
                    FUN_1401ab4e0(*(longlong *)(lVar3 + 200) + 0x16c0,"_rt_FullFrameBuffer");
          (**(code **)(*plVar12 + 8))(plVar12);
        }
      }
      if ((((*(uint *)(param_1 + 4) & 0x1000000) != 0) &&
          (lVar3 = *(longlong *)(param_1[0x6b] + 0xd0), lVar3 != 0)) &&
         (lVar17 = *(longlong *)(lVar3 + 0xb8), lVar17 != *(longlong *)(lVar3 + 0xc0))) {
        *(undefined4 *)(*param_1 + 0xb8) = *(undefined4 *)(lVar17 + 0x10);
        *(undefined4 *)(*param_1 + 0xbc) = *(undefined4 *)(lVar17 + 0x1c);
        *(float *)(*param_1 + 0xc0) =
             (float)(ulonglong)(*(longlong *)(lVar3 + 0xc0) - *(longlong *)(lVar3 + 0xb8) >> 5);
        *(float *)(*param_1 + 0xc4) =
             ((float)*(uint *)(lVar3 + 0x24) / (float)*(uint *)(lVar3 + 0x20)) *
             (*(float *)(lVar17 + 0x1c) / *(float *)(lVar17 + 0x10));
      }
      fVar11 = DAT_1404927d4;
      fVar10 = DAT_140492790;
      pcVar16 = (char *)param_1[0x14];
      cVar1 = *pcVar16;
      while (cVar1 != '\0') {
        cVar1 = *pcVar16;
        if (cVar1 == '\x01') {
          FUN_140229980(*param_1,pcVar16 + 4);
code_r0x000140236b49:
          FUN_140156090(*(undefined8 *)(pcVar16 + 4));
          puVar13 = (undefined8 *)param_1[0x3f];
code_r0x000140236b59:
          (**(code **)(*(longlong *)*puVar13 + 8))();
          FUN_140157500(*(undefined8 *)(pcVar16 + 4));
        }
        else {
          if (cVar1 == '\x02') {
            FUN_140229980(*param_1,pcVar16 + 4);
            *(undefined4 *)(*param_1 + 0xa8) = *(undefined4 *)(pcVar16 + 0x3c);
            *(undefined4 *)(*param_1 + 0xac) = *(undefined4 *)(pcVar16 + 0x40);
            *(undefined4 *)(*param_1 + 0xb0) = *(undefined4 *)(pcVar16 + 0x44);
            goto code_r0x000140236b49;
          }
          if (cVar1 != '\x03') {
            FUN_140229980(*param_1,pcVar16 + 4);
            fVar18 = *(float *)((longlong)param_1 + 0x24c);
            if (fVar18 <= 0.0) {
              fVar18 = 0.0;
            }
            *(float *)(*param_1 + 0xb0) = fVar11 - fVar18 / *(float *)(param_1 + 0x4a);
            if ((*(uint *)(param_1 + 4) & 0x80000) == 0) {
              *(float *)(*param_1 + 0xb4) = (float)*(ushort *)(param_1 + 0x49) - fVar10;
            }
            else {
              *(float *)(*param_1 + 0xb4) =
                   ((float)*(ushort *)(param_1 + 0x49) - fVar11) * *(float *)(param_1 + 6);
              *(float *)(*param_1 + 0xa8) = (float)*(ushort *)(param_1 + 0x49) - fVar11;
            }
            FUN_140156090(*(undefined8 *)(pcVar16 + 4));
            puVar13 = (undefined8 *)param_1[0x40];
            goto code_r0x000140236b59;
          }
          if (1 < *(uint *)((longlong)param_1 + 0x344)) {
            FUN_140229980(*param_1,pcVar16 + 4);
            *(undefined4 *)(*param_1 + 0xb0) = 0;
            *(float *)(*param_1 + 0xb4) = (float)*(uint *)((longlong)param_1 + 0x344);
            FUN_140156090(*(undefined8 *)(pcVar16 + 4));
            puVar13 = (undefined8 *)param_1[0x41];
            goto code_r0x000140236b59;
          }
        }
        pcVar16 = pcVar16 + *(ushort *)(pcVar16 + 2);
        cVar1 = *pcVar16;
      }
      if ((uVar2 >> 2 & 1) != 0) {
        lVar3 = *param_1;
        plVar12 = (longlong *)(lVar3 + 0x38);
        *plVar12 = *plVar12 + -0x40;
        *(undefined1 *)(lVar3 + 0x1ca) = 1;
        lVar3 = *param_1;
        plVar12 = (longlong *)(lVar3 + 0x40);
        *plVar12 = *plVar12 + -0x40;
        *(undefined1 *)(lVar3 + 0x1ca) = 1;
      }
    }
    if ((*(byte *)(param_1 + 4) & 1) != 0) {
      lVar3 = param_1[0x75];
      plVar12 = *(longlong **)(*param_1 + 0x30);
      *plVar12 = param_1[0x74];
      plVar12[1] = lVar3;
      lVar3 = param_1[0x77];
      plVar12[2] = param_1[0x76];
      plVar12[3] = lVar3;
      *(undefined1 (*) [16])(plVar12 + 4) = *(undefined1 (*) [16])(param_1 + 0x78);
      lVar3 = param_1[0x7b];
      plVar12[6] = param_1[0x7a];
      plVar12[7] = lVar3;
    }
    lVar3 = param_1[0x91];
    for (lVar17 = param_1[0x90]; lVar17 != lVar3; lVar17 = lVar17 + 0x10) {
      plVar12 = *(longlong **)(lVar17 + 8);
      lVar4 = *plVar12;
      puVar13 = *(undefined8 **)(lVar4 + 0x30);
      *(undefined1 *)(lVar4 + 0x1ca) = 1;
      *(undefined8 **)(lVar4 + 0x30) = puVar13 + 8;
      puVar13[8] = *puVar13;
      puVar13[9] = puVar13[1];
      puVar13[10] = puVar13[2];
      puVar13[0xb] = puVar13[3];
      puVar13[0xc] = puVar13[4];
      puVar13[0xd] = puVar13[5];
      *(undefined4 *)(puVar13 + 0xe) = *(undefined4 *)(puVar13 + 6);
      *(undefined4 *)((longlong)puVar13 + 0x74) = *(undefined4 *)((longlong)puVar13 + 0x34);
      *(undefined4 *)(puVar13 + 0xf) = *(undefined4 *)(puVar13 + 7);
      *(undefined4 *)((longlong)puVar13 + 0x7c) = *(undefined4 *)((longlong)puVar13 + 0x3c);
      if ((*(byte *)(plVar12 + 4) & 1) == 0) {
        puVar13 = *(undefined8 **)(*plVar12 + 0x30);
        puVar14 = (undefined8 *)FUN_14005ed80(auStack_78,puVar13,plVar12 + 0x74);
        uVar9 = puVar14[1];
        *puVar13 = *puVar14;
        puVar13[1] = uVar9;
        uVar9 = puVar14[3];
        puVar13[2] = puVar14[2];
        puVar13[3] = uVar9;
        uVar9 = puVar14[5];
        puVar13[4] = puVar14[4];
        puVar13[5] = uVar9;
        uVar6 = *(undefined4 *)((longlong)puVar14 + 0x34);
        uVar7 = *(undefined4 *)(puVar14 + 7);
        uVar8 = *(undefined4 *)((longlong)puVar14 + 0x3c);
        *(undefined4 *)(puVar13 + 6) = *(undefined4 *)(puVar14 + 6);
        *(undefined4 *)((longlong)puVar13 + 0x34) = uVar6;
        *(undefined4 *)(puVar13 + 7) = uVar7;
        *(undefined4 *)((longlong)puVar13 + 0x3c) = uVar8;
      }
      FUN_1402367c0(plVar12);
      lVar4 = *plVar12;
      plVar12 = (longlong *)(lVar4 + 0x30);
      *plVar12 = *plVar12 + -0x40;
      *(undefined1 *)(lVar4 + 0x1ca) = 1;
    }
    lVar3 = param_1[0x94];
    for (lVar17 = param_1[0x93]; lVar17 != lVar3; lVar17 = lVar17 + 0x38) {
      plVar12 = *(longlong **)(lVar17 + 0x10);
      for (plVar15 = *(longlong **)(lVar17 + 8); plVar15 != plVar12; plVar15 = plVar15 + 1) {
        plVar5 = (longlong *)*plVar15;
        lVar4 = *plVar5;
        puVar13 = *(undefined8 **)(lVar4 + 0x30);
        *(undefined1 *)(lVar4 + 0x1ca) = 1;
        *(undefined8 **)(lVar4 + 0x30) = puVar13 + 8;
        puVar13[8] = *puVar13;
        puVar13[9] = puVar13[1];
        puVar13[10] = puVar13[2];
        puVar13[0xb] = puVar13[3];
        puVar13[0xc] = puVar13[4];
        puVar13[0xd] = puVar13[5];
        *(undefined4 *)(puVar13 + 0xe) = *(undefined4 *)(puVar13 + 6);
        *(undefined4 *)((longlong)puVar13 + 0x74) = *(undefined4 *)((longlong)puVar13 + 0x34);
        *(undefined4 *)(puVar13 + 0xf) = *(undefined4 *)(puVar13 + 7);
        *(undefined4 *)((longlong)puVar13 + 0x7c) = *(undefined4 *)((longlong)puVar13 + 0x3c);
        if ((*(byte *)(plVar5 + 4) & 1) == 0) {
          puVar13 = *(undefined8 **)(*plVar5 + 0x30);
          puVar14 = (undefined8 *)FUN_14005ed80(auStack_78,puVar13,plVar5 + 0x74);
          uVar9 = puVar14[1];
          *puVar13 = *puVar14;
          puVar13[1] = uVar9;
          uVar9 = puVar14[3];
          puVar13[2] = puVar14[2];
          puVar13[3] = uVar9;
          uVar9 = puVar14[5];
          puVar13[4] = puVar14[4];
          puVar13[5] = uVar9;
          uVar6 = *(undefined4 *)((longlong)puVar14 + 0x34);
          uVar7 = *(undefined4 *)(puVar14 + 7);
          uVar8 = *(undefined4 *)((longlong)puVar14 + 0x3c);
          *(undefined4 *)(puVar13 + 6) = *(undefined4 *)(puVar14 + 6);
          *(undefined4 *)((longlong)puVar13 + 0x34) = uVar6;
          *(undefined4 *)(puVar13 + 7) = uVar7;
          *(undefined4 *)((longlong)puVar13 + 0x3c) = uVar8;
        }
        FUN_1402367c0(*plVar15);
        lVar4 = *(longlong *)*plVar15;
        plVar5 = (longlong *)(lVar4 + 0x30);
        *plVar5 = *plVar5 + -0x40;
        *(undefined1 *)(lVar4 + 0x1ca) = 1;
      }
    }
  }
  return;
}

