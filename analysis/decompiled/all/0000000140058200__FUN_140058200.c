// Function: FUN_140058200
// Addr: 140058200
// Size: 15 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_140058200(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  code *pcVar3;
  code *pcVar4;
  code *pcVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint uStackX_8;
  uint uStackX_c;
  uint uStack_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  LOCK();
  *(undefined1 *)(param_1 + 0x3a) = 1;
  UNLOCK();
  if (*(char *)(param_1 + 0x39) == '\0') {
    iVar1 = func_0x000140290e50(param_1 + 0x50);
    if (iVar1 != 0) goto code_r0x0001400584e9;
    if (*(int *)(param_1 + 0x9c) == 0x7fffffff) {
      *(undefined4 *)(param_1 + 0x9c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(6);
    }
    *(undefined8 *)(param_1 + 0xb8) = 0;
    *(undefined1 *)(param_1 + 0x39) = 1;
    FUN_140290f70(param_1 + 0x50);
  }
  if (*(int *)(param_1 + 0x48) != 0) {
    iVar1 = func_0x000140291210();
    if (*(int *)(param_1 + 0x48) == iVar1) {
code_r0x0001400584e9:
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(5);
    }
    uStack_48 = *(uint *)(param_1 + 0x40);
    uStack_44 = *(uint *)(param_1 + 0x44);
    uStack_40 = *(undefined4 *)(param_1 + 0x48);
    uStack_3c = *(undefined4 *)(param_1 + 0x4c);
    iVar1 = func_0x000140291220(&uStack_48,0);
    if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_140290e00(2);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  if (*(char *)(param_1 + 0xe8) != '\0') {
    uVar6 = *(uint *)(param_1 + 0xe4);
    uVar7 = *(uint *)(param_1 + 0xdc);
    uVar8 = *(uint *)(param_1 + 0xe0);
    if (DAT_1404e5360 < 10) {
      lVar2 = (*DAT_140426738)(L"dwmapi.dll");
      if (lVar2 != 0) {
        pcVar3 = (code *)(*DAT_140426730)(lVar2,"DwmIsCompositionEnabled");
        pcVar4 = (code *)(*DAT_140426730)(lVar2,0x7f);
        pcVar5 = (code *)(*DAT_140426730)(lVar2,0x83);
        if ((((pcVar3 != (code *)0x0) && (pcVar4 != (code *)0x0)) && (pcVar5 != (code *)0x0)) &&
           ((*pcVar3)(&uStackX_8), uStackX_8 != 0)) {
          uVar6 = ((uVar7 | 0xffffff00) << 8 | uVar8) << 8 | uVar6;
          (*pcVar4)(&uStack_48);
          uStack_48 = uVar6;
          uStack_44 = uVar6;
          (*pcVar5)(&uStack_48,0);
        }
        (*DAT_140426728)(lVar2);
      }
    }
    else {
      lVar2 = (*DAT_140426738)(L"uxtheme.dll");
      if (lVar2 != 0) {
        pcVar3 = (code *)(*DAT_140426730)(lVar2,0x7a);
        if (pcVar3 != (code *)0x0) {
          fVar10 = (float)(int)uVar7;
          fVar11 = (float)(int)uVar8;
          fVar12 = (float)(int)uVar6;
          fVar9 = (fVar11 * _UNK_1404927a0 + fVar10 * _UNK_140492754 + fVar12 * _UNK_140492720) /
                  DAT_1404929dc - _UNK_140492794;
          if (0.0 < fVar9) {
            uVar7 = (uint)(fVar10 - fVar10 * fVar9);
            uVar6 = (uint)(fVar12 - fVar12 * fVar9);
            uVar8 = (uint)(fVar11 - fVar11 * fVar9);
          }
          uStackX_8 = ((uVar6 | 0xffffff00) << 8 | uVar8) << 8 | uVar7;
          uStackX_c = uStackX_8;
          (*pcVar3)(&uStackX_8,1);
        }
        (*DAT_140426728)(lVar2);
      }
    }
  }
  if (*(int *)(param_1 + 0x48) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_1400151e0();
  }
                    /* WARNING: Subroutine does not return */
  FUN_140017310(param_1 + 0x10);
}

