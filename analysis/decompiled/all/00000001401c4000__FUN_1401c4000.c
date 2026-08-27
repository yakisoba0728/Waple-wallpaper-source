// Function: FUN_1401c4000
// Addr: 1401c4000
// Size: 530 bytes


void FUN_1401c4000(longlong param_1,longlong param_2,undefined8 param_3,int *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  code *pcVar4;
  int *piVar5;
  ulonglong uVar6;
  char *pcVar7;
  longlong lVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  longlong in_R10;
  longlong in_R11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar10 = auStack_48;
  puVar9 = auStack_48;
  pcVar7 = *(char **)(param_2 + 0x58);
  if (pcVar7 != (char *)0x0) {
    cVar1 = *pcVar7;
    while (cVar1 != '\0') {
      if ((*pcVar7 == '\x03') && (lVar8 = *(longlong *)(pcVar7 + 0xa0), lVar8 != 0)) {
        uVar6 = (*(longlong *)(pcVar7 + 0xb0) - lVar8 >> 2) * 4;
        if (0xfff < uVar6) {
          if (0x1f < (lVar8 - *(longlong *)(lVar8 + -8)) - 8U) {
            piVar5 = (int *)&DAT_00000005;
            pcVar4 = (code *)swi(0x29);
            (*pcVar4)();
            puVar9 = auStack_40;
            goto LAB_1401c418a;
          }
          uVar6 = uVar6 + 0x27;
          lVar8 = *(longlong *)(lVar8 + -8);
        }
        thunk_FUN_14028af80(lVar8,uVar6);
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
      cVar1 = *pcVar7;
    }
    FUN_1402d3dd0(*(undefined8 *)(param_2 + 0x58));
  }
  pcVar7 = *(char **)(param_2 + 0x68);
  if (pcVar7 != (char *)0x0) {
    cVar1 = *pcVar7;
    while (cVar1 != '\0') {
      if (*pcVar7 == '\x05') {
        FUN_1401d9410(pcVar7 + 4);
      }
      pcVar7 = pcVar7 + *(ushort *)(pcVar7 + 2);
      cVar1 = *pcVar7;
    }
    FUN_1402d3dd0(*(undefined8 *)(param_2 + 0x68));
  }
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1402d3dd0();
  }
  if (*(longlong *)(param_2 + 0x88) != 0) {
    FUN_1402d3dd0();
  }
  if (*(longlong *)(param_2 + 0x98) != 0) {
    FUN_1402d3dd0();
  }
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  in_R11 = *(longlong *)(param_2 + 0x1b8);
  in_R10 = *(longlong *)(param_2 + 0x1b0);
  if (in_R10 == in_R11) {
LAB_1401c41be:
    if (*(longlong *)(param_2 + 0x1b0) != *(longlong *)(param_2 + 0x1b8)) {
      *(longlong *)(param_2 + 0x1b8) = *(longlong *)(param_2 + 0x1b0);
    }
    lVar8 = *(longlong *)(param_2 + 0x1c8);
    lVar3 = *(longlong *)(param_2 + 0x1d0);
    if (lVar8 != lVar3) {
      do {
        *(undefined8 *)(puVar10 + -8) = 0x1401c41f0;
        FUN_140017240(lVar8);
        lVar8 = lVar8 + 0x78;
      } while (lVar8 != lVar3);
      *(undefined8 *)(param_2 + 0x1d0) = *(undefined8 *)(param_2 + 0x1c8);
    }
    return;
  }
LAB_1401c4150:
  param_4 = *(int **)(in_R10 + 0x10);
  puVar10 = puVar9;
  if (*(int **)(in_R10 + 8) != (int *)0x0) {
    for (puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 0xa0);
        puVar2 != *(undefined8 **)(param_1 + 0xa0); puVar2 = (undefined8 *)*puVar2) {
      piVar5 = (int *)puVar2[2];
      if (piVar5 == *(int **)(in_R10 + 8)) goto LAB_1401c418a;
    }
  }
  goto LAB_1401c418c;
LAB_1401c418a:
  *piVar5 = *piVar5 + -1;
  puVar10 = puVar9;
LAB_1401c418c:
  if (param_4 != (int *)0x0) {
    for (puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 0xe0);
        puVar2 != *(undefined8 **)(param_1 + 0xe0); puVar2 = (undefined8 *)*puVar2) {
      piVar5 = (int *)puVar2[2];
      if (piVar5 == param_4) {
        *piVar5 = *piVar5 + -1;
        break;
      }
    }
  }
  in_R10 = in_R10 + 0x18;
  puVar9 = puVar10;
  if (in_R10 == in_R11) goto LAB_1401c41be;
  goto LAB_1401c4150;
}

