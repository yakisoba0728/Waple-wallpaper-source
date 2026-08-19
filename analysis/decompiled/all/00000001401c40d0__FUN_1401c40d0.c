// Function: FUN_1401c40d0
// Addr: 1401c40d0
// Size: 421 bytes


void FUN_1401c40d0(longlong param_1,longlong param_2,undefined8 param_3,int *param_4)

{
  char cVar1;
  undefined8 *puVar2;
  code *pcVar3;
  longlong lVar4;
  int *piVar5;
  ulonglong uVar6;
  char *pcVar7;
  undefined1 *puVar8;
  undefined1 *puVar9;
  longlong in_R10;
  longlong in_R11;
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [24];
  
  puVar9 = auStack_48;
  puVar8 = auStack_48;
  pcVar7 = *(char **)(param_2 + 0x58);
  if (pcVar7 != (char *)0x0) {
    cVar1 = *pcVar7;
    while (cVar1 != '\0') {
      if ((*pcVar7 == '\x03') && (lVar4 = *(longlong *)(pcVar7 + 0xa0), lVar4 != 0)) {
        uVar6 = (*(longlong *)(pcVar7 + 0xb0) - lVar4 >> 2) * 4;
        if (0xfff < uVar6) {
          if (0x1f < (lVar4 - *(longlong *)(lVar4 + -8)) - 8U) {
            piVar5 = (int *)&DAT_00000005;
            pcVar3 = (code *)swi(0x29);
            (*pcVar3)();
            puVar8 = auStack_40;
            goto code_r0x0001401c425a;
          }
          uVar6 = uVar6 + 0x27;
          lVar4 = *(longlong *)(lVar4 + -8);
        }
        func_0x00014028b040(lVar4,uVar6);
        return;
      }
      pcVar7 = pcVar7 + *(ushort *)(pcVar7 + 2);
      cVar1 = *pcVar7;
    }
    FUN_1402d3ea0(*(undefined8 *)(param_2 + 0x58));
  }
  pcVar7 = *(char **)(param_2 + 0x68);
  if (pcVar7 != (char *)0x0) {
    cVar1 = *pcVar7;
    while (cVar1 != '\0') {
      if (*pcVar7 == '\x05') {
        FUN_1401d94e0(pcVar7 + 4);
      }
      pcVar7 = pcVar7 + *(ushort *)(pcVar7 + 2);
      cVar1 = *pcVar7;
    }
    FUN_1402d3ea0(*(undefined8 *)(param_2 + 0x68));
  }
  if (*(longlong *)(param_2 + 0x78) != 0) {
    FUN_1402d3ea0();
  }
  if (*(longlong *)(param_2 + 0x88) != 0) {
    FUN_1402d3ea0();
  }
  if (*(longlong *)(param_2 + 0x98) != 0) {
    FUN_1402d3ea0();
  }
  *(undefined8 *)(param_2 + 0x58) = 0;
  *(undefined8 *)(param_2 + 0x68) = 0;
  *(undefined8 *)(param_2 + 0x78) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined8 *)(param_2 + 0x98) = 0;
  in_R11 = *(longlong *)(param_2 + 0x1b8);
  in_R10 = *(longlong *)(param_2 + 0x1b0);
  if (in_R10 == in_R11) {
code_r0x0001401c428e:
    if (*(longlong *)(param_2 + 0x1b0) != *(longlong *)(param_2 + 0x1b8)) {
      *(longlong *)(param_2 + 0x1b8) = *(longlong *)(param_2 + 0x1b0);
    }
    lVar4 = *(longlong *)(param_2 + 0x1c8);
    if (lVar4 == *(longlong *)(param_2 + 0x1d0)) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    *(undefined **)(puVar9 + -8) = &UNK_1401c42c0;
    FUN_140017310(lVar4);
  }
UNWIND_INFO_1401c4212_UnwindCodes_5__OffsetInProlog:
  param_4 = *(int **)(in_R10 + 0x10);
  puVar9 = puVar8;
  if (*(int **)(in_R10 + 8) != (int *)0x0) {
    for (puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 0xa0);
        puVar2 != *(undefined8 **)(param_1 + 0xa0); puVar2 = (undefined8 *)*puVar2) {
      piVar5 = (int *)puVar2[2];
      if (piVar5 == *(int **)(in_R10 + 8)) goto code_r0x0001401c425a;
    }
  }
  goto code_r0x0001401c425c;
code_r0x0001401c425a:
  *piVar5 = *piVar5 + -1;
  puVar9 = puVar8;
code_r0x0001401c425c:
  if (param_4 != (int *)0x0) {
    for (puVar2 = (undefined8 *)**(undefined8 **)(param_1 + 0xe0);
        puVar2 != *(undefined8 **)(param_1 + 0xe0); puVar2 = (undefined8 *)*puVar2) {
      piVar5 = (int *)puVar2[2];
      if (piVar5 == param_4) {
        *piVar5 = *piVar5 + -1;
        break;
      }
    }
  }
  in_R10 = in_R10 + 0x18;
  puVar8 = puVar9;
  if (in_R10 == in_R11) goto code_r0x0001401c428e;
  goto UNWIND_INFO_1401c4212_UnwindCodes_5__OffsetInProlog;
}

