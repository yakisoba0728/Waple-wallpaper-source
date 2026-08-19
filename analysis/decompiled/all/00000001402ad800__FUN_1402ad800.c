// Function: FUN_1402ad800
// Addr: 1402ad800
// Size: 3507 bytes


void FUN_1402ad800(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
                  longlong param_5,uint *param_6,longlong param_7)

{
  int iVar1;
  short *psVar2;
  longlong lVar3;
  uint *puVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  uint uVar8;
  undefined8 uVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  int *piVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined1 local_res18 [8];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined8 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  lVar10 = *(longlong *)(*(longlong *)(param_5 + 0x40) + 8);
  uStack_60 = lVar10;
  (*(code *)PTR_FUN_140426bb8)(lVar10);
  uVar9 = FUN_14029d260(&local_68);
  if ((lVar10 != 0) && (lVar10 = (*(code *)PTR_FUN_140426bb8)(lVar10), lVar10 != 0)) {
    (*(code *)PTR_FUN_140426bb8)(lVar10,1);
  }
  iVar7 = (*(code *)PTR_FUN_140426bb8)(param_1);
  if (iVar7 == 0) {
    iVar7 = 2;
  }
  if ((char)param_3[1] == '\0') {
    lVar10 = *param_3;
    if (lVar10 == 0) {
LAB_1402ad8ee:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402ad8ee;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar10 = *param_4;
    if (lVar10 == 0) {
LAB_1402ad93b:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402ad93b;
      *(short *)((longlong)param_4 + 10) = sVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  puVar4 = param_6;
  lVar10 = *param_3;
  if (lVar10 == 0) {
    if (*param_4 == 0) goto LAB_1402adaf0;
  }
  else if (*param_4 != 0) goto LAB_1402adaf0;
  if ((char)param_3[1] == '\0') {
    if (lVar10 == 0) {
LAB_1402ad9a8:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402ad9a8;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  cVar5 = (*(code *)PTR_FUN_140426bb8)(uVar9,4,*(undefined2 *)((longlong)param_3 + 10));
  if (cVar5 == '\0') {
    local_68 = (undefined4)*param_4;
    uStack_64 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_60 = param_4[1];
    local_58 = (undefined4)*param_3;
    uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_50 = (undefined4)param_3[1];
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
    (*(code *)PTR_FUN_140426bb8)(param_1,&local_48,&local_58,&local_68,param_5,puVar4,param_7);
    iVar7 = 2;
    uVar14 = local_48;
    uVar15 = uStack_44;
    uVar16 = uStack_40;
    uVar17 = uStack_3c;
  }
  else {
    if (iVar7 == 2) {
      piVar13 = (int *)(param_7 + 0x10);
      uVar8 = FUN_1402958f0(param_3,param_4,1,0xc,piVar13,local_res18,uVar9);
      *puVar4 = *puVar4 | uVar8;
      *piVar13 = *piVar13 + -1;
      goto LAB_1402adaf0;
    }
    if (iVar7 == 1) {
      uVar8 = FUN_1402958f0(param_3,param_4,1,0x1f,param_7 + 0xc,local_res18,uVar9);
      *puVar4 = *puVar4 | uVar8;
      goto LAB_1402adaf0;
    }
    local_48 = (undefined4)*param_4;
    uStack_44 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_40 = (undefined4)param_4[1];
    uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
    local_58 = (undefined4)*param_3;
    uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_50 = (undefined4)param_3[1];
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
    (*(code *)PTR_FUN_140426bb8)(param_1,&local_68,&local_58,&local_48,param_5,puVar4,param_7);
    uVar14 = local_68;
    uVar15 = uStack_64;
    uVar16 = (undefined4)uStack_60;
    uVar17 = uStack_60._4_4_;
  }
  *(undefined4 *)param_3 = uVar14;
  *(undefined4 *)((longlong)param_3 + 4) = uVar15;
  *(undefined4 *)(param_3 + 1) = uVar16;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar17;
LAB_1402adaf0:
  if ((char)param_3[1] == '\0') {
    func_0x0001402a7f30(param_3);
  }
  if ((char)param_4[1] == '\0') {
    func_0x0001402a7f30(param_4);
  }
  lVar12 = *param_3;
  lVar10 = *param_4;
  if (lVar12 == 0) {
    if (lVar10 == 0) goto LAB_1402adb20;
  }
  else if (lVar10 != 0) goto LAB_1402adb20;
  if ((char)param_3[1] == '\0') {
    func_0x0001402a7f30(param_3);
    lVar12 = *param_3;
  }
  cVar5 = (*(code *)PTR_FUN_140426bb8)(uVar9,0x48,*(undefined2 *)((longlong)param_3 + 10));
  if (cVar5 == '\0') goto LAB_1402adb20;
  lVar10 = *param_3;
  if (lVar10 == 0) {
LAB_1402adbe2:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1402adbc5:
      sVar6 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar1 = **(int **)(lVar10 + 0x50);
      if (iVar1 < 1) goto LAB_1402adbc5;
      **(int **)(lVar10 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar10 + 0x38);
      **(longlong **)(lVar10 + 0x38) = (longlong)(psVar2 + 1);
      sVar6 = *psVar2;
    }
    if (sVar6 == -1) goto LAB_1402adbe2;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1402adaf0;
LAB_1402adb20:
  if ((char)param_3[1] == '\0') {
    if (lVar12 == 0) {
LAB_1402adc11:
      *param_3 = 0;
      lVar12 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar12 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar12 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)(lVar12);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar12 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402adc11;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar10 = *param_4;
    if (lVar10 == 0) {
LAB_1402adc66:
      *param_4 = 0;
      lVar10 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)(lVar10);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402adc66;
      *(short *)((longlong)param_4 + 10) = sVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (lVar12 == 0) {
    if (lVar10 == 0) goto LAB_1402adc80;
  }
  else if (lVar10 != 0) goto LAB_1402adc80;
  if ((char)param_3[1] == '\0') {
    if (lVar12 == 0) {
LAB_1402add38:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar12 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar12 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)(lVar12);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar12 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402add38;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  uVar11 = (*(code *)PTR_FUN_140426bb8)(uVar9,*(undefined2 *)((longlong)param_3 + 10),0);
  if ((0x3a < (byte)uVar11) || ((0x400900000000000U >> (uVar11 & 0x3f) & 1) == 0))
  goto LAB_1402adc80;
  lVar10 = *param_3;
  if (lVar10 != 0) {
    if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1402addaa:
      sVar6 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar1 = **(int **)(lVar10 + 0x50);
      if (iVar1 < 1) goto LAB_1402addaa;
      **(int **)(lVar10 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar10 + 0x38);
      **(longlong **)(lVar10 + 0x38) = (longlong)(psVar2 + 1);
      sVar6 = *psVar2;
    }
    if (sVar6 != -1) {
      *(undefined1 *)(param_3 + 1) = 0;
      goto LAB_1402adc80;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
LAB_1402adc80:
  lVar10 = 0;
  if ((char)param_3[1] == '\0') {
    func_0x0001402a7f30(param_3);
  }
  if ((char)param_4[1] == '\0') {
    func_0x0001402a7f30(param_4);
  }
  lVar12 = *param_3;
  if (lVar12 == 0) {
    if (*param_4 == 0) goto LAB_1402adcb8;
  }
  else if (*param_4 != 0) goto LAB_1402adcb8;
  if ((char)param_3[1] == '\0') {
    func_0x0001402a7f30(param_3);
    lVar12 = *param_3;
  }
  cVar5 = (*(code *)PTR_FUN_140426bb8)(uVar9,0x48,*(undefined2 *)((longlong)param_3 + 10));
  if (cVar5 == '\0') goto LAB_1402adcb8;
  lVar10 = *param_3;
  if (lVar10 == 0) {
LAB_1402ade68:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1402ade4b:
      sVar6 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar1 = **(int **)(lVar10 + 0x50);
      if (iVar1 < 1) goto LAB_1402ade4b;
      **(int **)(lVar10 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar10 + 0x38);
      **(longlong **)(lVar10 + 0x38) = (longlong)(psVar2 + 1);
      sVar6 = *psVar2;
    }
    if (sVar6 == -1) goto LAB_1402ade68;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1402adc80;
LAB_1402adcb8:
  if ((char)param_3[1] == '\0') {
    if (lVar12 == 0) {
LAB_1402ade93:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar12 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar12 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)(lVar12);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar12 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402ade93;
      *(short *)((longlong)param_3 + 10) = sVar6;
      lVar10 = lVar12;
    }
    *(undefined1 *)(param_3 + 1) = 1;
    lVar12 = lVar10;
  }
  puVar4 = param_6;
  if ((char)param_4[1] == '\0') {
    lVar10 = *param_4;
    if (lVar10 == 0) {
LAB_1402adee8:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402adee8;
      *(short *)((longlong)param_4 + 10) = sVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (lVar12 == 0) {
    if (*param_4 == 0) goto LAB_1402ae050;
  }
  else if (*param_4 != 0) goto LAB_1402ae050;
  if ((char)param_3[1] == '\0') {
    if (lVar12 == 0) {
LAB_1402adf51:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar12 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar12 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)(lVar12);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar12 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402adf51;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  cVar5 = (*(code *)PTR_FUN_140426bb8)(uVar9,4,*(undefined2 *)((longlong)param_3 + 10));
  if (cVar5 == '\0') {
    if (iVar7 == 2) {
      *puVar4 = *puVar4 | 2;
    }
    else {
      local_48 = (undefined4)*param_4;
      uStack_44 = *(undefined4 *)((longlong)param_4 + 4);
      uStack_40 = (undefined4)param_4[1];
      uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
      local_58 = (undefined4)*param_3;
      uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
      uStack_50 = (undefined4)param_3[1];
      uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
      (*(code *)PTR_FUN_140426bb8)(param_1,&local_68,&local_58,&local_48,param_5,puVar4,param_7);
      *(undefined4 *)param_3 = local_68;
      *(undefined4 *)((longlong)param_3 + 4) = uStack_64;
      *(undefined4 *)(param_3 + 1) = (undefined4)uStack_60;
      *(undefined4 *)((longlong)param_3 + 0xc) = uStack_60._4_4_;
      if (iVar7 == 4) {
        iVar7 = 3;
      }
    }
  }
  else if ((iVar7 - 1U & 0xfffffffd) == 0) {
    piVar13 = (int *)(param_7 + 0x10);
    uVar8 = FUN_1402958f0(param_3,param_4,1,0xc,piVar13,local_res18,uVar9);
    *puVar4 = *puVar4 | uVar8;
    *piVar13 = *piVar13 + -1;
  }
  else {
    uVar8 = FUN_1402958f0(param_3,param_4,1,0x1f,param_7 + 0xc,local_res18,uVar9);
    *puVar4 = *puVar4 | uVar8;
  }
LAB_1402ae050:
  if ((char)param_3[1] == '\0') {
    func_0x0001402a7f30(param_3);
  }
  if ((char)param_4[1] == '\0') {
    func_0x0001402a7f30(param_4);
  }
  lVar10 = *param_3;
  if (lVar10 == 0) {
    if (*param_4 == 0) goto LAB_1402ae080;
  }
  else if (*param_4 != 0) goto LAB_1402ae080;
  if ((char)param_3[1] == '\0') {
    func_0x0001402a7f30(param_3);
    lVar10 = *param_3;
  }
  cVar5 = (*(code *)PTR_FUN_140426bb8)(uVar9,0x48,*(undefined2 *)((longlong)param_3 + 10));
  if (cVar5 == '\0') goto LAB_1402ae080;
  lVar10 = *param_3;
  if (lVar10 == 0) {
LAB_1402ae142:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1402ae125:
      sVar6 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar1 = **(int **)(lVar10 + 0x50);
      if (iVar1 < 1) goto LAB_1402ae125;
      **(int **)(lVar10 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar10 + 0x38);
      **(longlong **)(lVar10 + 0x38) = (longlong)(psVar2 + 1);
      sVar6 = *psVar2;
    }
    if (sVar6 == -1) goto LAB_1402ae142;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1402ae050;
LAB_1402ae080:
  if ((char)param_3[1] == '\0') {
    if (lVar10 == 0) {
LAB_1402ae171:
      *param_3 = 0;
      lVar10 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)(lVar10);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402ae171;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  puVar4 = param_6;
  if ((char)param_4[1] == '\0') {
    lVar12 = *param_4;
    if (lVar12 == 0) {
LAB_1402ae1c9:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar12 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar12 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar12 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402ae1c9;
      *(short *)((longlong)param_4 + 10) = sVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (lVar10 == 0) {
    if (*param_4 == 0) goto LAB_1402ae2d0;
  }
  else if (*param_4 != 0) goto LAB_1402ae2d0;
  if ((char)param_3[1] == '\0') {
    if (lVar10 == 0) {
LAB_1402ae236:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)(lVar10);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402ae236;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  uVar11 = (*(code *)PTR_FUN_140426bb8)(uVar9,*(undefined2 *)((longlong)param_3 + 10),0);
  if ((0x3a < (byte)uVar11) || ((0x400900000000000U >> (uVar11 & 0x3f) & 1) == 0))
  goto LAB_1402ae2d0;
  lVar10 = *param_3;
  if (lVar10 != 0) {
    if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1402ae2a0:
      sVar6 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar1 = **(int **)(lVar10 + 0x50);
      if (iVar1 < 1) goto LAB_1402ae2a0;
      **(int **)(lVar10 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar10 + 0x38);
      **(longlong **)(lVar10 + 0x38) = (longlong)(psVar2 + 1);
      sVar6 = *psVar2;
    }
    if (sVar6 != -1) {
      *(undefined1 *)(param_3 + 1) = 0;
      goto LAB_1402ae2d0;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
LAB_1402ae2d0:
  if ((char)param_3[1] == '\0') {
    func_0x0001402a7f30(param_3);
  }
  if ((char)param_4[1] == '\0') {
    func_0x0001402a7f30(param_4);
  }
  lVar10 = *param_3;
  if (lVar10 == 0) {
    if (*param_4 == 0) goto LAB_1402ae300;
  }
  else if (*param_4 != 0) goto LAB_1402ae300;
  if ((char)param_3[1] == '\0') {
    func_0x0001402a7f30(param_3);
    lVar10 = *param_3;
  }
  cVar5 = (*(code *)PTR_FUN_140426bb8)(uVar9,0x48,*(undefined2 *)((longlong)param_3 + 10));
  if (cVar5 == '\0') goto LAB_1402ae300;
  lVar10 = *param_3;
  if (lVar10 == 0) {
LAB_1402ae3c1:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1402ae3a5:
      sVar6 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar1 = **(int **)(lVar10 + 0x50);
      if (iVar1 < 1) goto LAB_1402ae3a5;
      **(int **)(lVar10 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar10 + 0x38);
      **(longlong **)(lVar10 + 0x38) = (longlong)(psVar2 + 1);
      sVar6 = *psVar2;
    }
    if (sVar6 == -1) goto LAB_1402ae3c1;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1402ae2d0;
LAB_1402ae300:
  if ((char)param_3[1] == '\0') {
    if (lVar10 == 0) {
LAB_1402ae3ef:
      *param_3 = 0;
      lVar10 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)(lVar10);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402ae3ef;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar12 = param_7;
  if ((char)param_4[1] == '\0') {
    lVar3 = *param_4;
    if (lVar3 == 0) {
LAB_1402ae447:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402ae447;
      *(short *)((longlong)param_4 + 10) = sVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (lVar10 == 0) {
    if (*param_4 == 0) goto LAB_1402ae48a;
LAB_1402ae460:
    if ((char)param_3[1] == '\0') {
      if (lVar10 == 0) {
LAB_1402ae4b3:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar10 + 0x50) < 1)) {
          sVar6 = (*(code *)PTR_FUN_140426bb8)(lVar10);
        }
        else {
          sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
        }
        if (sVar6 == -1) goto LAB_1402ae4b3;
        *(short *)((longlong)param_3 + 10) = sVar6;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    cVar5 = (*(code *)PTR_FUN_140426bb8)(uVar9,4,*(undefined2 *)((longlong)param_3 + 10));
    if (cVar5 == '\0') {
      if (iVar7 == 4) {
LAB_1402ae578:
        local_48 = (undefined4)*param_4;
        uStack_44 = *(undefined4 *)((longlong)param_4 + 4);
        uStack_40 = (undefined4)param_4[1];
        uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
        local_58 = (undefined4)*param_3;
        uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
        uStack_50 = (undefined4)param_3[1];
        uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
        (*(code *)PTR_FUN_140426bb8)(local_48,&local_68,&local_58,&local_48,param_5,puVar4,lVar12);
        *(undefined4 *)param_3 = local_68;
        *(undefined4 *)((longlong)param_3 + 4) = uStack_64;
        *(undefined4 *)(param_3 + 1) = (undefined4)uStack_60;
        *(undefined4 *)((longlong)param_3 + 0xc) = uStack_60._4_4_;
      }
      else {
        *puVar4 = *puVar4 | 2;
      }
    }
    else if (iVar7 == 4) {
      piVar13 = (int *)(lVar12 + 0x10);
      uVar8 = FUN_1402958f0(param_3,param_4,1,0xc,piVar13,&param_5,uVar9);
      *puVar4 = *puVar4 | uVar8;
      *piVar13 = *piVar13 + -1;
    }
    else {
      if (iVar7 != 3) goto LAB_1402ae578;
      uVar8 = FUN_1402958f0(param_3,param_4,1,0x1f,lVar12 + 0xc,&param_5,uVar9);
      *puVar4 = *puVar4 | uVar8;
    }
  }
  else {
    if (*param_4 == 0) goto LAB_1402ae460;
LAB_1402ae48a:
    *puVar4 = *puVar4 | 2;
  }
  if ((char)param_3[1] == '\0') {
    lVar10 = *param_3;
    if (lVar10 == 0) {
code_r0x0001402ae5f8:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto code_r0x0001402ae5f8;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar10 = *param_4;
    if (lVar10 != 0) {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 != -1) goto code_r0x0001402ae64a;
    }
    *param_4 = 0;
  }
code_r0x0001402ae64a:
  if (*param_3 == 0) {
    if (*param_4 != 0) goto code_r0x0001402ae663;
  }
  else if (*param_4 == 0) goto code_r0x0001402ae663;
  *puVar4 = *puVar4 | 1;
code_r0x0001402ae663:
  lVar10 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar10;
  return;
}

