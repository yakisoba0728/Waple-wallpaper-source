// Function: FUN_14025f8a0
// Addr: 14025f8a0
// Size: 397 bytes


ulonglong FUN_14025f8a0(longlong param_1,char *param_2,undefined8 *param_3)

{
  char cVar1;
  longlong lVar2;
  ulonglong uVar3;
  code *pcVar4;
  undefined8 ******ppppppuVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  int iVar8;
  size_t sVar9;
  ulonglong uVar10;
  undefined4 extraout_var;
  undefined7 uVar11;
  undefined4 extraout_var_00;
  undefined8 *puVar12;
  undefined8 *******pppppppuVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 ******local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  ulonglong local_50;
  
  lVar2 = *(longlong *)(param_1 + 0x1e0);
  local_58 = 0;
  local_50 = 0;
  local_68 = (undefined8 *******)0x0;
  uStack_60 = 0;
  sVar9 = strlen(param_2);
  uVar10 = FUN_140017480(&local_68,param_2,sVar9);
  uVar7 = local_50;
  uVar6 = local_58;
  ppppppuVar5 = local_68;
  puVar14 = (undefined8 *)(*(undefined8 **)(lVar2 + 0x20))[1];
  cVar1 = *(char *)((longlong)puVar14 + 0x19);
  puVar15 = *(undefined8 **)(lVar2 + 0x20);
  while (cVar1 == '\0') {
    uVar3 = puVar14[6];
    puVar12 = puVar14 + 4;
    pppppppuVar13 = &local_68;
    if (0xf < uVar7) {
      pppppppuVar13 = (undefined8 *******)ppppppuVar5;
    }
    if (0xf < (ulonglong)puVar14[7]) {
      puVar12 = (undefined8 *)*puVar12;
    }
    uVar10 = uVar3;
    if (uVar6 < uVar3) {
      uVar10 = uVar6;
    }
    iVar8 = memcmp(puVar12,pppppppuVar13,uVar10);
    uVar10 = CONCAT44(extraout_var,iVar8);
    uVar11 = (undefined7)(uVar10 >> 8);
    if (iVar8 == 0) {
      if (uVar3 < uVar6) {
        uVar10 = CONCAT71(uVar11,0xff);
        goto LAB_14025f955;
      }
      if (uVar6 < uVar3) goto LAB_14025f953;
LAB_14025f95f:
      puVar12 = (undefined8 *)*puVar14;
    }
    else {
      if (iVar8 < 0) {
        uVar10 = CONCAT71(uVar11,0xff);
      }
      else {
LAB_14025f953:
        uVar10 = CONCAT71(uVar11,1);
      }
LAB_14025f955:
      if (-1 < (char)uVar10) goto LAB_14025f95f;
      puVar12 = (undefined8 *)puVar14[2];
      puVar14 = puVar15;
    }
    puVar15 = puVar14;
    puVar14 = puVar12;
    cVar1 = *(char *)((longlong)puVar12 + 0x19);
  }
  if (*(char *)((longlong)puVar15 + 0x19) == '\0') {
    puVar14 = puVar15 + 4;
    uVar3 = puVar15[6];
    if (0xf < (ulonglong)puVar15[7]) {
      puVar14 = (undefined8 *)*puVar14;
    }
    pppppppuVar13 = &local_68;
    if (0xf < uVar7) {
      pppppppuVar13 = (undefined8 *******)ppppppuVar5;
    }
    uVar10 = uVar6;
    if (uVar3 < uVar6) {
      uVar10 = uVar3;
    }
    iVar8 = memcmp(pppppppuVar13,puVar14,uVar10);
    uVar10 = CONCAT44(extraout_var_00,iVar8);
    uVar11 = (undefined7)(uVar10 >> 8);
    if (iVar8 == 0) {
      if (uVar6 < uVar3) {
        uVar10 = CONCAT71(uVar11,0xff);
        goto LAB_14025f9be;
      }
      if (uVar3 < uVar6) goto LAB_14025f9bc;
    }
    else {
      if (iVar8 < 0) {
        uVar10 = CONCAT71(uVar11,0xff);
      }
      else {
LAB_14025f9bc:
        uVar10 = CONCAT71(uVar11,1);
      }
LAB_14025f9be:
      if ((char)uVar10 < '\0') goto LAB_14025f9c2;
    }
  }
  else {
LAB_14025f9c2:
    puVar15 = *(undefined8 **)(lVar2 + 0x20);
  }
  if (0xf < uVar7) {
    uVar10 = uVar7 + 1;
    pppppppuVar13 = (undefined8 *******)ppppppuVar5;
    if (0xfff < uVar10) {
      pppppppuVar13 = (undefined8 *******)ppppppuVar5[-1];
      if (0x1f < (ulonglong)((longlong)ppppppuVar5 + (-8 - (longlong)pppppppuVar13))) {
        pcVar4 = (code *)swi(0x29);
        (*pcVar4)(5);
        goto LAB_14025fa0a;
      }
      uVar10 = uVar7 + 0x28;
    }
    uVar10 = thunk_FUN_14028af80(pppppppuVar13,uVar10);
  }
  if (puVar15 == *(undefined8 **)(lVar2 + 0x20)) {
    return uVar10 & 0xffffffffffffff00;
  }
LAB_14025fa0a:
  cVar1 = *(char *)((longlong)puVar15 + 0x45);
  *param_3 = *(undefined8 *)(param_1 + 0x120 + (longlong)cVar1 * 4);
  return CONCAT71(cVar1 >> 7,1);
}

