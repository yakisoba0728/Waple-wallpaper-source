// Function: FUN_1400be9d0
// Addr: 1400be9d0
// Size: 607 bytes


/* WARNING: Removing unreachable block (ram,0x0001400bead6) */

char * FUN_1400be9d0(int *param_1,undefined8 *param_2,longlong *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  undefined8 uVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  
  if (param_1 == (int *)0x0) {
    return "#base: bad receiver";
  }
  if (*param_1 != 0x3ccb6c71) {
    pcVar5 = "#base: initialize not called";
    if (*param_1 == 0x75ae3d2) {
      pcVar5 = "#base: disabled by previous error";
    }
    return pcVar5;
  }
  if (param_3 == (longlong *)0x0) {
    *param_1 = 0x75ae3d2;
    return "#base: bad argument";
  }
  if ((param_1[1] & 0xfffffffdU) != 0) {
    *param_1 = 0x75ae3d2;
    return "#base: interleaved coroutine calls";
  }
  pcVar5 = (char *)0x0;
  param_1[1] = 0;
  if ((param_1[0x1c] == 0) || (param_1[0x1c] == 1)) {
    pcVar7 = (char *)*param_3;
    pcVar8 = pcVar5;
    pcVar9 = pcVar5;
    if (pcVar7 != (char *)0x0) {
      pcVar9 = pcVar7 + param_3[3];
      pcVar8 = pcVar7;
    }
    if (param_1[0x1d] == 0) {
      bVar1 = *(byte *)(param_1 + 0xc);
      if (bVar1 == 0x20) {
LAB_1400beb70:
        if (param_2 != (undefined8 *)0x0) {
          uVar2 = *(undefined1 *)((longlong)param_1 + 0x3b);
          uVar4 = *(undefined8 *)(param_1 + 0x12);
          iVar6 = param_1[10];
          iVar3 = param_1[0xb];
          *param_2 = 0;
          *(int *)(param_2 + 1) = iVar6;
          *(int *)((longlong)param_2 + 0xc) = iVar3;
          param_2[2] = 0;
          param_2[3] = 0;
          param_2[4] = uVar4;
          *(undefined1 *)(param_2 + 5) = 0;
          *(undefined1 *)((longlong)param_2 + 0x29) = uVar2;
          *(undefined1 *)((longlong)param_2 + 0x2a) = 0;
          *(undefined4 *)((longlong)param_2 + 0x2c) = 0xff000000;
        }
        *(undefined1 *)(param_1 + 0xc) = 0x40;
      }
      else {
        if (bVar1 < 0x20) {
          param_3[3] = (longlong)pcVar9 - (longlong)pcVar7;
          goto LAB_1400beafc;
        }
        if (bVar1 == 0x28) {
          pcVar7 = pcVar9 + (param_3[4] - (longlong)pcVar8);
          if (pcVar7 < (char *)param_3[4]) {
            pcVar7 = (char *)0xffffffffffffffff;
          }
          if (*(char **)(param_1 + 0x12) != pcVar7) {
            pcVar5 = "#base: bad restart";
            goto LAB_1400bebb4;
          }
          goto LAB_1400beb70;
        }
        pcVar5 = "@base: end of data";
        if (bVar1 == 0x40) {
          *(undefined1 *)(param_1 + 0xc) = 0x60;
        }
      }
      param_1[0x1d] = 0;
    }
    else if (param_1[0x1d] == 1) {
LAB_1400beafc:
      pcVar5 = (char *)FUN_1400be000(param_1,0);
      pcVar9 = (char *)(param_3[3] + *param_3);
      if (pcVar5 == (char *)0x0) goto LAB_1400beb70;
      param_1[0x1d] = (uint)(*pcVar5 == '$');
    }
    else {
      param_1[0x1d] = 0;
    }
LAB_1400bebb4:
    if (*param_3 != 0) {
      param_3[3] = (longlong)pcVar9 - *param_3;
    }
    if ((pcVar5 == "$base: short read") && ((char)param_3[5] != '\0')) {
      pcVar5 = "#tga: truncated input";
      goto LAB_1400bec14;
    }
    if (pcVar5 == (char *)0x0) {
      param_1[0x1c] = 0;
      return (char *)0x0;
    }
    if (*pcVar5 == '$') {
      param_1[0x1c] = 1;
      iVar6 = 2;
      if (*pcVar5 != '$') goto LAB_1400bec04;
      goto LAB_1400bec07;
    }
  }
  else {
    param_1[0x1c] = 0;
LAB_1400bec04:
    iVar6 = 0;
LAB_1400bec07:
    param_1[1] = iVar6;
    if (pcVar5 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  if (*pcVar5 != '#') {
    return pcVar5;
  }
LAB_1400bec14:
  *param_1 = 0x75ae3d2;
  return pcVar5;
}

