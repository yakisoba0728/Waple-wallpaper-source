// Function: FUN_1400af540
// Addr: 1400af540
// Size: 635 bytes


char * FUN_1400af540(int *param_1,longlong param_2,longlong param_3,undefined1 param_4,
                    undefined4 *param_5)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  ulonglong uVar4;
  int iVar5;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  if (param_1 == (int *)0x0) {
    return "#base: bad receiver";
  }
  if (*param_1 != 0x3ccb6c71) {
    pcVar1 = "#base: initialize not called";
    if (*param_1 == 0x75ae3d2) {
      pcVar1 = "#base: disabled by previous error";
    }
    return pcVar1;
  }
  if ((param_2 == 0) || (param_3 == 0)) {
    pcVar1 = "#base: bad argument";
LAB_1400af7a7:
    *param_1 = 0x75ae3d2;
    return pcVar1;
  }
  if ((param_1[1] & 0xfffffffbU) != 0) {
    pcVar1 = "#base: interleaved coroutine calls";
    goto LAB_1400af7a7;
  }
  pcVar1 = (char *)0x0;
  param_1[1] = 0;
  if ((param_1[0x39] == 0) || (param_1[0x39] == 1)) {
    iVar5 = param_1[0x3a];
    iVar2 = 0;
    if (iVar5 == 0) {
      if (*(byte *)(param_1 + 0xc) != 0x40) {
        if (*(byte *)(param_1 + 0xc) < 0x40) {
          iVar5 = 1;
          goto LAB_1400af63b;
        }
        pcVar1 = "@base: end of data";
        iVar2 = 0;
        goto LAB_1400af764;
      }
LAB_1400af64e:
      if ((*(char *)((longlong)param_1 + 0x45) == '\0') ||
         ((param_1[0x20] != param_1[0x22] && (param_1[0x21] != param_1[0x23])))) {
        iVar5 = 2;
        goto LAB_1400af6de;
      }
      pcVar1 = "#gif: bad frame size";
    }
    else {
      if (iVar5 == 1) {
LAB_1400af63b:
        pcVar1 = (char *)FUN_1400aeb10(param_1,0);
        if (pcVar1 == (char *)0x0) goto LAB_1400af64e;
LAB_1400af74f:
        iVar3 = 1;
        if (*pcVar1 != '$') goto LAB_1400af759;
      }
      else {
        if (iVar5 == 2) {
LAB_1400af6de:
          pcVar1 = (char *)FUN_1400b0810(param_1,param_2,param_3,param_4);
          if (pcVar1 == (char *)0x0) {
            iVar5 = 3;
            goto LAB_1400af6fa;
          }
          goto LAB_1400af74f;
        }
        if (iVar5 == 3) {
LAB_1400af6fa:
          local_28 = *param_5;
          uStack_24 = param_5[1];
          uStack_20 = param_5[2];
          uStack_1c = param_5[3];
          pcVar1 = (char *)FUN_1400b0cc0(param_1,param_2,param_3,&local_28);
          if (pcVar1 == (char *)0x0) {
            *(undefined2 *)(param_1 + 0x17) = 0;
            *(undefined1 *)((longlong)param_1 + 0x5e) = 0;
            param_1[0x18] = 0;
            param_1[0x19] = 0;
            uVar4 = *(ulonglong *)(param_1 + 0x1e) + 1;
            if (uVar4 < *(ulonglong *)(param_1 + 0x1e)) {
              uVar4 = 0xffffffffffffffff;
            }
            *(ulonglong *)(param_1 + 0x1e) = uVar4;
            *(undefined1 *)(param_1 + 0xc) = 0x20;
            goto LAB_1400af764;
          }
          goto LAB_1400af74f;
        }
LAB_1400af759:
        iVar3 = iVar2;
      }
      if (iVar3 != 0) {
        iVar2 = iVar5;
      }
LAB_1400af764:
      param_1[0x3a] = iVar2;
      if ((pcVar1 == "$base: short read") && (*(char *)(param_3 + 0x28) != '\0')) {
        pcVar1 = "#gif: truncated input";
        goto LAB_1400af6a7;
      }
      if (pcVar1 == (char *)0x0) {
        param_1[0x39] = 0;
        return (char *)0x0;
      }
    }
    if (*pcVar1 == '$') {
      param_1[0x39] = 1;
      iVar5 = 4;
      if (*pcVar1 != '$') goto LAB_1400af697;
      goto LAB_1400af69a;
    }
  }
  else {
    param_1[0x39] = 0;
LAB_1400af697:
    iVar5 = 0;
LAB_1400af69a:
    param_1[1] = iVar5;
    if (pcVar1 == (char *)0x0) {
      return (char *)0x0;
    }
  }
  if (*pcVar1 != '#') {
    return pcVar1;
  }
LAB_1400af6a7:
  *param_1 = 0x75ae3d2;
  return pcVar1;
}

