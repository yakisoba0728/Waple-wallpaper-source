// Function: FUN_1400a5100
// Addr: 1400a5100
// Size: 604 bytes


char * FUN_1400a5100(int *param_1,undefined8 *param_2,longlong *param_3)

{
  byte bVar1;
  undefined8 uVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  
  if (param_1 == (int *)0x0) {
    return "#base: bad receiver";
  }
  if (*param_1 != 0x3ccb6c71) {
    pcVar4 = "#base: initialize not called";
    if (*param_1 == 0x75ae3d2) {
      pcVar4 = "#base: disabled by previous error";
    }
    return pcVar4;
  }
  if (param_3 == (longlong *)0x0) {
    *param_1 = 0x75ae3d2;
    return "#base: bad argument";
  }
  if ((param_1[1] & 0xfffffffdU) != 0) {
    *param_1 = 0x75ae3d2;
    return "#base: interleaved coroutine calls";
  }
  pcVar4 = (char *)0x0;
  param_1[1] = 0;
  if ((param_1[0x2e] == 0) || (param_1[0x2e] == 1)) {
    pcVar6 = (char *)*param_3;
    pcVar8 = pcVar4;
    pcVar9 = pcVar4;
    if (pcVar6 != (char *)0x0) {
      pcVar8 = pcVar6 + param_3[3];
      pcVar9 = pcVar6;
    }
    iVar7 = param_1[0x2f];
    if (iVar7 == 0) {
      bVar1 = *(byte *)(param_1 + 0xc);
      if (bVar1 == 0x20) {
LAB_1400a529b:
        if (param_2 != (undefined8 *)0x0) {
          uVar2 = *(undefined8 *)(param_1 + 0x12);
          iVar7 = param_1[10];
          iVar5 = param_1[0xb];
          *param_2 = 0;
          *(int *)(param_2 + 1) = iVar7;
          *(int *)((longlong)param_2 + 0xc) = iVar5;
          param_2[2] = 0;
          param_2[3] = 0;
          param_2[4] = uVar2;
          *(undefined2 *)(param_2 + 5) = 0x100;
          *(undefined1 *)((longlong)param_2 + 0x2a) = 0;
          *(undefined4 *)((longlong)param_2 + 0x2c) = 0xff000000;
        }
        *(undefined1 *)(param_1 + 0xc) = 0x40;
LAB_1400a52d4:
        param_1[0x2f] = 0;
      }
      else {
        if (bVar1 < 0x20) {
          iVar7 = 1;
          param_3[3] = (longlong)pcVar8 - (longlong)pcVar6;
          goto LAB_1400a5224;
        }
        if (bVar1 != 0x28) {
          pcVar4 = "@base: end of data";
          if (bVar1 == 0x40) {
            *(undefined1 *)(param_1 + 0xc) = 0x60;
          }
          goto LAB_1400a52d4;
        }
        pcVar6 = pcVar8 + (param_3[4] - (longlong)pcVar9);
        if (pcVar6 < (char *)param_3[4]) {
          pcVar6 = (char *)0xffffffffffffffff;
        }
        if (*(char **)(param_1 + 0x12) == pcVar6) goto LAB_1400a529b;
        pcVar4 = "#base: bad restart";
      }
    }
    else {
      if (iVar7 == 1) {
LAB_1400a5224:
        pcVar4 = (char *)FUN_1400a3c90(param_1,0);
        pcVar8 = (char *)(param_3[3] + *param_3);
        if (pcVar4 == (char *)0x0) goto LAB_1400a529b;
        bVar3 = true;
        if (*pcVar4 != '$') goto LAB_1400a5244;
      }
      else {
LAB_1400a5244:
        bVar3 = false;
      }
      iVar5 = 0;
      if (bVar3) {
        iVar5 = iVar7;
      }
      param_1[0x2f] = iVar5;
    }
    if (*param_3 != 0) {
      param_3[3] = (longlong)pcVar8 - *param_3;
    }
    if ((pcVar4 == "$base: short read") && ((char)param_3[5] != '\0')) {
      pcVar4 = "#bmp: truncated input";
      goto LAB_1400a5341;
    }
    if (pcVar4 == (char *)0x0) {
      param_1[0x2e] = 0;
      return (char *)0x0;
    }
    if (*pcVar4 == '$') {
      param_1[0x2e] = 1;
      iVar7 = 2;
      if (*pcVar4 != '$') goto LAB_1400a5331;
      goto LAB_1400a5334;
    }
  }
  else {
    param_1[0x2e] = 0;
LAB_1400a5331:
    iVar7 = 0;
LAB_1400a5334:
    param_1[1] = iVar7;
    if (pcVar4 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  if (*pcVar4 != '#') {
    return pcVar4;
  }
LAB_1400a5341:
  *param_1 = 0x75ae3d2;
  return pcVar4;
}

