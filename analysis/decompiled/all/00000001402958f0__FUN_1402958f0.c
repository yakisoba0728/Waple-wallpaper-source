// Function: FUN_1402958f0
// Addr: 1402958f0
// Size: 1034 bytes


void FUN_1402958f0(longlong *param_1,longlong *param_2,int param_3,int param_4,int *param_5,
                  int *param_6,undefined8 param_7)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  short *psVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  undefined1 auStack_a8 [32];
  int local_88;
  int iStack_84;
  int local_80;
  char *pcStack_78;
  int *local_70;
  char local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_a8;
  local_70 = param_5;
  if (param_4 < 10) {
    iVar7 = 1;
  }
  else if (param_4 < 100) {
    iVar7 = 2;
  }
  else {
    iVar7 = (999 < param_4) + 3;
  }
  pcVar9 = local_68;
  *param_6 = 0;
  local_88 = param_4;
  local_80 = param_3;
LAB_140295990:
  if ((char)param_1[1] == '\0') {
    func_0x0001402a7f30(param_1);
  }
  if ((char)param_2[1] == '\0') {
    func_0x0001402a7f30(param_2);
  }
  if (*param_1 == 0) {
    if (*param_2 == 0) goto LAB_1402959ba;
  }
  else if (*param_2 != 0) goto LAB_1402959ba;
  if (iVar7 <= *param_6) goto LAB_1402959ba;
  if ((char)param_1[1] == '\0') {
    func_0x0001402a7f30(param_1);
  }
  cVar5 = (*(code *)PTR_FUN_140426bb8)(param_7,0x48,*(undefined2 *)((longlong)param_1 + 10));
  if (cVar5 == '\0') goto LAB_1402959ba;
  lVar3 = *param_1;
  if (lVar3 == 0) {
LAB_140295a7c:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_6 = *param_6 + 1;
  }
  else {
    if (**(longlong **)(lVar3 + 0x38) == 0) {
LAB_140295a5d:
      sVar6 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar1 = **(int **)(lVar3 + 0x50);
      if (iVar1 < 1) goto LAB_140295a5d;
      **(int **)(lVar3 + 0x50) = iVar1 + -1;
      psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
      **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
      sVar6 = *psVar4;
    }
    if (sVar6 == -1) goto LAB_140295a7c;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_6 = *param_6 + 1;
  }
  goto LAB_140295990;
