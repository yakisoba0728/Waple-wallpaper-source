// Function: FUN_14020f350
// Addr: 14020f350
// Size: 864 bytes


void FUN_14020f350(longlong *param_1,undefined8 param_2,uint *param_3,undefined8 *param_4)

{
  undefined4 *puVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  char cVar27;
  undefined8 uVar28;
  undefined4 *puVar29;
  undefined8 *puVar30;
  int iVar31;
  uint uVar32;
  longlong lVar33;
  ulonglong uVar34;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined1 local_d8 [64];
  undefined1 local_98 [128];
  
  lVar2 = param_1[0x97];
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
    puVar30 = (undefined8 *)param_4[1];
    uVar28 = *puVar30;
    uVar20 = puVar30[1];
    uVar21 = puVar30[2];
    uVar22 = puVar30[3];
    uVar23 = puVar30[4];
    uVar24 = puVar30[5];
    uVar25 = puVar30[6];
    uVar26 = puVar30[7];
    local_118 = uVar28;
    uStack_110 = uVar20;
    local_108 = uVar21;
    uStack_100 = uVar22;
    local_f8 = uVar23;
    uStack_f0 = uVar24;
    local_e8 = uVar25;
    uStack_e0 = uVar26;
    if ((*param_3 & 8) == 0) {
      if (((*param_3 >> 9 & 1) != 0) && (pcVar3 = (char *)*param_4, *pcVar3 != '\0')) {
        uVar34 = 0;
        lVar33 = *(longlong *)(lVar2 + 0x38);
        iVar31 = (int)(*(longlong *)(lVar2 + 0x40) - lVar33 >> 4) * -0x11111111;
        if (0 < iVar31) {
          do {
            cVar27 = FUN_14000d010(uVar34 * 0xf0 + lVar33,pcVar3);
            if (((cVar27 != '\0') &&
                (uVar34 < (ulonglong)
                          (*(longlong *)(lVar2 + 0x2d0) - *(longlong *)(lVar2 + 0x2c8) >> 6))) &&
               (lVar4 = *(longlong *)(lVar2 + 0x340), lVar4 != 0)) {
              lVar33 = uVar34 * 0x40;
              *(undefined8 *)(lVar4 + lVar33) = uVar28;
              ((undefined8 *)(lVar4 + lVar33))[1] = uVar20;
              puVar30 = (undefined8 *)(lVar4 + 0x10 + lVar33);
              *puVar30 = uVar21;
              puVar30[1] = uVar22;
              puVar30 = (undefined8 *)(lVar4 + 0x20 + lVar33);
              *puVar30 = uVar23;
              puVar30[1] = uVar24;
              puVar30 = (undefined8 *)(lVar4 + 0x30 + lVar33);
              *puVar30 = uVar25;
              puVar30[1] = uVar26;
              uVar28 = (**(code **)(*param_1 + 0x80))(param_1);
              FUN_14005f730(local_d8,uVar28);
              puVar29 = (undefined4 *)FUN_14005ecb0(local_98,local_d8,&local_118);
              uVar5 = puVar29[1];
              uVar6 = puVar29[2];
              uVar7 = puVar29[3];
              lVar2 = *(longlong *)(param_1[0x97] + 0x2c8);
              uVar8 = puVar29[4];
              uVar9 = puVar29[5];
              uVar10 = puVar29[6];
              uVar11 = puVar29[7];
              uVar12 = puVar29[8];
              uVar13 = puVar29[9];
              uVar14 = puVar29[10];
              uVar15 = puVar29[0xb];
              uVar16 = puVar29[0xc];
              uVar17 = puVar29[0xd];
              uVar18 = puVar29[0xe];
              uVar19 = puVar29[0xf];
              puVar1 = (undefined4 *)(lVar33 + lVar2);
              *puVar1 = *puVar29;
              puVar1[1] = uVar5;
              puVar1[2] = uVar6;
              puVar1[3] = uVar7;
              puVar1 = (undefined4 *)(lVar33 + 0x10 + lVar2);
              *puVar1 = uVar8;
              puVar1[1] = uVar9;
              puVar1[2] = uVar10;
              puVar1[3] = uVar11;
              puVar1 = (undefined4 *)(lVar33 + 0x20 + lVar2);
              *puVar1 = uVar12;
              puVar1[1] = uVar13;
              puVar1[2] = uVar14;
              puVar1[3] = uVar15;
              puVar1 = (undefined4 *)(lVar33 + 0x30 + lVar2);
              *puVar1 = uVar16;
              puVar1[1] = uVar17;
              puVar1[2] = uVar18;
              puVar1[3] = uVar19;
              puVar30 = (undefined8 *)
                        FUN_14005ecb0(local_98,*(longlong *)(param_1[0x97] + 0x2c8) + lVar33,
                                      *(longlong *)(param_1[0x97] + 0x2b0) + lVar33);
              uVar28 = puVar30[1];
              lVar2 = *(longlong *)(param_1[0x97] + 0x2f8);
              uVar20 = puVar30[2];
              uVar21 = puVar30[3];
              uVar22 = puVar30[4];
              uVar23 = puVar30[5];
              uVar24 = puVar30[6];
              uVar25 = puVar30[7];
              *(undefined8 *)(lVar33 + lVar2) = *puVar30;
              ((undefined8 *)(lVar33 + lVar2))[1] = uVar28;
              puVar30 = (undefined8 *)(lVar33 + 0x10 + lVar2);
              *puVar30 = uVar20;
              puVar30[1] = uVar21;
              puVar30 = (undefined8 *)(lVar33 + 0x20 + lVar2);
              *puVar30 = uVar22;
              puVar30[1] = uVar23;
              puVar30 = (undefined8 *)(lVar33 + 0x30 + lVar2);
              *puVar30 = uVar24;
              puVar30[1] = uVar25;
              return;
            }
            uVar32 = (int)uVar34 + 1;
            uVar34 = (ulonglong)uVar32;
          } while ((int)uVar32 < iVar31);
        }
      }
    }
    else {
      iVar31 = *(int *)*param_4;
      if (((-1 < iVar31) &&
          ((ulonglong)(longlong)iVar31 <
           (ulonglong)(*(longlong *)(lVar2 + 0x2d0) - *(longlong *)(lVar2 + 0x2c8) >> 6))) &&
         (lVar2 = *(longlong *)(lVar2 + 0x340), lVar2 != 0)) {
        lVar33 = (longlong)iVar31 * 0x40;
        *(undefined8 *)(lVar2 + lVar33) = uVar28;
        ((undefined8 *)(lVar2 + lVar33))[1] = uVar20;
        puVar30 = (undefined8 *)(lVar2 + 0x10 + lVar33);
        *puVar30 = uVar21;
        puVar30[1] = uVar22;
        puVar30 = (undefined8 *)(lVar2 + 0x20 + lVar33);
        *puVar30 = uVar23;
        puVar30[1] = uVar24;
        puVar30 = (undefined8 *)(lVar2 + 0x30 + lVar33);
        *puVar30 = uVar25;
        puVar30[1] = uVar26;
        uVar28 = (**(code **)(*param_1 + 0x80))(param_1);
        FUN_14005f730(local_d8,uVar28);
        puVar29 = (undefined4 *)FUN_14005ecb0(local_98,local_d8,&local_118);
        uVar5 = puVar29[1];
        uVar6 = puVar29[2];
        uVar7 = puVar29[3];
        lVar2 = *(longlong *)(param_1[0x97] + 0x2c8);
        uVar8 = puVar29[4];
        uVar9 = puVar29[5];
        uVar10 = puVar29[6];
        uVar11 = puVar29[7];
        uVar12 = puVar29[8];
        uVar13 = puVar29[9];
        uVar14 = puVar29[10];
        uVar15 = puVar29[0xb];
        uVar16 = puVar29[0xc];
        uVar17 = puVar29[0xd];
        uVar18 = puVar29[0xe];
        uVar19 = puVar29[0xf];
        puVar1 = (undefined4 *)(lVar33 + lVar2);
        *puVar1 = *puVar29;
        puVar1[1] = uVar5;
        puVar1[2] = uVar6;
        puVar1[3] = uVar7;
        puVar1 = (undefined4 *)(lVar33 + 0x10 + lVar2);
        *puVar1 = uVar8;
        puVar1[1] = uVar9;
        puVar1[2] = uVar10;
        puVar1[3] = uVar11;
        puVar1 = (undefined4 *)(lVar33 + 0x20 + lVar2);
        *puVar1 = uVar12;
        puVar1[1] = uVar13;
        puVar1[2] = uVar14;
        puVar1[3] = uVar15;
        puVar1 = (undefined4 *)(lVar33 + 0x30 + lVar2);
        *puVar1 = uVar16;
        puVar1[1] = uVar17;
        puVar1[2] = uVar18;
        puVar1[3] = uVar19;
        puVar30 = (undefined8 *)
                  FUN_14005ecb0(local_98,*(longlong *)(param_1[0x97] + 0x2c8) + lVar33,
                                *(longlong *)(param_1[0x97] + 0x2b0) + lVar33);
        uVar28 = puVar30[1];
        lVar2 = *(longlong *)(param_1[0x97] + 0x2f8);
        uVar20 = puVar30[2];
        uVar21 = puVar30[3];
        uVar22 = puVar30[4];
        uVar23 = puVar30[5];
        uVar24 = puVar30[6];
        uVar25 = puVar30[7];
        *(undefined8 *)(lVar33 + lVar2) = *puVar30;
        ((undefined8 *)(lVar33 + lVar2))[1] = uVar28;
        puVar30 = (undefined8 *)(lVar33 + 0x10 + lVar2);
        *puVar30 = uVar20;
        puVar30[1] = uVar21;
        puVar30 = (undefined8 *)(lVar33 + 0x20 + lVar2);
        *puVar30 = uVar22;
        puVar30[1] = uVar23;
        puVar30 = (undefined8 *)(lVar33 + 0x30 + lVar2);
        *puVar30 = uVar24;
        puVar30[1] = uVar25;
      }
    }
  }
  return;
}

