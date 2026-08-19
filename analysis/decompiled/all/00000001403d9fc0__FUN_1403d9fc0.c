// Function: FUN_1403d9fc0
// Addr: 1403d9fc0
// Size: 17 bytes


longlong FUN_1403d9fc0(longlong *param_1)

{
  longlong lVar1;
  ushort *puVar2;
  ushort uVar3;
  uint uVar4;
  longlong lVar5;
  longlong lVar6;
  int iVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint uVar10;
  ulonglong uVar11;
  ulonglong uVar12;
  int aiStackX_8 [2];
  
  if (((*(byte *)(*param_1 + 0xb5) & 0x11) == 0x10) &&
     ((*(uint *)(param_1[3] + 0xd8) & 0x1000000) != 0)) {
    FUN_1403bdde0(param_1[3],&UNK_1403e6af0);
  }
  lVar9 = param_1[3];
  uVar12 = 0;
  if (((*(byte *)(lVar9 + 0xd8) & 0x40) != 0) && (*(int *)(lVar9 + 0x2c) != -1)) {
    uVar4 = *(uint *)(lVar9 + 0x60);
    lVar5 = *(longlong *)(lVar9 + 0x70);
    lVar6 = *(longlong *)(lVar9 + 0x80);
    uVar8 = uVar12;
    uVar11 = uVar12;
    if (uVar4 != 0) {
      do {
        lVar1 = uVar11 * 0x14;
        uVar3 = *(ushort *)(lVar1 + 0x10 + lVar5);
        if ((((byte)uVar3 & 0x1f) == 1) && ((uVar3 >> 10 & 1) != 0)) {
          *(undefined4 *)(lVar1 + lVar5) = *(undefined4 *)(lVar9 + 0x2c);
          *(undefined8 *)(lVar1 + 8 + lVar6) = 0;
          *(undefined8 *)(lVar1 + lVar6) = 0;
          puVar2 = (ushort *)(lVar1 + 0x10 + lVar5);
          *puVar2 = *puVar2 & 0xe0;
          puVar2 = (ushort *)(lVar1 + 0x10 + lVar5);
          *puVar2 = *puVar2 | 0xc;
        }
        uVar10 = (int)uVar8 + 1;
        uVar8 = (ulonglong)uVar10;
        uVar11 = uVar11 + 1;
      } while (uVar10 < uVar4);
    }
  }
  lVar9 = param_1[3];
  if (((*(byte *)(lVar9 + 0xd8) & 2) == 0) || ((*(uint *)(lVar9 + 0x18) & 4) != 0))
  goto code_r0x0001403da155;
  aiStackX_8[0] = *(int *)(lVar9 + 0x24);
  if ((*(uint *)(lVar9 + 0x18) & 8) == 0) {
    uVar4 = *(uint *)(lVar9 + 0x60);
    lVar5 = *(longlong *)(lVar9 + 0x70);
    if (aiStackX_8[0] == 0) {
      lVar6 = param_1[1];
      aiStackX_8[0] = 0;
      lVar1 = *(longlong *)(*(longlong *)(lVar6 + 0x90) + 0x10);
      uVar8 = uVar12;
      if (lVar1 != 0) {
        uVar8 = *(ulonglong *)(lVar1 + 0x10);
      }
      iVar7 = (**(code **)(*(longlong *)(lVar6 + 0x90) + 0x30))
                        (lVar6,*(undefined8 *)(lVar6 + 0x98),0x20,aiStackX_8,uVar8);
      if (iVar7 == 0) goto code_r0x0001403da146;
    }
    if (uVar4 != 0) {
      do {
        if (((*(byte *)(lVar5 + 0x10 + uVar12 * 0x14) & 0x20) != 0) &&
           ((*(byte *)(lVar5 + 0xc + uVar12 * 0x14) & 0x10) == 0)) {
          *(int *)(lVar5 + uVar12 * 0x14) = aiStackX_8[0];
        }
        uVar10 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar10;
      } while (uVar10 < uVar4);
    }
  }
  else {
code_r0x0001403da146:
    FUN_1403bdde0(lVar9,&UNK_14039eef0);
  }
code_r0x0001403da155:
  lVar9 = *param_1;
  if ((*(longlong *)(*(longlong *)(lVar9 + 0x20) + 0x28) != 0) &&
     (lVar9 = FUN_1403ec600(param_1[3],param_1[1],"start postprocess-glyphs"), (char)lVar9 != '\0'))
  {
    (**(code **)(*(longlong *)(*param_1 + 0x20) + 0x28))(*param_1,param_1[3],param_1[1]);
    if (*(longlong *)(param_1[3] + 0xe8) != 0) {
      lVar9 = func_0x0001403ec630(param_1[3],param_1[1],"end postprocess-glyphs",&stack0x00000020);
      return lVar9;
    }
    return 1;
  }
  return lVar9;
}

