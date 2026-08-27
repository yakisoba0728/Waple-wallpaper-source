// Function: FUN_140320230
// Addr: 140320230
// Size: 928 bytes


ulonglong FUN_140320230(longlong param_1,byte *param_2,byte *param_3)

{
  byte bVar1;
  longlong lVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  int *piVar9;
  int *piVar10;
  ulonglong uVar11;
  undefined8 *puVar12;
  longlong lVar13;
  
  uVar11 = 0;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
  *(byte **)(param_1 + 8) = param_2;
  *(byte **)(param_1 + 0x10) = param_3;
  *(byte **)(param_1 + 0x18) = param_2;
  if (param_3 <= param_2) {
    return 0;
  }
  while( true ) {
    bVar1 = *param_2;
    uVar5 = (uint)bVar1;
    if (((bVar1 < 0x1b) || (bVar1 == 0x1f)) || (bVar1 == 0xff)) break;
    if (*(uint *)(param_1 + 0x30) <=
        (uint)((longlong)*(undefined8 **)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3)) {
      return 6;
    }
    **(undefined8 **)(param_1 + 0x28) = param_2;
    *(longlong *)(param_1 + 0x28) = *(longlong *)(param_1 + 0x28) + 8;
    if (bVar1 == 0x1e) {
      do {
        param_2 = param_2 + 1;
        if (param_3 <= param_2) {
          return uVar11;
        }
      } while (((*param_2 & 0xf0) != 0xf0) && ((*param_2 & 0xf) != 0xf));
    }
    else if (bVar1 == 0x1c) {
      param_2 = param_2 + 2;
    }
    else if (bVar1 == 0x1d) {
      param_2 = param_2 + 4;
    }
    else if (0xf6 < bVar1) {
      param_2 = param_2 + 1;
    }
LAB_140320464:
    param_2 = param_2 + 1;
    if (param_3 <= param_2) {
      return uVar11;
    }
  }
  uVar7 = (longlong)*(undefined8 **)(param_1 + 0x28) - *(longlong *)(param_1 + 0x20) >> 3;
  uVar6 = (uint)uVar7;
  if (*(uint *)(param_1 + 0x30) <= uVar6) {
    return 6;
  }
  **(undefined8 **)(param_1 + 0x28) = param_2;
  if (bVar1 == 0xc) {
    param_2 = param_2 + 1;
    if (param_3 <= param_2) {
      return 6;
    }
    uVar5 = *param_2 | 0x100;
  }
  piVar9 = (int *)&DAT_14043d940;
LAB_140320370:
  if (piVar9[1] != (uVar5 | *(uint *)(param_1 + 0x34))) goto code_r0x000140320375;
  iVar8 = *piVar9;
  if ((1 < iVar8 - 6U) && (uVar6 == 0)) {
    return 6;
  }
  if (6 < iVar8 - 1U) {
    uVar7 = (**(code **)(piVar9 + 4))(param_1);
    uVar11 = uVar7 & 0xffffffff;
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    goto LAB_140320457;
  }
  lVar2 = *(longlong *)(param_1 + 0x38);
  piVar10 = (int *)((ulonglong)(uint)piVar9[2] + lVar2);
  switch(iVar8) {
  default:
    pcVar3 = (char *)**(undefined8 **)(param_1 + 0x20);
    if (*pcVar3 == '\x1e') {
      iVar8 = FUN_14031feb0(pcVar3,*(undefined8 *)(param_1 + 0x10),0,0);
      iVar8 = iVar8 >> 0x10;
    }
    else if (*pcVar3 == -1) {
      iVar8 = (int)(short)(CONCAT21(CONCAT11(pcVar3[1],pcVar3[2]),pcVar3[3]) + 0x80 >> 8);
    }
    else {
      iVar8 = FUN_14031fd70(pcVar3,*(undefined8 *)(param_1 + 0x10));
    }
    break;
  case 2:
    iVar8 = FUN_14031fce0(param_1,*(undefined8 *)(param_1 + 0x20));
    break;
  case 3:
    iVar8 = FUN_140321b70(param_1,*(undefined8 *)(param_1 + 0x20),3);
    break;
  case 6:
    puVar12 = *(undefined8 **)(param_1 + 0x20);
    uVar11 = (ulonglong)(uint)piVar9[6];
    if (uVar6 <= (uint)piVar9[6]) {
      uVar11 = uVar7 & 0xffffffff;
    }
    *(char *)((ulonglong)(uint)piVar9[7] + lVar2) = (char)uVar11;
    if ((int)uVar11 != 0) {
      iVar8 = 0;
      do {
        pcVar3 = (char *)*puVar12;
        if (*pcVar3 == '\x1e') {
          iVar4 = FUN_14031feb0(pcVar3,*(undefined8 *)(param_1 + 0x10),0,0);
          iVar4 = iVar4 >> 0x10;
        }
        else if (*pcVar3 == -1) {
          iVar4 = (int)(short)(CONCAT21(CONCAT11(pcVar3[1],pcVar3[2]),pcVar3[3]) + 0x80 >> 8);
        }
        else {
          iVar4 = FUN_14031fd70(pcVar3,*(undefined8 *)(param_1 + 0x10));
        }
        iVar8 = iVar8 + iVar4;
        puVar12 = puVar12 + 1;
        if ((char)piVar9[3] == '\x01') {
          *(char *)piVar10 = (char)iVar8;
        }
        else if ((char)piVar9[3] == '\x02') {
          *(short *)piVar10 = (short)iVar8;
        }
        else {
          *piVar10 = iVar8;
        }
        piVar10 = (int *)((longlong)piVar10 + (ulonglong)*(byte *)(piVar9 + 3));
        uVar5 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar5;
      } while (uVar5 != 0);
      goto LAB_14032044b;
    }
LAB_1403205af:
    uVar11 = 0;
    goto LAB_140320457;
  case 7:
    lVar13 = *(longlong *)(param_1 + 0x20);
    uVar11 = (ulonglong)(uint)piVar9[6];
    if (uVar6 <= (uint)piVar9[6]) {
      uVar11 = uVar7 & 0xffffffff;
    }
    *(char *)((ulonglong)(uint)piVar9[7] + lVar2) = (char)uVar11;
    if ((int)uVar11 == 0) goto LAB_1403205af;
    iVar8 = 0;
    do {
      iVar4 = FUN_14031fce0(param_1,lVar13);
      iVar8 = iVar8 + iVar4;
      lVar13 = lVar13 + 8;
      *piVar10 = iVar8;
      piVar10 = (int *)((longlong)piVar10 + (ulonglong)*(byte *)(piVar9 + 3));
      uVar5 = (int)uVar11 - 1;
      uVar11 = (ulonglong)uVar5;
    } while (uVar5 != 0);
LAB_14032044b:
    uVar11 = 0;
LAB_140320457:
    if (*piVar9 != 9) {
      *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_1 + 0x20);
    }
    goto LAB_140320464;
  }
  if ((char)piVar9[3] == '\x01') {
    *(char *)piVar10 = (char)iVar8;
  }
  else if ((char)piVar9[3] == '\x02') {
    *(short *)piVar10 = (short)iVar8;
  }
  else {
    *piVar10 = iVar8;
  }
  goto LAB_14032044b;
code_r0x000140320375:
  piVar9 = piVar9 + 8;
  if (*piVar9 == 0) goto LAB_140320457;
  goto LAB_140320370;
}

