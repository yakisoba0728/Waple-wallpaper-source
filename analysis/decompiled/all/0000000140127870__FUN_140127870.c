// Function: FUN_140127870
// Addr: 140127870
// Size: 89 bytes


/* WARNING: Removing unreachable block (ram,0x000140128522) */

void FUN_140127870(longlong param_1)

{
  undefined8 *puVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  longlong lVar11;
  undefined8 uVar12;
  int iVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 in_stack_ffffffffffffffc0;
  
  iVar13 = 1;
  LOCK();
  iVar5 = *(int *)(param_1 + 0x140);
  *(int *)(param_1 + 0x140) = 1;
  UNLOCK();
  while (iVar5 != 0) {
    iVar5 = *(int *)(param_1 + 0x140);
    while (iVar5 != 0) {
      iVar5 = iVar13;
      if (iVar13 == 0) {
LAB_1401278c9:
        iVar13 = iVar13 * 2;
      }
      else {
        do {
          iVar5 = iVar5 + -1;
        } while (iVar5 != 0);
        if (iVar13 < 0x40) goto LAB_1401278c9;
        iVar13 = 0x40;
      }
      iVar5 = *(int *)(param_1 + 0x140);
    }
    LOCK();
    iVar5 = *(int *)(param_1 + 0x140);
    *(int *)(param_1 + 0x140) = 1;
    UNLOCK();
  }
  iVar5 = *(int *)(param_1 + 0x144);
  iVar13 = *(int *)(param_1 + 0x148);
  iVar3 = *(int *)(param_1 + 0x14c);
  iVar4 = *(int *)(param_1 + 0x150);
  *(undefined4 *)(param_1 + 0x140) = 0;
  cVar2 = *(char *)(param_1 + 8);
  if ((cVar2 != '\0') && (*(longlong *)(param_1 + 0x158) != -1)) {
    uVar9 = (*DAT_140426438)(L"ntdll");
    pcVar10 = (code *)(*DAT_140426730)(uVar9,"NtResumeProcess");
    (*pcVar10)(*(undefined8 *)(param_1 + 0x158));
    *(undefined1 *)(param_1 + 8) = 0;
  }
  iVar6 = (*DAT_140426af0)(*(undefined8 *)(param_1 + 0x188));
  if (iVar6 != 0) {
    in_stack_ffffffffffffffc0 =
         CONCAT44((int)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20),iVar4 - iVar13);
    (*DAT_140426950)(*(undefined8 *)(param_1 + 0x188),0,iVar5,iVar13,iVar3 - iVar5,
                     in_stack_ffffffffffffffc0,0x4110);
  }
  puVar14 = *(undefined8 **)(param_1 + 0x170);
  puVar15 = *(undefined8 **)(param_1 + 0x178);
  if (puVar14 != puVar15) {
    do {
      puVar1 = puVar14 + 1;
      iVar6 = (*DAT_140426af0)(*puVar14);
      if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_1404211c0(puVar14,puVar1,*(longlong *)(param_1 + 0x178) - (longlong)puVar1);
      }
      puVar15 = *(undefined8 **)(param_1 + 0x178);
      puVar14 = puVar1;
    } while (puVar1 != puVar15);
  }
  puVar14 = *(undefined8 **)(param_1 + 0x170);
  if (puVar14 != puVar15) {
    do {
      uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
      uVar9 = *puVar14;
      if (*(char *)(param_1 + 0x192) == '\0') {
code_r0x000140127a1f:
        in_stack_ffffffffffffffc0 = CONCAT44(uVar7,iVar4 - iVar13);
        (*DAT_140426950)(uVar9,0,0,0,iVar3 - iVar5,in_stack_ffffffffffffffc0,0x4010);
      }
      else {
        lVar11 = (*DAT_1404268d0)(uVar9);
        uVar7 = (undefined4)((ulonglong)in_stack_ffffffffffffffc0 >> 0x20);
        if (lVar11 == *(longlong *)(param_1 + 0x188)) goto code_r0x000140127a1f;
      }
      puVar14 = puVar14 + 1;
    } while (puVar14 != puVar15);
  }
  (*DAT_140426240)(0x32);
  if (cVar2 == '\0') {
    return;
  }
  if ((*(longlong *)(param_1 + 0x158) != -1) && (*(char *)(param_1 + 8) != '\x01')) {
    puVar14 = *(undefined8 **)(param_1 + 0x170);
    puVar15 = *(undefined8 **)(param_1 + 0x178);
    if (puVar14 != puVar15) {
      do {
        puVar1 = puVar14 + 1;
        iVar5 = (*DAT_140426af0)(*puVar14);
        if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(puVar14,puVar1,*(longlong *)(param_1 + 0x178) - (longlong)puVar1);
        }
        puVar15 = *(undefined8 **)(param_1 + 0x178);
        puVar14 = puVar1;
      } while (puVar1 != puVar15);
    }
    for (puVar14 = *(undefined8 **)(param_1 + 0x170); puVar14 != puVar15; puVar14 = puVar14 + 1) {
      uVar9 = *puVar14;
      uVar12 = (*DAT_1404268d0)(uVar9);
      iVar5 = (*DAT_140426af0)(uVar12);
      while (iVar5 != 0) {
        uVar7 = (*DAT_140426848)(uVar12,0);
        uVar8 = (*DAT_140426848)(uVar9,0);
        (*DAT_140426938)(uVar8,uVar7,0);
        uVar12 = (*DAT_1404268d0)(uVar12);
        iVar5 = (*DAT_140426af0)(uVar12);
      }
    }
    uVar9 = (*DAT_140426438)(L"ntdll");
    pcVar10 = (code *)(*DAT_140426730)(uVar9,"NtSuspendProcess");
    (*pcVar10)(*(undefined8 *)(param_1 + 0x158));
    *(undefined1 *)(param_1 + 8) = 1;
    return;
  }
  return;
}

