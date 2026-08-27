// Function: FUN_1403baa70
// Addr: 1403baa70
// Size: 1239 bytes


longlong FUN_1403baa70(void)

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
    *(code **)(lVar3 + 0x30) = FUN_1403d30e0;
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
    *(code **)(lVar3 + 0x38) = FUN_1403d31c0;
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
    *(code **)(lVar3 + 0x40) = FUN_1403d3270;
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
    *(code **)(lVar3 + 0x20) = FUN_1403d23b0;
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
    *(code **)(lVar3 + 0x58) = FUN_1403d2a10;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x38) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x38) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x30), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 0x30);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0x50) = FUN_1403d2da0;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x30) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x30) = 0;
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
    *(code **)(lVar3 + 0x70) = FUN_1403d2ee0;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x50) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x50) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x68), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 0x68);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0x88) = FUN_1403d2c50;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x68) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x68) = 0;
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
    *(code **)(lVar3 + 0x98) = FUN_1403d2600;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x78) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x78) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x80), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 0x80);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0xa0) = FUN_1403d2550;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x80) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x80) = 0;
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
    *(code **)(lVar3 + 0xa8) = FUN_1403d2ce0;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x88) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x88) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x90), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 0x90);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0xb0) = FUN_1403d28f0;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x90) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x90) = 0;
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
    *(code **)(lVar3 + 0xb8) = FUN_1403d2210;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x98) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x98) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0xa0), pcVar2 != (code *)0x0)) {
      if (*plVar6 != 0) {
        uVar5 = *(undefined8 *)(*plVar6 + 0xa0);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(lVar3 + 0xc0) = FUN_1403d3950;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0xa0) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0xa0) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    *(undefined1 *)(lVar3 + 4) = 0;
  }
  FUN_14028b410(&LAB_1403c4c80);
  return lVar3;
}

