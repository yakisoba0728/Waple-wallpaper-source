// Function: FUN_1403ba670
// Addr: 1403ba670
// Size: 630 bytes


longlong FUN_1403ba670(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar3 = FUN_140415fd0();
  uVar5 = 0;
  plVar1 = (longlong *)(lVar3 + 0x18);
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x18), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x18);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0x38) = FUN_1403d1e80;
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x18) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x18) = 0;
    }
  }
  plVar6 = (longlong *)(lVar3 + 0x10);
  if (*(char *)(lVar3 + 4) != '\0') {
    if (((undefined8 *)*plVar1 != (undefined8 *)0x0) &&
       (pcVar2 = *(code **)*plVar1, pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if ((undefined8 *)*plVar6 != (undefined8 *)0x0) {
        uVar4 = *(undefined8 *)*plVar6;
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0x20) = FUN_1403d17b0;
    if ((undefined8 *)*plVar6 != (undefined8 *)0x0) {
      *(undefined8 *)*plVar6 = 0;
    }
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      *(undefined8 *)*plVar1 = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x38), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 0x38);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0x58) = FUN_1403d19d0;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x38) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x38) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x40), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 0x40);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0x60) = FUN_1403d1bc0;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x40) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x40) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x50), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 0x50);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0x70) = FUN_1403d1d80;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x50) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x50) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x98), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 0x98);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0xb8) = FUN_1403d15a0;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x98) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x98) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x78), pcVar2 != (code *)0x0)) {
      if (*plVar6 != 0) {
        uVar5 = *(undefined8 *)(*plVar6 + 0x78);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(lVar3 + 0x98) = FUN_1403d1890;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x78) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x78) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    *(undefined1 *)(lVar3 + 4) = 0;
  }
  FUN_14028b410(&LAB_1403c4bb0);
  return lVar3;
}

