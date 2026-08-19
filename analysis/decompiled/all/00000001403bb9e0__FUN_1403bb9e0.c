// Function: FUN_1403bb9e0
// Addr: 1403bb9e0
// Size: 809 bytes


longlong FUN_1403bb9e0(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar3 = FUN_140418960();
  uVar5 = 0;
  plVar1 = (longlong *)(lVar3 + 0xa0);
  if (*(char *)(lVar3 + 4) != '\0') {
    if (((undefined8 *)*plVar1 != (undefined8 *)0x0) &&
       (pcVar2 = *(code **)*plVar1, pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*(undefined8 **)(lVar3 + 0x98) != (undefined8 *)0x0) {
        uVar4 = **(undefined8 **)(lVar3 + 0x98);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0x10) = FUN_1403dd410;
    if (*(undefined8 **)(lVar3 + 0x98) != (undefined8 *)0x0) {
      **(undefined8 **)(lVar3 + 0x98) = 0;
    }
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      *(undefined8 *)*plVar1 = 0;
    }
  }
  plVar6 = (longlong *)(lVar3 + 0x98);
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 8), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 8);
      }
      (*pcVar2)(uVar4);
    }
    *(undefined1 **)(lVar3 + 0x18) = &LAB_1403dcfb0;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 8) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 8) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x18), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 0x18);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0x28) = FUN_1403dd330;
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
    *(undefined8 *)(lVar3 + 0x30) = 0x1403dd3a0;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x20) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x20) = 0;
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
    *(undefined1 **)(lVar3 + 0x48) = &LAB_1403dd1f0;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x38) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x38) = 0;
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
    *(code **)(lVar3 + 0x78) = FUN_1403dd3e0;
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
    *(code **)(lVar3 + 0x88) = FUN_1403dd200;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x78) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x78) = 0;
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
    *(undefined1 **)(lVar3 + 0x50) = &LAB_1403dd150;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x40) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x40) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x48), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 0x48);
      }
      (*pcVar2)(uVar4);
    }
    *(code **)(lVar3 + 0x58) = FUN_1403dd160;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x48) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x48) = 0;
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
    *(undefined1 **)(lVar3 + 0x60) = &LAB_1403dd150;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x50) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x50) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x58), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 0x58);
      }
      (*pcVar2)(uVar4);
    }
    *(undefined1 **)(lVar3 + 0x68) = &LAB_1403dd150;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x58) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x58) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x60), pcVar2 != (code *)0x0)) {
      if (*plVar6 != 0) {
        uVar5 = *(undefined8 *)(*plVar6 + 0x60);
      }
      (*pcVar2)(uVar5);
    }
    *(undefined1 **)(lVar3 + 0x70) = &LAB_1403dd150;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x60) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x60) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    *(undefined1 *)(lVar3 + 4) = 0;
  }
  FUN_14028b4e0(&UNK_1403c4e40);
  return lVar3;
}

