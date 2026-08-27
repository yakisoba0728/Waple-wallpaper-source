// Function: FUN_140295820
// Addr: 140295820
// Size: 1748 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_140295820(longlong *param_1,longlong *param_2,int param_3,int param_4,int *param_5,
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
  uint uVar9;
  char *pcVar10;
  undefined1 auStack_a8 [32];
  int local_88;
  int local_84;
  int local_80;
  char *local_78;
  int *local_70;
  char local_68 [32];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_a8;
  uVar9 = 1;
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
  pcVar10 = local_68;
  *param_6 = 0;
  local_88 = param_4;
  local_80 = param_3;
LAB_1402958c0:
  if ((char)param_1[1] == '\0') {
    FUN_1402a7e60(param_1);
  }
  if ((char)param_2[1] == '\0') {
    FUN_1402a7e60(param_2);
  }
  if (*param_1 == 0) {
    if (*param_2 == 0) goto LAB_1402958ea;
  }
  else if (*param_2 != 0) goto LAB_1402958ea;
  if (iVar7 <= *param_6) goto LAB_1402958ea;
  if ((char)param_1[1] == '\0') {
    FUN_1402a7e60(param_1);
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                    (param_7,0x48,*(undefined2 *)((longlong)param_1 + 10));
  if (cVar5 == '\0') goto LAB_1402958ea;
  lVar3 = *param_1;
  if (lVar3 == 0) {
LAB_1402959ac:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_6 = *param_6 + 1;
  }
  else {
    if (**(longlong **)(lVar3 + 0x38) == 0) {
LAB_14029598d:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar1 = **(int **)(lVar3 + 0x50);
      if (iVar1 < 1) goto LAB_14029598d;
      **(int **)(lVar3 + 0x50) = iVar1 + -1;
      psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
      **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
      sVar6 = *psVar4;
    }
    if (sVar6 == -1) goto LAB_1402959ac;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_6 = *param_6 + 1;
  }
  goto LAB_1402958c0;
LAB_1402958ea:
  if ((char)param_1[1] == '\0') {
    lVar3 = *param_1;
    if (lVar3 == 0) {
LAB_1402959dc:
      *param_1 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_1402959dc;
      *(short *)((longlong)param_1 + 10) = sVar6;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((char)param_2[1] == '\0') {
    lVar3 = *param_2;
    if (lVar3 == 0) {
LAB_140295a2a:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_140295a2a;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (*param_2 == 0) goto LAB_140295b90;
  }
  else if (*param_2 != 0) goto LAB_140295b90;
  if (iVar7 <= *param_6) goto LAB_140295b90;
  if ((char)param_1[1] == '\0') {
    if (lVar3 == 0) {
LAB_140295a9c:
      *param_1 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_140295a9c;
      *(short *)((longlong)param_1 + 10) = sVar6;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                    (param_7,*(undefined2 *)((longlong)param_1 + 10),0);
  if (cVar5 != '+') {
    if (cVar5 == '-') {
      lVar3 = *param_1;
      pcVar10 = local_68 + 1;
      local_68[0] = cVar5;
      if (lVar3 == 0) goto LAB_140295b85;
      if (**(longlong **)(lVar3 + 0x38) != 0) {
        iVar1 = **(int **)(lVar3 + 0x50);
        if (0 < iVar1) {
          **(int **)(lVar3 + 0x50) = iVar1 + -1;
          psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
          **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
          sVar6 = *psVar4;
          goto LAB_140295b7a;
        }
      }
      sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      goto LAB_140295b7a;
    }
    goto LAB_140295b90;
  }
  lVar3 = *param_1;
  pcVar10 = local_68 + 1;
  local_68[0] = cVar5;
  if (lVar3 != 0) {
    if (**(longlong **)(lVar3 + 0x38) == 0) {
LAB_140295afe:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar1 = **(int **)(lVar3 + 0x50);
      if (iVar1 < 1) goto LAB_140295afe;
      **(int **)(lVar3 + 0x50) = iVar1 + -1;
      psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
      **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
      sVar6 = *psVar4;
    }
    if (sVar6 != -1) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_140295b90;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
LAB_140295b90:
  if ((char)param_1[1] == '\0') {
    lVar3 = *param_1;
    if (lVar3 == 0) {
LAB_140295bd1:
      *param_1 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_140295bd1;
      *(short *)((longlong)param_1 + 10) = sVar6;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((char)param_2[1] == '\0') {
    lVar3 = *param_2;
    if (lVar3 == 0) {
LAB_140295c1d:
      *param_2 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_140295c1d;
      *(short *)((longlong)param_2 + 10) = sVar6;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar3 = *param_1;
  if (lVar3 == 0) {
    if (*param_2 == 0) goto LAB_140295c40;
  }
  else if (*param_2 != 0) goto LAB_140295c40;
  if (iVar7 <= *param_6) goto LAB_140295c40;
  if ((char)param_1[1] == '\0') {
    if (lVar3 == 0) {
LAB_140295d5e:
      *param_1 = 0;
    }
    else {
      if (((short *)**(undefined8 **)(lVar3 + 0x38) == (short *)0x0) ||
         (**(int **)(lVar3 + 0x50) < 1)) {
        sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        sVar6 = *(short *)**(undefined8 **)(lVar3 + 0x38);
      }
      if (sVar6 == -1) goto LAB_140295d5e;
      *(short *)((longlong)param_1 + 10) = sVar6;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                    (param_7,*(undefined2 *)((longlong)param_1 + 10),0);
  if (cVar5 != '0') goto LAB_140295c40;
  *param_6 = *param_6 + 1;
  lVar3 = *param_1;
  if (lVar3 == 0) {
LAB_140295b85:
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 0;
  }
  else {
    if (**(longlong **)(lVar3 + 0x38) == 0) {
LAB_140295dcc:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar1 = **(int **)(lVar3 + 0x50);
      if (iVar1 < 1) goto LAB_140295dcc;
      **(int **)(lVar3 + 0x50) = iVar1 + -1;
      psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
      **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
      sVar6 = *psVar4;
    }
LAB_140295b7a:
    if (sVar6 == -1) goto LAB_140295b85;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  goto LAB_140295b90;
LAB_140295c40:
  iVar1 = local_88;
  if (0 < *param_6) {
    *pcVar10 = '0';
    pcVar10 = pcVar10 + 1;
  }
LAB_140295c51:
  if ((char)param_1[1] == '\0') {
    FUN_1402a7e60(param_1);
  }
  if ((char)param_2[1] == '\0') {
    FUN_1402a7e60(param_2);
  }
  if (*param_1 == 0) {
    if (*param_2 == 0) goto LAB_140295c83;
  }
  else if (*param_2 != 0) goto LAB_140295c83;
  if ((char)param_1[1] == '\0') {
    FUN_1402a7e60(param_1);
  }
  cVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                    (param_7,*(undefined2 *)((longlong)param_1 + 10),0);
  if ((9 < (byte)(cVar5 - 0x30U)) || (iVar2 = *param_6, iVar7 <= iVar2)) goto LAB_140295c83;
  *pcVar10 = cVar5;
  if (pcVar10 < local_68 + 0x1f) {
    pcVar10 = pcVar10 + 1;
  }
  *param_6 = iVar2 + 1;
  lVar3 = *param_1;
  if (lVar3 == 0) {
LAB_140295e94:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar3 + 0x38) == 0) {
LAB_140295e74:
      sVar6 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar2 = **(int **)(lVar3 + 0x50);
      if (iVar2 < 1) goto LAB_140295e74;
      **(int **)(lVar3 + 0x50) = iVar2 + -1;
      psVar4 = (short *)**(longlong **)(lVar3 + 0x38);
      **(longlong **)(lVar3 + 0x38) = (longlong)(psVar4 + 1);
      sVar6 = *psVar4;
    }
    if (sVar6 == -1) goto LAB_140295e94;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  goto LAB_140295c51;
LAB_140295c83:
  local_84 = 0;
  pcVar8 = local_68;
  if (*param_6 != 0) {
    pcVar8 = pcVar10;
  }
  *pcVar8 = '\0';
  iVar7 = FUN_140292770(local_68,&local_78,10,&local_84);
  if ((char)param_1[1] == '\0') {
    FUN_1402a7e60(param_1);
  }
  if ((char)param_2[1] == '\0') {
    FUN_1402a7e60(param_2);
  }
  if (*param_1 == 0) {
    if (*param_2 == 0) goto LAB_140295eac;
  }
  else if (*param_2 != 0) goto LAB_140295eac;
  uVar9 = 0;
LAB_140295eac:
  if ((((local_78 == local_68) || (local_84 != 0)) || (iVar7 < local_80)) || (iVar1 < iVar7)) {
    uVar9 = uVar9 | 2;
  }
  else {
    *local_70 = iVar7;
  }
  return uVar9;
}