LAB_1402959ba:
  if ((char)param_1[1] == '\0') {
    lVar3 = *param_1;
    if (lVar3 == 0) {
LAB_140295aac:
      *param_1 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_140295aac;
      *(short *)((longlong)param_1 + 10) = sVar6;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((char)param_2[1] == '\0') {
    lVar3 = *param_2;
    if (lVar3 == 0) {
LAB_140295afa:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_140295afa;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (*param_2 == 0) goto LAB_140295c60;
  }
  else if (*param_2 != 0) goto LAB_140295c60;
  if (iVar7 <= *param_6) goto LAB_140295c60;
  if ((char)param_1[1] == '\0') {
    if (lVar3 == 0) {
LAB_140295b6c:
      *param_1 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_140295b6c;
      *(short *)((longlong)param_1 + 10) = sVar6;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  cVar5 = (*(code *)PTR_FUN_140426bb8)(param_7,*(undefined2 *)((longlong)param_1 + 10),0);
  if (cVar5 != '+') {
    if (cVar5 == '-') {
      lVar3 = *param_1;
      pcVar9 = local_68 + 1;
      local_68[0] = cVar5;
      if (lVar3 == 0) goto LAB_140295c55;
      if (**(longlong **)(lVar3 + 0x38) != 0) {
        iVar1 = **(int **)(lVar3 + 0x50);
        if (0 < iVar1) {
          **(int **)(lVar3 + 0x50) = iVar1 + -1;
          psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
          **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
          sVar6 = *psVar4;
          goto code_r0x000140295c4a;
        }
      }
      sVar6 = (*(code *)PTR_FUN_140426bb8)();
      goto code_r0x000140295c4a;
    }
    goto LAB_140295c60;
  }
  lVar3 = *param_1;
  pcVar9 = local_68 + 1;
  local_68[0] = cVar5;
  if (lVar3 != 0) {
    if (**(longlong **)(lVar3 + 0x38) == 0) {
LAB_140295bce:
      sVar6 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar1 = **(int **)(lVar3 + 0x50);
      if (iVar1 < 1) goto LAB_140295bce;
      **(int **)(lVar3 + 0x50) = iVar1 + -1;
      psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
      **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
      sVar6 = *psVar4;
    }
    if (sVar6 != -1) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_140295c60;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
LAB_140295c60:
  if ((char)param_1[1] == '\0') {
    lVar3 = *param_1;
    if (lVar3 == 0) {
LAB_140295ca1:
      *param_1 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_140295ca1;
      *(short *)((longlong)param_1 + 10) = sVar6;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((char)param_2[1] == '\0') {
    lVar3 = *param_2;
    if (lVar3 == 0) {
LAB_140295ced:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_140295ced;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (*param_2 == 0) goto code_r0x000140295d10;
  }
  else if (*param_2 != 0) goto code_r0x000140295d10;
  if (iVar7 <= *param_6) goto code_r0x000140295d10;
  if ((char)param_1[1] == '\0') {
    if (lVar3 == 0) {
code_r0x000140295e2e:
      *param_1 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto code_r0x000140295e2e;
      *(short *)((longlong)param_1 + 10) = sVar6;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  cVar5 = (*(code *)PTR_FUN_140426bb8)(param_7,*(undefined2 *)((longlong)param_1 + 10),0);
  if (cVar5 != '0') goto code_r0x000140295d10;
  *param_6 = *param_6 + 1;
  lVar3 = *param_1;
  if (lVar3 == 0) {
LAB_140295c55:
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 0;
  }
  else {
    if (**(longlong **)(lVar3 + 0x38) == 0) {
code_r0x000140295e9c:
      sVar6 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar1 = **(int **)(lVar3 + 0x50);
      if (iVar1 < 1) goto code_r0x000140295e9c;
      **(int **)(lVar3 + 0x50) = iVar1 + -1;
      psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
      **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
      sVar6 = *psVar4;
    }
code_r0x000140295c4a:
    if (sVar6 == -1) goto LAB_140295c55;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  goto LAB_140295c60;
code_r0x000140295d10:
  iVar1 = local_88;
  if (0 < *param_6) {
    *pcVar9 = '0';
    pcVar9 = pcVar9 + 1;
  }
  do {
    if ((char)param_1[1] == '\0') {
      func_0x0001402a7f30(param_1);
    }
    if ((char)param_2[1] == '\0') {
      func_0x0001402a7f30(param_2);
    }
    if (*param_1 == 0) {
      if (*param_2 == 0) goto code_r0x000140295d53;
    }
    else if (*param_2 != 0) {
code_r0x000140295d53:
      iStack_84 = 0;
      pcVar8 = local_68;
      if (*param_6 != 0) {
        pcVar8 = pcVar9;
      }
      *pcVar8 = '\0';
      iVar7 = FUN_140292840(local_68,&pcStack_78,10,&iStack_84);
      if ((char)param_1[1] == '\0') {
        func_0x0001402a7f30(param_1);
      }
      if ((char)param_2[1] == '\0') {
        func_0x0001402a7f30(param_2);
      }
      if ((((pcStack_78 != local_68) && (iStack_84 == 0)) && (local_80 <= iVar7)) &&
         (iVar7 <= iVar1)) {
        *local_70 = iVar7;
      }
      func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_a8);
      return;
    }
    if ((char)param_1[1] == '\0') {
      func_0x0001402a7f30(param_1);
    }
    cVar5 = (*(code *)PTR_FUN_140426bb8)(param_7,*(undefined2 *)((longlong)param_1 + 10),0);
    if ((9 < (byte)(cVar5 - 0x30U)) || (iVar2 = *param_6, iVar7 <= iVar2))
    goto code_r0x000140295d53;
    *pcVar9 = cVar5;
    if (pcVar9 < local_68 + 0x1f) {
      pcVar9 = pcVar9 + 1;
    }
    *param_6 = iVar2 + 1;
    lVar3 = *param_1;
    if (lVar3 == 0) {
code_r0x000140295f64:
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar3 + 0x38) == 0) {
code_r0x000140295f44:
        sVar6 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        iVar2 = **(int **)(lVar3 + 0x50);
        if (iVar2 < 1) goto code_r0x000140295f44;
        **(int **)(lVar3 + 0x50) = iVar2 + -1;
        psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
        **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
        sVar6 = *psVar4;
      }
      if (sVar6 == -1) goto code_r0x000140295f64;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  } while( true );
}

