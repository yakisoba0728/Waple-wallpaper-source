// Function: FUN_14009a030
// Addr: 14009a030
// Size: 119 bytes


void FUN_14009a030(longlong param_1)

{
  ushort uVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  uint uVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  ulonglong uVar11;
  longlong lStackX_8;
  float afStack_138 [9];
  undefined1 uStack_114;
  
  uVar11 = 0;
  if ((*(char *)(param_1 + 0x26) == '\0') || (uVar8 = 1, *(char *)(param_1 + 0x26) == '\x03')) {
    uVar8 = uVar11;
  }
  lVar5 = *(longlong *)(param_1 + 0xc0 + (*(byte *)(param_1 + 0x24) | uVar8) * 8);
  if (*(longlong *)(param_1 + 0xb8) != lVar5) {
    *(longlong *)(param_1 + 0xb8) = lVar5;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 8);
    (**(code **)(*plVar2 + 0x120))(plVar2,lVar5,0);
  }
  lVar5 = *(longlong *)(param_1 + 0xe8 + (ulonglong)*(byte *)(param_1 + 0x25) * 8);
  if (*(longlong *)(param_1 + 0xe0) != lVar5) {
    *(longlong *)(param_1 + 0xe0) = lVar5;
    (**(code **)(**(longlong **)(*(longlong *)(param_1 + 0x70) + 8) + 0x158))();
  }
  uVar1 = *(ushort *)(param_1 + 0x28);
  if ((uVar1 >> 9 & 1) == 0) {
    uVar4 = 4;
  }
  else {
    uVar4 = (uint)*(byte *)(param_1 + 0x26);
  }
  lVar6 = *(longlong *)(param_1 + 0x148);
  uVar4 = uVar1 | uVar4;
  lVar5 = *(longlong *)(param_1 + 0x140);
  uVar10 = (ulonglong)uVar4;
  uVar8 = lVar6 - lVar5 >> 3;
  if (uVar8 <= uVar10) {
    uVar9 = (ulonglong)(uVar4 + 1);
    if (uVar9 < uVar8) {
      lVar5 = lVar5 + (ulonglong)(uVar4 + 1) * 8;
code_r0x00014009a158:
      *(longlong *)(param_1 + 0x148) = lVar5;
    }
    else if (uVar8 < uVar9) {
      if (uVar9 <= (ulonglong)(*(longlong *)(param_1 + 0x150) - lVar5 >> 3)) {
        lVar5 = (uVar9 - uVar8) * 8;
        func_0x000140421870(lVar6,0,lVar5);
        lVar5 = lVar6 + lVar5;
        goto code_r0x00014009a158;
      }
      FUN_14009beb0(param_1 + 0x140,uVar9);
    }
  }
  lVar5 = *(longlong *)(*(longlong *)(param_1 + 0x140) + uVar10 * 8);
  if (lVar5 != 0) goto code_r0x00014009a2c6;
  puVar3 = *(undefined8 **)(param_1 + 0x70);
  lStackX_8 = 0;
  func_0x000140421870(afStack_138,0,0x108);
  uStack_114 = 7;
  uVar7 = uVar4 & 7;
  if (uVar7 == 0) {
code_r0x00014009a1ca:
    afStack_138[7] = 1.4013e-45;
    afStack_138[6] = 2.8026e-45;
    afStack_138[4] = 1.4013e-45;
    afStack_138[3] = 2.8026e-45;
code_r0x00014009a1ea:
    afStack_138[8] = 1.4013e-45;
    afStack_138[5] = 1.4013e-45;
  }
  else {
    if (uVar7 == 1) {
      afStack_138[2] = 1.4013e-45;
      afStack_138[3] = 7.00649e-45;
      afStack_138[4] = 8.40779e-45;
      afStack_138[6] = 7.00649e-45;
      afStack_138[7] = 8.40779e-45;
      goto code_r0x00014009a1ea;
    }
    if (uVar7 == 2) {
      afStack_138[2] = 1.4013e-45;
      afStack_138[3] = 7.00649e-45;
      afStack_138[4] = 2.8026e-45;
      afStack_138[6] = 7.00649e-45;
      afStack_138[7] = 2.8026e-45;
      goto code_r0x00014009a1ea;
    }
    if (uVar7 == 3) {
      afStack_138[0] = 1.4013e-45;
      goto code_r0x00014009a1ca;
    }
    if (uVar7 == 4) {
      uStack_114 = 8;
    }
  }
  if ((char)uVar4 < '\0') {
    afStack_138[3] = 2.8026e-45;
    afStack_138[4] = 8.40779e-45;
    afStack_138[6] = 2.8026e-45;
    afStack_138[7] = 2.8026e-45;
  }
  if (((uVar4 & 0x18) != 0) && (uStack_114 = 0xf, (uVar4 & 0x10) != 0)) {
    afStack_138[8] = 7.00649e-45;
    afStack_138[6] = 2.8026e-45;
    afStack_138[7] = 2.8026e-45;
  }
  if ((uVar4 & 0x20) != 0) {
    afStack_138[5] = 7.00649e-45;
    afStack_138[6] = 2.8026e-45;
    afStack_138[7] = 2.8026e-45;
  }
  if ((uVar4 & 0x40) != 0) {
    afStack_138[5] = 5.60519e-45;
    afStack_138[6] = 2.8026e-45;
    afStack_138[7] = 2.8026e-45;
  }
  if ((uVar1 >> 8 & 1) != 0) {
    afStack_138[3] = 1.26117e-44;
    afStack_138[6] = 2.8026e-45;
    afStack_138[7] = 2.8026e-45;
  }
  (**(code **)(*(longlong *)*puVar3 + 0xa0))((longlong *)*puVar3,afStack_138,&lStackX_8);
  *(longlong *)(*(longlong *)(param_1 + 0x140) + uVar10 * 8) = lStackX_8;
  lVar5 = lStackX_8;
code_r0x00014009a2c6:
  if (*(longlong *)(param_1 + 0x128) != lVar5) {
    *(longlong *)(param_1 + 0x128) = lVar5;
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 8);
    (**(code **)(*plVar2 + 0x118))(plVar2,lVar5,0,0xffffffff);
  }
  if (*(char *)(param_1 + 0x68) != '\0') {
    uVar4 = *(uint *)(param_1 + 0x34);
    *(undefined1 *)(param_1 + 0x68) = 0;
    if (uVar4 != 0) {
      lVar5 = *(longlong *)(param_1 + 0x70);
      do {
        uVar8 = (ulonglong)(*(uint *)(lVar5 + 0x4c) >> ((char)uVar11 * '\x03' & 0x3fU) & 7);
        lVar6 = (longlong)(int)uVar11;
        uVar7 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar7;
        afStack_138[lVar6 * 6 + 4] = 0.0;
        afStack_138[lVar6 * 6 + 5] = 1.0;
        afStack_138[lVar6 * 6] = (float)*(ushort *)(param_1 + 0x38 + uVar8 * 8);
        afStack_138[lVar6 * 6 + 1] = (float)*(ushort *)(param_1 + 0x3a + uVar8 * 8);
        afStack_138[lVar6 * 6 + 2] = (float)*(ushort *)(param_1 + 0x3c + uVar8 * 8);
        afStack_138[lVar6 * 6 + 3] = (float)*(ushort *)(param_1 + 0x3e + uVar8 * 8);
      } while (uVar7 < uVar4);
    }
    plVar2 = *(longlong **)(*(longlong *)(param_1 + 0x70) + 8);
    (**(code **)(*plVar2 + 0x160))(plVar2,uVar4,afStack_138);
  }
  return;
}

