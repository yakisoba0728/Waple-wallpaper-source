// Function: FUN_1403ba9c0
// Addr: 1403ba9c0
// Size: 170 bytes


longlong FUN_1403ba9c0(void)

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
    *(undefined1 **)(lVar3 + 0x10) = &LAB_1403d21e0;
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
    *(undefined1 **)(lVar3 + 0x18) = &LAB_1403d21e0;
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
    *(undefined **)(lVar3 + 0x20) = &UNK_1403d2240;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x10) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x10) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    if ((*plVar1 != 0) && (pcVar2 = *(code **)(*plVar1 + 0x18), pcVar2 != (code *)0x0)) {
      if (*plVar6 != 0) {
        uVar5 = *(undefined8 *)(*plVar6 + 0x18);
      }
      (*pcVar2)(uVar5);
    }
    *(undefined **)(lVar3 + 0x28) = &UNK_1403d20a0;
    if (*plVar6 != 0) {
      *(undefined8 *)(*plVar6 + 0x18) = 0;
    }
    if (*plVar1 != 0) {
      *(undefined8 *)(*plVar1 + 0x18) = 0;
    }
  }
  if (*(char *)(lVar3 + 4) != '\0') {
    *(undefined1 *)(lVar3 + 4) = 0;
  }
  FUN_14028b4e0(0x1403c4d20);
  return lVar3;
}

