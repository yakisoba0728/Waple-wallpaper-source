// Function: FUN_1403bb4a0
// Addr: 1403bb4a0
// Size: 248 bytes


longlong FUN_1403bb4a0(void)

{
  longlong *plVar1;
  code *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  longlong *plVar6;
  
  lVar3 = func_0x000140414ec0();
  uVar5 = 0;
  plVar1 = (longlong *)(lVar3 + 0x40);
  if (*(char *)(lVar3 + 4) != '\0') {
    if (((undefined8 *)*plVar1 != (undefined8 *)0x0) &&
       (pcVar2 = *(code **)*plVar1, pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*(undefined8 **)(lVar3 + 0x38) != (undefined8 *)0x0) {
        uVar4 = **(undefined8 **)(lVar3 + 0x38);
      }
      (*pcVar2)(uVar4);
    }
    *(undefined8 *)(lVar3 + 0x10) = 0x1403dce70;
    if (*(undefined8 **)(lVar3 + 0x38) != (undefined8 *)0x0) {
      **(undefined8 **)(lVar3 + 0x38) = 0;
    }
    if ((undefined8 *)*plVar1 != (undefined8 *)0x0) {
      *(undefined8 *)*plVar1 = 0;
    }
  }
  plVar6 = (longlong *)(lVar3 + 0x38);
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 8), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 8);
      }
      (*pcVar2)(uVar4);
    }
    *(undefined8 *)(lVar3 + 0x18) = 0x1403dce40;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 8) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 8) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x10), pcVar2 != (code *)0x0)) {
      uVar4 = uVar5;
      if (*plVar6 != 0) {
        uVar4 = *(undefined8 *)(*plVar6 + 0x10);
      }
      (*pcVar2)(uVar4);
    }
    *(undefined **)(lVar3 + 0x20) = &DAT_1403dcea0;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x10) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x10) = 0;
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
    *(undefined8 *)(lVar3 + 0x28) = 0x1403dcda0;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x18) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x18) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x20), pcVar2 != (code *)0x0)) {
      if (*plVar6 != 0) {
        uVar5 = *(undefined8 *)(*plVar6 + 0x20);
      }
      (*pcVar2)(uVar5);
    }
    *(code **)(lVar3 + 0x30) = FUN_1403dcd40;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x20) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x20) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    *(undefined1 *)(lVar3 + 4) = 0;
  }
  FUN_14028b4e0(&UNK_1403c4de0);
  return lVar3;
}

