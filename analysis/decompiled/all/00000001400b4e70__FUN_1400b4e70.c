// Function: FUN_1400b4e70
// Addr: 1400b4e70
// Size: 589 bytes


/* WARNING: Removing unreachable block (ram,0x0001400b4f76) */

char * FUN_1400b4e70(int *param_1,undefined8 *param_2,longlong *param_3)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  
  if (param_1 == (int *)0x0) {
    return "#base: bad receiver";
  }
  if (*param_1 != 0x3ccb6c71) {
    pcVar3 = "#base: initialize not called";
    if (*param_1 == 0x75ae3d2) {
      pcVar3 = "#base: disabled by previous error";
    }
    return pcVar3;
  }
  if (param_3 == (longlong *)0x0) {
    *param_1 = 0x75ae3d2;
    return "#base: bad argument";
  }
  if ((param_1[1] & 0xfffffffdU) != 0) {
    *param_1 = 0x75ae3d2;
    return "#base: interleaved coroutine calls";
  }
  pcVar3 = (char *)0x0;
  param_1[1] = 0;
  if ((param_1[0x18] == 0) || (param_1[0x18] == 1)) {
    pcVar5 = (char *)*param_3;
    pcVar6 = pcVar3;
    pcVar7 = pcVar3;
    if (pcVar5 != (char *)0x0) {
      pcVar6 = pcVar5 + param_3[3];
      pcVar7 = pcVar5;
    }
    if (param_1[0x19] == 0) {
      bVar1 = *(byte *)(param_1 + 0xd);
      if (bVar1 == 0x20) {
LAB_1400b5009:
        if (param_2 != (undefined8 *)0x0) {
          iVar4 = param_1[0xb];
          iVar2 = param_1[0xc];
          *param_2 = 0;
          *(int *)(param_2 + 1) = iVar4;
          *(int *)((longlong)param_2 + 0xc) = iVar2;
          param_2[2] = 0;
          param_2[3] = 0;
          param_2[4] = 0x10;
          *(undefined2 *)(param_2 + 5) = 0;
          *(undefined1 *)((longlong)param_2 + 0x2a) = 0;
          *(undefined4 *)((longlong)param_2 + 0x2c) = 0;
        }
        *(undefined1 *)(param_1 + 0xd) = 0x40;
      }
      else {
        if (bVar1 < 0x20) {
          param_3[3] = (longlong)pcVar6 - (longlong)pcVar5;
          goto LAB_1400b4f98;
        }
        if (bVar1 == 0x28) {
          pcVar5 = pcVar6 + (param_3[4] - (longlong)pcVar7);
          if (pcVar5 < (char *)param_3[4]) {
            pcVar5 = (char *)0xffffffffffffffff;
          }
          if (pcVar5 != &DAT_00000010) {
            pcVar3 = "#base: bad restart";
            goto LAB_1400b5042;
          }
          goto LAB_1400b5009;
        }
        pcVar3 = "@base: end of data";
        if (bVar1 == 0x40) {
          *(undefined1 *)(param_1 + 0xd) = 0x60;
        }
      }
      param_1[0x19] = 0;
    }
    else if (param_1[0x19] == 1) {
LAB_1400b4f98:
      pcVar3 = (char *)FUN_1400b4ac0(param_1,0);
      pcVar6 = (char *)(param_3[3] + *param_3);
      if (pcVar3 == (char *)0x0) goto LAB_1400b5009;
      param_1[0x19] = (uint)(*pcVar3 == '$');
    }
    else {
      param_1[0x19] = 0;
    }
LAB_1400b5042:
    if (*param_3 != 0) {
      param_3[3] = (longlong)pcVar6 - *param_3;
    }
    if ((pcVar3 == "$base: short read") && ((char)param_3[5] != '\0')) {
      pcVar3 = "#nie: truncated input";
      goto LAB_1400b50a2;
    }
    if (pcVar3 == (char *)0x0) {
      param_1[0x18] = 0;
      return (char *)0x0;
    }
    if (*pcVar3 == '$') {
      param_1[0x18] = 1;
      iVar4 = 2;
      if (*pcVar3 != '$') goto LAB_1400b5092;
      goto LAB_1400b5095;
    }
  }
  else {
    param_1[0x18] = 0;
LAB_1400b5092:
    iVar4 = 0;
LAB_1400b5095:
    param_1[1] = iVar4;
    if (pcVar3 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  if (*pcVar3 != '#') {
    return pcVar3;
  }
LAB_1400b50a2:
  *param_1 = 0x75ae3d2;
  return pcVar3;
}

