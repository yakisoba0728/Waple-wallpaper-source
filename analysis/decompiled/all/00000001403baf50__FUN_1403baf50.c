// Function: FUN_1403baf50
// Addr: 1403baf50
// Size: 1146 bytes


longlong FUN_1403baf50(void)

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
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x10), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*(longlong *)(lVar3 + 0x10) != 0) {
        uVar4 = *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x10);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0x30) = FUN_1403d6fe0;
    if (*(longlong *)(lVar3 + 0x10) != 0) {
      *(undefined8 *)(*(longlong *)(lVar3 + 0x10) + 0x10) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x10) = 0;
    }
  }
  plVar6 = (longlong *)(lVar3 + 0x10);
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x18), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 0x18);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0x38) = FUN_1403d7030;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x18) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x18) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x20), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 0x20);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0x40) = FUN_1403d7140;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x20) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x20) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if (((undefined8 *)*plVar1 != (undefined8 *)0x0) &&
       (pcVar2 = *(code **)*plVar1, pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if ((undefined8 *)*plVar6 != (undefined8 *)0x0) {
        uVar4 = *(undefined8 *)*plVar6;
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0x20) = FUN_1403d4eb0;
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
    *(code **)(lVar3 + 0x58) = FUN_1403d5610;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x38) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x38) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 8), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 8);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0x28) = FUN_1403d50e0;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 8) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 8) = 0;
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
    *(code **)(lVar3 + 0x60) = FUN_1403d5d30;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x40) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x40) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x60), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 0x60);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0x80) = FUN_1403d6350;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x60) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x60) = 0;
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
    *(code **)(lVar3 + 0xb8) = FUN_1403d4a40;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x98) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x98) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0xa0), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 0xa0);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0xc0) = FUN_1403d73c0;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0xa0) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0xa0) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x78), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 0x78);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0x98) = FUN_1403d5320;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x78) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x78) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x88), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 0x88);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0xa8) = FUN_1403d5c00;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x88) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x88) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x90), pcVar2 != (code *)0x0)) {
      if (*plVar6 != 0) {
        uVar5 = *(undefined8 *)(*plVar6 + 0x90);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(lVar3 + 0xb0) = FUN_1403d5580;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x90) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x90) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    *(undefined1 *)(lVar3 + 4) = 0;
  }
  FUN_14028b410(&LAB_1403c4ce0);
  return lVar3;
}

