// Function: FUN_14024ca10
// Addr: 14024ca10
// Size: 172 bytes


void FUN_14024ca10(longlong param_1)

{
  char cVar1;
  longlong lVar2;
  undefined8 *puVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined1 *in_stack_00000028;
  
  if ((*(byte *)(param_1 + 0x6b7) & 1) == 0) {
    lVar2 = *(longlong *)(param_1 + 0x740);
    lVar4 = *(longlong *)(param_1 + 0x748);
    if (lVar2 != lVar4) {
      do {
        cVar1 = FUN_14022c310(*(undefined8 *)(lVar2 + 8));
        if (cVar1 != '\0') goto LAB_14024caa2;
        lVar2 = lVar2 + 0x10;
      } while (lVar2 != lVar4);
    }
    lVar2 = *(longlong *)(param_1 + 0x758);
    lVar4 = *(longlong *)(param_1 + 0x760);
    if (lVar2 != lVar4) {
      do {
        puVar3 = *(undefined8 **)(lVar2 + 8);
        puVar5 = *(undefined8 **)(lVar2 + 0x10);
        if (puVar3 != puVar5) {
          do {
            cVar1 = FUN_14022c310(*puVar3);
            if (cVar1 != '\0') goto LAB_14024caa2;
            puVar3 = puVar3 + 1;
          } while (puVar3 != puVar5);
        }
        lVar2 = lVar2 + 0x38;
      } while (lVar2 != lVar4);
    }
    if ((*(char *)(param_1 + 0x6b4) != '\0') || (*(int *)(param_1 + 0x604) != 0)) {
LAB_14024caa2:
      *in_stack_00000028 = 1;
      return;
    }
  }
  *in_stack_00000028 = 0;
  return;
}

