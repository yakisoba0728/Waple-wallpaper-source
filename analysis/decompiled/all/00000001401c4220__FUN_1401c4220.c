// Function: FUN_1401c4220
// Addr: 1401c4220
// Size: 975 bytes


void FUN_1401c4220(undefined8 param_1,undefined4 *param_2,undefined4 *param_3)

{
  char *pcVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  char *pcVar7;
  undefined8 *puVar8;
  longlong lVar9;
  
  *param_3 = *param_2;
  param_3[1] = param_2[1];
  param_3[2] = param_2[2];
  *(undefined1 *)(param_3 + 3) = *(undefined1 *)(param_2 + 3);
  param_3[4] = param_2[4];
  param_3[5] = param_2[5];
  param_3[6] = param_2[6];
  *(undefined8 *)(param_3 + 7) = *(undefined8 *)(param_2 + 7);
  param_3[9] = param_2[9];
  *(undefined1 *)(param_3 + 10) = *(undefined1 *)(param_2 + 10);
  *(undefined1 *)((longlong)param_3 + 0x29) = *(undefined1 *)((longlong)param_2 + 0x29);
  param_3[0xb] = param_2[0xb];
  param_3[0xc] = param_2[0xc];
  if (param_3 != param_2) {
    puVar8 = (undefined8 *)(param_2 + 0xe);
    if (0xf < *(ulonglong *)(param_2 + 0x14)) {
      puVar8 = (undefined8 *)*puVar8;
    }
    FUN_14000f880(param_3 + 0xe,puVar8,*(undefined8 *)(param_2 + 0x12));
  }
  *(undefined8 *)(param_3 + 0x16) = *(undefined8 *)(param_2 + 0x16);
  param_3[0x18] = param_2[0x18];
  *(undefined8 *)(param_3 + 0x1a) = *(undefined8 *)(param_2 + 0x1a);
  param_3[0x1c] = param_2[0x1c];
  *(undefined8 *)(param_3 + 0x1e) = *(undefined8 *)(param_2 + 0x1e);
  param_3[0x20] = param_2[0x20];
  *(undefined8 *)(param_3 + 0x22) = *(undefined8 *)(param_2 + 0x22);
  param_3[0x24] = param_2[0x24];
  *(undefined8 *)(param_3 + 0x26) = *(undefined8 *)(param_2 + 0x26);
  param_3[0x28] = param_2[0x28];
  uVar6 = *(undefined8 *)(param_2 + 0x2b);
  *(undefined8 *)(param_3 + 0x29) = *(undefined8 *)(param_2 + 0x29);
  *(undefined8 *)(param_3 + 0x2b) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x2f);
  *(undefined8 *)(param_3 + 0x2d) = *(undefined8 *)(param_2 + 0x2d);
  *(undefined8 *)(param_3 + 0x2f) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x33);
  *(undefined8 *)(param_3 + 0x31) = *(undefined8 *)(param_2 + 0x31);
  *(undefined8 *)(param_3 + 0x33) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x37);
  *(undefined8 *)(param_3 + 0x35) = *(undefined8 *)(param_2 + 0x35);
  *(undefined8 *)(param_3 + 0x37) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x3b);
  *(undefined8 *)(param_3 + 0x39) = *(undefined8 *)(param_2 + 0x39);
  *(undefined8 *)(param_3 + 0x3b) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x3f);
  *(undefined8 *)(param_3 + 0x3d) = *(undefined8 *)(param_2 + 0x3d);
  *(undefined8 *)(param_3 + 0x3f) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x43);
  *(undefined8 *)(param_3 + 0x41) = *(undefined8 *)(param_2 + 0x41);
  *(undefined8 *)(param_3 + 0x43) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x47);
  *(undefined8 *)(param_3 + 0x45) = *(undefined8 *)(param_2 + 0x45);
  *(undefined8 *)(param_3 + 0x47) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x4b);
  *(undefined8 *)(param_3 + 0x49) = *(undefined8 *)(param_2 + 0x49);
  *(undefined8 *)(param_3 + 0x4b) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x4f);
  *(undefined8 *)(param_3 + 0x4d) = *(undefined8 *)(param_2 + 0x4d);
  *(undefined8 *)(param_3 + 0x4f) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x53);
  *(undefined8 *)(param_3 + 0x51) = *(undefined8 *)(param_2 + 0x51);
  *(undefined8 *)(param_3 + 0x53) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x57);
  *(undefined8 *)(param_3 + 0x55) = *(undefined8 *)(param_2 + 0x55);
  *(undefined8 *)(param_3 + 0x57) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x5b);
  *(undefined8 *)(param_3 + 0x59) = *(undefined8 *)(param_2 + 0x59);
  *(undefined8 *)(param_3 + 0x5b) = uVar6;
  uVar6 = *(undefined8 *)(param_2 + 0x5f);
  *(undefined8 *)(param_3 + 0x5d) = *(undefined8 *)(param_2 + 0x5d);
  *(undefined8 *)(param_3 + 0x5f) = uVar6;
  uVar3 = param_2[0x62];
  uVar4 = param_2[99];
  uVar5 = param_2[100];
  param_3[0x61] = param_2[0x61];
  param_3[0x62] = uVar3;
  param_3[99] = uVar4;
  param_3[100] = uVar5;
  uVar3 = param_2[0x66];
  uVar4 = param_2[0x67];
  uVar5 = param_2[0x68];
  param_3[0x65] = param_2[0x65];
  param_3[0x66] = uVar3;
  param_3[0x67] = uVar4;
  param_3[0x68] = uVar5;
  param_3[0x69] = param_2[0x69];
  param_3[0x6a] = param_2[0x6a];
  if (param_3 != param_2) {
    FUN_1401da7e0(param_3 + 0x6c,*(longlong *)(param_2 + 0x6c),
                  (*(longlong *)(param_2 + 0x6e) - *(longlong *)(param_2 + 0x6c) >> 3) *
                  -0x5555555555555555);
    FUN_1401da520(param_3 + 0x72,*(longlong *)(param_2 + 0x72),
                  (*(longlong *)(param_2 + 0x74) - *(longlong *)(param_2 + 0x72) >> 3) *
                  -0x1111111111111111);
  }
  uVar6 = FUN_1401c2e70(*(longlong *)(param_2 + 0x16),
                        (ulonglong)(uint)param_2[0x18] + *(longlong *)(param_2 + 0x16));
  *(undefined8 *)(param_3 + 0x16) = uVar6;
  uVar6 = FUN_1401c2e70(*(longlong *)(param_2 + 0x1a),
                        (ulonglong)(uint)param_2[0x1c] + *(longlong *)(param_2 + 0x1a));
  *(undefined8 *)(param_3 + 0x1a) = uVar6;
  uVar6 = FUN_1401c2e70(*(longlong *)(param_2 + 0x1e),
                        (ulonglong)(uint)param_2[0x20] + *(longlong *)(param_2 + 0x1e));
  *(undefined8 *)(param_3 + 0x1e) = uVar6;
  uVar6 = FUN_1401c2e70(*(longlong *)(param_2 + 0x22),
                        (ulonglong)(uint)param_2[0x24] + *(longlong *)(param_2 + 0x22));
  *(undefined8 *)(param_3 + 0x22) = uVar6;
  pcVar7 = (char *)FUN_1401c2e70(*(longlong *)(param_2 + 0x26),
                                 (ulonglong)(uint)param_2[0x28] + *(longlong *)(param_2 + 0x26));
  uVar6 = *(undefined8 *)(param_3 + 0x16);
  *(char **)(param_3 + 0x26) = pcVar7;
  lVar9 = *(longlong *)(param_2 + 0x16);
  cVar2 = *pcVar7;
  while (cVar2 != '\0') {
    if (*(longlong *)(pcVar7 + 4) == lVar9) {
      *(undefined8 *)(pcVar7 + 4) = uVar6;
    }
    pcVar7 = pcVar7 + *(int *)(pcVar7 + 0xc);
    cVar2 = *pcVar7;
  }
  pcVar7 = *(char **)(param_3 + 0x26);
  uVar6 = *(undefined8 *)(param_3 + 0x1a);
  lVar9 = *(longlong *)(param_2 + 0x1a);
  cVar2 = *pcVar7;
  while (cVar2 != '\0') {
    if (*(longlong *)(pcVar7 + 4) == lVar9) {
      *(undefined8 *)(pcVar7 + 4) = uVar6;
    }
    pcVar7 = pcVar7 + *(int *)(pcVar7 + 0xc);
    cVar2 = *pcVar7;
  }
  pcVar7 = *(char **)(param_3 + 0x26);
  uVar6 = *(undefined8 *)(param_3 + 0x1e);
  lVar9 = *(longlong *)(param_2 + 0x1e);
  cVar2 = *pcVar7;
  while (cVar2 != '\0') {
    if (*(longlong *)(pcVar7 + 4) == lVar9) {
      *(undefined8 *)(pcVar7 + 4) = uVar6;
    }
    pcVar7 = pcVar7 + *(int *)(pcVar7 + 0xc);
    cVar2 = *pcVar7;
  }
  pcVar7 = *(char **)(param_3 + 0x16);
  cVar2 = *pcVar7;
  while (cVar2 != '\0') {
    if (*pcVar7 == '\x03') {
      pcVar7[0xa0] = '\0';
      pcVar7[0xa1] = '\0';
      pcVar7[0xa2] = '\0';
      pcVar7[0xa3] = '\0';
      pcVar7[0xa4] = '\0';
      pcVar7[0xa5] = '\0';
      pcVar7[0xa6] = '\0';
      pcVar7[0xa7] = '\0';
      pcVar7[0xa8] = '\0';
      pcVar7[0xa9] = '\0';
      pcVar7[0xaa] = '\0';
      pcVar7[0xab] = '\0';
      pcVar7[0xac] = '\0';
      pcVar7[0xad] = '\0';
      pcVar7[0xae] = '\0';
      pcVar7[0xaf] = '\0';
      pcVar7[0xb0] = '\0';
      pcVar7[0xb1] = '\0';
      pcVar7[0xb2] = '\0';
      pcVar7[0xb3] = '\0';
      pcVar7[0xb4] = '\0';
      pcVar7[0xb5] = '\0';
      pcVar7[0xb6] = '\0';
      pcVar7[0xb7] = '\0';
    }
    pcVar7 = pcVar7 + *(ushort *)(pcVar7 + 2);
    cVar2 = *pcVar7;
  }
  pcVar7 = *(char **)(param_3 + 0x1a);
  cVar2 = *pcVar7;
  while (cVar2 != '\0') {
    if (*pcVar7 == '\x05') {
      pcVar1 = pcVar7 + 4;
      lVar9 = *(longlong *)(param_2 + 0x1a) - *(longlong *)(param_3 + 0x1a);
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      pcVar1[4] = '\0';
      pcVar1[5] = '\0';
      pcVar1[6] = '\0';
      pcVar1[7] = '\0';
      pcVar7[0xc] = '\0';
      pcVar7[0xd] = '\0';
      pcVar7[0xe] = '\0';
      pcVar7[0xf] = '\0';
      pcVar7[0x10] = '\0';
      pcVar7[0x11] = '\0';
      pcVar7[0x12] = '\0';
      pcVar7[0x13] = '\0';
      pcVar7[0x14] = '\0';
      pcVar7[0x15] = '\0';
      pcVar7[0x16] = '\0';
      pcVar7[0x17] = '\0';
      pcVar7[0x18] = '\0';
      pcVar7[0x19] = '\0';
      pcVar7[0x1a] = '\0';
      pcVar7[0x1b] = '\0';
      if (lVar9 != 0) {
        FUN_1401daf70(pcVar1,*(longlong *)(pcVar7 + lVar9 + 4),
                      (*(longlong *)(pcVar7 + lVar9 + 0xc) - *(longlong *)(pcVar7 + lVar9 + 4) >> 2)
                      * -0x5555555555555555);
      }
    }
    pcVar7 = pcVar7 + *(ushort *)(pcVar7 + 2);
    cVar2 = *pcVar7;
  }
  return;
}

