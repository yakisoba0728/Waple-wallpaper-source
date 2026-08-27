// Function: FUN_1402ae5c0
// Addr: 1402ae5c0
// Size: 3717 bytes


void FUN_1402ae5c0(undefined8 param_1,longlong *param_2,longlong *param_3,longlong *param_4,
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
  (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar10);
  uVar9 = FUN_14000f450(&local_68);
  if ((lVar10 != 0) &&
     (lVar10 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar10), lVar10 != 0)) {
    (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar10,1);
  }
  iVar7 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(param_1);
  if (iVar7 == 0) {
    iVar7 = 2;
  }
  if ((char)param_3[1] == '\0') {
    lVar10 = *param_3;
    if (lVar10 == 0) {
LAB_1402ae6ae:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402ae6ae;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar10 = *param_4;
    if (lVar10 == 0) {
LAB_1402ae6fb:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402ae6fb;
      *(short *)((longlong)param_4 + 10) = sVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  puVar4 = param_6;
  lVar10 = *param_3;
  if (lVar10 == 0) {
    if (*param_4 == 0) goto LAB_1402ae8b0;
  }
  else if (*param_4 != 0) goto LAB_1402ae8b0;
  if ((char)param_3[1] == '\0') {
    if (lVar10 == 0) {
LAB_1402ae768:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402ae768;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                    (uVar9,4,*(undefined2 *)((longlong)param_3 + 10));
  if (cVar5 == '\0') {
    local_68 = (undefined4)*param_4;
    uStack_64 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_60 = param_4[1];
    local_58 = (undefined4)*param_3;
    uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_50 = (undefined4)param_3[1];
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
    (*(code *)PTR__guard_dispatch_icall_140426ae8)
              (param_1,&local_48,&local_58,&local_68,param_5,puVar4,param_7);
    iVar7 = 2;
    uVar14 = local_48;
    uVar15 = uStack_44;
    uVar16 = uStack_40;
    uVar17 = uStack_3c;
  }
  else {
    if (iVar7 == 2) {
      piVar13 = (int *)(param_7 + 0x10);
      uVar8 = FUN_140295820(param_3,param_4,1,0xc,piVar13,local_res18,uVar9);
      *puVar4 = *puVar4 | uVar8;
      *piVar13 = *piVar13 + -1;
      goto LAB_1402ae8b0;
    }
    if (iVar7 == 1) {
      uVar8 = FUN_140295820(param_3,param_4,1,0x1f,param_7 + 0xc,local_res18,uVar9);
      *puVar4 = *puVar4 | uVar8;
      goto LAB_1402ae8b0;
    }
    local_48 = (undefined4)*param_4;
    uStack_44 = *(undefined4 *)((longlong)param_4 + 4);
    uStack_40 = (undefined4)param_4[1];
    uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
    local_58 = (undefined4)*param_3;
    uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
    uStack_50 = (undefined4)param_3[1];
    uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
    (*(code *)PTR__guard_dispatch_icall_140426ae8)
              (param_1,&local_68,&local_58,&local_48,param_5,puVar4,param_7);
    uVar14 = local_68;
    uVar15 = uStack_64;
    uVar16 = (undefined4)uStack_60;
    uVar17 = uStack_60._4_4_;
  }
  *(undefined4 *)param_3 = uVar14;
  *(undefined4 *)((longlong)param_3 + 4) = uVar15;
  *(undefined4 *)(param_3 + 1) = uVar16;
  *(undefined4 *)((longlong)param_3 + 0xc) = uVar17;
LAB_1402ae8b0:
  if ((char)param_3[1] == '\0') {
    FUN_1402a7e60(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1402a7e60(param_4);
  }
  lVar12 = *param_3;
  lVar10 = *param_4;
  if (lVar12 == 0) {
    if (lVar10 == 0) goto LAB_1402ae8e0;
  }
  else if (lVar10 != 0) goto LAB_1402ae8e0;
  if ((char)param_3[1] == '\0') {
    FUN_1402a7e60(param_3);
    lVar12 = *param_3;
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                    (uVar9,0x48,*(undefined2 *)((longlong)param_3 + 10));
  if (cVar5 == '\0') goto LAB_1402ae8e0;
  lVar10 = *param_3;
  if (lVar10 == 0) {
LAB_1402ae9a2:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1402ae985:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar1 = **(int **)(lVar10 + 0x50);
      if (iVar1 < 1) goto LAB_1402ae985;
      **(int **)(lVar10 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar10 + 0x38);
      **(longlong **)(lVar10 + 0x38) = (longlong)(psVar2 + 1);
      sVar6 = *psVar2;
    }
    if (sVar6 == -1) goto LAB_1402ae9a2;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1402ae8b0;
LAB_1402ae8e0:
  if ((char)param_3[1] == '\0') {
    if (lVar12 == 0) {
LAB_1402ae9d1:
      *param_3 = 0;
      lVar12 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar12 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar12 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar12);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar12 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402ae9d1;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar10 = *param_4;
    if (lVar10 == 0) {
LAB_1402aea26:
      *param_4 = 0;
      lVar10 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar10);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402aea26;
      *(short *)((longlong)param_4 + 10) = sVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (lVar12 == 0) {
    if (lVar10 == 0) goto LAB_1402aea40;
  }
  else if (lVar10 != 0) goto LAB_1402aea40;
  if ((char)param_3[1] == '\0') {
    if (lVar12 == 0) {
LAB_1402aeaf8:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar12 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar12 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar12);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar12 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402aeaf8;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  uVar11 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                     (uVar9,*(undefined2 *)((longlong)param_3 + 10),0);
  if ((0x3a < (byte)uVar11) || ((0x400900000000000U >> (uVar11 & 0x3f) & 1) == 0))
  goto LAB_1402aea40;
  lVar10 = *param_3;
  if (lVar10 != 0) {
    if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1402aeb6a:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar1 = **(int **)(lVar10 + 0x50);
      if (iVar1 < 1) goto LAB_1402aeb6a;
      **(int **)(lVar10 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar10 + 0x38);
      **(longlong **)(lVar10 + 0x38) = (longlong)(psVar2 + 1);
      sVar6 = *psVar2;
    }
    if (sVar6 != -1) {
      *(undefined1 *)(param_3 + 1) = 0;
      goto LAB_1402aea40;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
LAB_1402aea40:
  lVar10 = 0;
  if ((char)param_3[1] == '\0') {
    FUN_1402a7e60(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1402a7e60(param_4);
  }
  lVar12 = *param_3;
  if (lVar12 == 0) {
    if (*param_4 == 0) goto LAB_1402aea78;
  }
  else if (*param_4 != 0) goto LAB_1402aea78;
  if ((char)param_3[1] == '\0') {
    FUN_1402a7e60(param_3);
    lVar12 = *param_3;
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                    (uVar9,0x48,*(undefined2 *)((longlong)param_3 + 10));
  if (cVar5 == '\0') goto LAB_1402aea78;
  lVar10 = *param_3;
  if (lVar10 == 0) {
LAB_1402aec28:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1402aec0b:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar1 = **(int **)(lVar10 + 0x50);
      if (iVar1 < 1) goto LAB_1402aec0b;
      **(int **)(lVar10 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar10 + 0x38);
      **(longlong **)(lVar10 + 0x38) = (longlong)(psVar2 + 1);
      sVar6 = *psVar2;
    }
    if (sVar6 == -1) goto LAB_1402aec28;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1402aea40;
LAB_1402aea78:
  if ((char)param_3[1] == '\0') {
    if (lVar12 == 0) {
LAB_1402aec53:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar12 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar12 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar12);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar12 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402aec53;
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
LAB_1402aeca8:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402aeca8;
      *(short *)((longlong)param_4 + 10) = sVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (lVar12 == 0) {
    if (*param_4 == 0) goto LAB_1402aee10;
  }
  else if (*param_4 != 0) goto LAB_1402aee10;
  if ((char)param_3[1] == '\0') {
    if (lVar12 == 0) {
LAB_1402aed11:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar12 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar12 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar12);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar12 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402aed11;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                    (uVar9,4,*(undefined2 *)((longlong)param_3 + 10));
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
      (*(code *)PTR__guard_dispatch_icall_140426ae8)
                (param_1,&local_68,&local_58,&local_48,param_5,puVar4,param_7);
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
    uVar8 = FUN_140295820(param_3,param_4,1,0xc,piVar13,local_res18,uVar9);
    *puVar4 = *puVar4 | uVar8;
    *piVar13 = *piVar13 + -1;
  }
  else {
    uVar8 = FUN_140295820(param_3,param_4,1,0x1f,param_7 + 0xc,local_res18,uVar9);
    *puVar4 = *puVar4 | uVar8;
  }
LAB_1402aee10:
  if ((char)param_3[1] == '\0') {
    FUN_1402a7e60(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1402a7e60(param_4);
  }
  lVar10 = *param_3;
  if (lVar10 == 0) {
    if (*param_4 == 0) goto LAB_1402aee40;
  }
  else if (*param_4 != 0) goto LAB_1402aee40;
  if ((char)param_3[1] == '\0') {
    FUN_1402a7e60(param_3);
    lVar10 = *param_3;
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                    (uVar9,0x48,*(undefined2 *)((longlong)param_3 + 10));
  if (cVar5 == '\0') goto LAB_1402aee40;
  lVar10 = *param_3;
  if (lVar10 == 0) {
LAB_1402aef02:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1402aeee5:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar1 = **(int **)(lVar10 + 0x50);
      if (iVar1 < 1) goto LAB_1402aeee5;
      **(int **)(lVar10 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar10 + 0x38);
      **(longlong **)(lVar10 + 0x38) = (longlong)(psVar2 + 1);
      sVar6 = *psVar2;
    }
    if (sVar6 == -1) goto LAB_1402aef02;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1402aee10;
LAB_1402aee40:
  if ((char)param_3[1] == '\0') {
    if (lVar10 == 0) {
LAB_1402aef31:
      *param_3 = 0;
      lVar10 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar10);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402aef31;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  puVar4 = param_6;
  if ((char)param_4[1] == '\0') {
    lVar12 = *param_4;
    if (lVar12 == 0) {
LAB_1402aef89:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar12 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar12 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar12 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402aef89;
      *(short *)((longlong)param_4 + 10) = sVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (lVar10 == 0) {
    if (*param_4 == 0) goto LAB_1402af090;
  }
  else if (*param_4 != 0) goto LAB_1402af090;
  if ((char)param_3[1] == '\0') {
    if (lVar10 == 0) {
LAB_1402aeff6:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar10);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402aeff6;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  uVar11 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                     (uVar9,*(undefined2 *)((longlong)param_3 + 10),0);
  if ((0x3a < (byte)uVar11) || ((0x400900000000000U >> (uVar11 & 0x3f) & 1) == 0))
  goto LAB_1402af090;
  lVar10 = *param_3;
  if (lVar10 != 0) {
    if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1402af060:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar1 = **(int **)(lVar10 + 0x50);
      if (iVar1 < 1) goto LAB_1402af060;
      **(int **)(lVar10 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar10 + 0x38);
      **(longlong **)(lVar10 + 0x38) = (longlong)(psVar2 + 1);
      sVar6 = *psVar2;
    }
    if (sVar6 != -1) {
      *(undefined1 *)(param_3 + 1) = 0;
      goto LAB_1402af090;
    }
  }
  *param_3 = 0;
  *(undefined1 *)(param_3 + 1) = 1;
LAB_1402af090:
  if ((char)param_3[1] == '\0') {
    FUN_1402a7e60(param_3);
  }
  if ((char)param_4[1] == '\0') {
    FUN_1402a7e60(param_4);
  }
  lVar10 = *param_3;
  if (lVar10 == 0) {
    if (*param_4 == 0) goto LAB_1402af0c0;
  }
  else if (*param_4 != 0) goto LAB_1402af0c0;
  if ((char)param_3[1] == '\0') {
    FUN_1402a7e60(param_3);
    lVar10 = *param_3;
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                    (uVar9,0x48,*(undefined2 *)((longlong)param_3 + 10));
  if (cVar5 == '\0') goto LAB_1402af0c0;
  lVar10 = *param_3;
  if (lVar10 == 0) {
LAB_1402af181:
    *param_3 = 0;
    *(undefined1 *)(param_3 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar10 + 0x38) == 0) {
LAB_1402af165:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar1 = **(int **)(lVar10 + 0x50);
      if (iVar1 < 1) goto LAB_1402af165;
      **(int **)(lVar10 + 0x50) = iVar1 + -1;
      psVar2 = (short *)**(longlong **)(lVar10 + 0x38);
      **(longlong **)(lVar10 + 0x38) = (longlong)(psVar2 + 1);
      sVar6 = *psVar2;
    }
    if (sVar6 == -1) goto LAB_1402af181;
    *(undefined1 *)(param_3 + 1) = 0;
  }
  goto LAB_1402af090;
LAB_1402af0c0:
  if ((char)param_3[1] == '\0') {
    if (lVar10 == 0) {
LAB_1402af1af:
      *param_3 = 0;
      lVar10 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar10);
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402af1af;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  lVar12 = param_7;
  if ((char)param_4[1] == '\0') {
    lVar3 = *param_4;
    if (lVar3 == 0) {
LAB_1402af207:
      *param_4 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402af207;
      *(short *)((longlong)param_4 + 10) = sVar6;
    }
    *(undefined1 *)(param_4 + 1) = 1;
  }
  if (lVar10 == 0) {
    if (*param_4 == 0) goto LAB_1402af24a;
LAB_1402af220:
    if ((char)param_3[1] == '\0') {
      if (lVar10 == 0) {
LAB_1402af273:
        *param_3 = 0;
      }
      else {
        if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
           (**(int **)(lVar10 + 0x50) < 1)) {
          sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar10);
        }
        else {
          sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
        }
        if (sVar6 == -1) goto LAB_1402af273;
        *(short *)((longlong)param_3 + 10) = sVar6;
      }
      *(undefined1 *)(param_3 + 1) = 1;
    }
    cVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                      (uVar9,4,*(undefined2 *)((longlong)param_3 + 10));
    if (cVar5 == '\0') {
      if (iVar7 == 4) {
LAB_1402af338:
        local_48 = (undefined4)*param_4;
        uStack_44 = *(undefined4 *)((longlong)param_4 + 4);
        uStack_40 = (undefined4)param_4[1];
        uStack_3c = *(undefined4 *)((longlong)param_4 + 0xc);
        local_58 = (undefined4)*param_3;
        uStack_54 = *(undefined4 *)((longlong)param_3 + 4);
        uStack_50 = (undefined4)param_3[1];
        uStack_4c = *(undefined4 *)((longlong)param_3 + 0xc);
        (*(code *)PTR__guard_dispatch_icall_140426ae8)
                  (local_48,&local_68,&local_58,&local_48,param_5,puVar4,lVar12);
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
      uVar8 = FUN_140295820(param_3,param_4,1,0xc,piVar13,&param_5,uVar9);
      *puVar4 = *puVar4 | uVar8;
      *piVar13 = *piVar13 + -1;
    }
    else {
      if (iVar7 != 3) goto LAB_1402af338;
      uVar8 = FUN_140295820(param_3,param_4,1,0x1f,lVar12 + 0xc,&param_5,uVar9);
      *puVar4 = *puVar4 | uVar8;
    }
  }
  else {
    if (*param_4 == 0) goto LAB_1402af220;
LAB_1402af24a:
    *puVar4 = *puVar4 | 2;
  }
  if ((char)param_3[1] == '\0') {
    lVar10 = *param_3;
    if (lVar10 == 0) {
LAB_1402af3b8:
      *param_3 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402af3b8;
      *(short *)((longlong)param_3 + 10) = sVar6;
    }
    *(undefined1 *)(param_3 + 1) = 1;
  }
  if ((char)param_4[1] == '\0') {
    lVar10 = *param_4;
    if (lVar10 != 0) {
      if (((short *)**(undefined8 **)(lVar10 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar10 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar10 + 0x38);
      }
      if (sVar6 != -1) goto LAB_1402af40a;
    }
    *param_4 = 0;
  }
LAB_1402af40a:
  if (*param_3 == 0) {
    if (*param_4 != 0) goto LAB_1402af423;
  }
  else if (*param_4 == 0) goto LAB_1402af423;
  *puVar4 = *puVar4 | 1;
LAB_1402af423:
  lVar10 = param_3[1];
  *param_2 = *param_3;
  param_2[1] = lVar10;
  return;
}

