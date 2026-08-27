// Function: FUN_1402b2700
// Addr: 1402b2700
// Size: 1668 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1402b2700(longlong *param_1,longlong *param_2,int param_3,int param_4,int *param_5,
                  int *param_6,longlong param_7)

{
  int iVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  longlong lVar7;
  uint uVar8;
  char *pcVar9;
  undefined1 auStack_98 [32];
  int local_78;
  int local_74;
  char *local_70;
  int *local_68;
  char local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_1404dc040 ^ (ulonglong)auStack_98;
  uVar8 = 1;
  local_68 = param_5;
  if (param_4 < 10) {
    iVar4 = 1;
  }
  else if (param_4 < 100) {
    iVar4 = 2;
  }
  else {
    iVar4 = (999 < param_4) + 3;
  }
  pcVar9 = local_60;
  *param_6 = 0;
  local_74 = param_3;
LAB_1402b2796:
  if ((char)param_1[1] == '\0') {
    FUN_140097500(param_1);
  }
  if ((char)param_2[1] == '\0') {
    FUN_140097500(param_2);
  }
  lVar7 = *param_1;
  if (lVar7 == 0) {
    if (*param_2 == 0) goto LAB_1402b27c2;
  }
  else if (*param_2 != 0) goto LAB_1402b27c2;
  if (iVar4 <= *param_6) goto LAB_1402b27c2;
  if ((char)param_1[1] == '\0') {
    FUN_140097500(param_1);
    lVar7 = *param_1;
  }
  if ((*(byte *)(*(longlong *)(param_7 + 0x18) + (ulonglong)*(byte *)((longlong)param_1 + 9) * 2) &
      0x48) == 0) goto LAB_1402b27c2;
  if (lVar7 == 0) {
LAB_1402b2876:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_6 = *param_6 + 1;
  }
  else {
    if (**(longlong **)(lVar7 + 0x38) == 0) {
LAB_1402b2855:
      uVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar7);
    }
    else {
      iVar1 = **(int **)(lVar7 + 0x50);
      if (iVar1 < 1) goto LAB_1402b2855;
      **(int **)(lVar7 + 0x50) = iVar1 + -1;
      pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
      **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
      uVar5 = (uint)*pbVar2;
    }
    if (uVar5 == 0xffffffff) goto LAB_1402b2876;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_6 = *param_6 + 1;
  }
  goto LAB_1402b2796;
LAB_1402b27c2:
  if ((char)param_1[1] == '\0') {
    if (lVar7 == 0) {
LAB_1402b28a5:
      *param_1 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)(lVar7);
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_1402b28a5;
      *(char *)((longlong)param_1 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((char)param_2[1] == '\0') {
    lVar7 = *param_2;
    if (lVar7 == 0) {
LAB_1402b28ef:
      *param_2 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_1402b28ef;
      *(char *)((longlong)param_2 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar7 = *param_1;
  if (lVar7 == 0) {
    if (*param_2 == 0) goto LAB_1402b2a50;
  }
  else if (*param_2 != 0) goto LAB_1402b2a50;
  if (iVar4 <= *param_6) goto LAB_1402b2a50;
  if ((char)param_1[1] == '\0') {
    if (lVar7 == 0) {
LAB_1402b295d:
      *param_1 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_1402b295d;
      *(char *)((longlong)param_1 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  cVar3 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                    (param_7,*(undefined1 *)((longlong)param_1 + 9),0);
  if (cVar3 != '+') {
    if (cVar3 == '-') {
      lVar7 = *param_1;
      pcVar9 = local_60 + 1;
      local_60[0] = cVar3;
      if (lVar7 == 0) goto LAB_1402b2a40;
      if (**(longlong **)(lVar7 + 0x38) == 0) goto LAB_1402b2a28;
      iVar1 = **(int **)(lVar7 + 0x50);
      if (iVar1 < 1) goto LAB_1402b2a28;
      **(int **)(lVar7 + 0x50) = iVar1 + -1;
      pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
      **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
      uVar5 = (uint)*pbVar2;
      goto LAB_1402b2a35;
    }
    goto LAB_1402b2a50;
  }
  lVar7 = *param_1;
  pcVar9 = local_60 + 1;
  local_60[0] = cVar3;
  if (lVar7 != 0) {
    if (**(longlong **)(lVar7 + 0x38) == 0) {
LAB_1402b29bf:
      uVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar1 = **(int **)(lVar7 + 0x50);
      if (iVar1 < 1) goto LAB_1402b29bf;
      **(int **)(lVar7 + 0x50) = iVar1 + -1;
      pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
      **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
      uVar5 = (uint)*pbVar2;
    }
    if (uVar5 != 0xffffffff) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_1402b2a50;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
LAB_1402b2a50:
  if ((char)param_1[1] == '\0') {
    lVar7 = *param_1;
    if (lVar7 == 0) {
LAB_1402b2a8f:
      *param_1 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_1402b2a8f;
      *(char *)((longlong)param_1 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((char)param_2[1] == '\0') {
    lVar7 = *param_2;
    if (lVar7 == 0) {
LAB_1402b2ad9:
      *param_2 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_1402b2ad9;
      *(char *)((longlong)param_2 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar7 = *param_1;
  if (lVar7 == 0) {
    if (*param_2 == 0) goto LAB_1402b2afc;
  }
  else if (*param_2 != 0) goto LAB_1402b2afc;
  if (iVar4 <= *param_6) goto LAB_1402b2afc;
  if ((char)param_1[1] == '\0') {
    if (lVar7 == 0) {
LAB_1402b2c0d:
      *param_1 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_1402b2c0d;
      *(char *)((longlong)param_1 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  cVar3 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                    (param_7,*(undefined1 *)((longlong)param_1 + 9),0);
  if (cVar3 != '0') goto LAB_1402b2afc;
  *param_6 = *param_6 + 1;
  lVar7 = *param_1;
  if (lVar7 == 0) {
LAB_1402b2a40:
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 0;
  }
  else {
    if (**(longlong **)(lVar7 + 0x38) == 0) {
LAB_1402b2a28:
      uVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar1 = **(int **)(lVar7 + 0x50);
      if (iVar1 < 1) goto LAB_1402b2a28;
      **(int **)(lVar7 + 0x50) = iVar1 + -1;
      pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
      **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
      uVar5 = (uint)*pbVar2;
    }
LAB_1402b2a35:
    if (uVar5 == 0xffffffff) goto LAB_1402b2a40;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  goto LAB_1402b2a50;
LAB_1402b2afc:
  if (0 < *param_6) {
    *pcVar9 = '0';
    pcVar9 = pcVar9 + 1;
  }
LAB_1402b2b08:
  if ((char)param_1[1] == '\0') {
    FUN_140097500(param_1);
  }
  if ((char)param_2[1] == '\0') {
    FUN_140097500(param_2);
  }
  if (*param_1 == 0) {
    if (*param_2 == 0) goto LAB_1402b2b3a;
  }
  else if (*param_2 != 0) goto LAB_1402b2b3a;
  if ((char)param_1[1] == '\0') {
    FUN_140097500(param_1);
  }
  cVar3 = (*(code *)PTR__guard_dispatch_icall_140426ae8)
                    (param_7,*(undefined1 *)((longlong)param_1 + 9),0);
  if ((9 < (byte)(cVar3 - 0x30U)) || (iVar1 = *param_6, iVar4 <= iVar1)) goto LAB_1402b2b3a;
  *pcVar9 = cVar3;
  if (pcVar9 < local_60 + 0x1f) {
    pcVar9 = pcVar9 + 1;
  }
  *param_6 = iVar1 + 1;
  lVar7 = *param_1;
  if (lVar7 == 0) {
LAB_1402b2d24:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
  }
  else {
    if (**(longlong **)(lVar7 + 0x38) == 0) {
LAB_1402b2d09:
      uVar5 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
    }
    else {
      iVar1 = **(int **)(lVar7 + 0x50);
      if (iVar1 < 1) goto LAB_1402b2d09;
      **(int **)(lVar7 + 0x50) = iVar1 + -1;
      pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
      **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
      uVar5 = (uint)*pbVar2;
    }
    if (uVar5 == 0xffffffff) goto LAB_1402b2d24;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  goto LAB_1402b2b08;
LAB_1402b2b3a:
  local_78 = 0;
  pcVar6 = local_60;
  if (*param_6 != 0) {
    pcVar6 = pcVar9;
  }
  *pcVar6 = '\0';
  iVar4 = FUN_140292770(local_60,&local_70,10,&local_78);
  if ((char)param_1[1] == '\0') {
    FUN_140097500(param_1);
  }
  if ((char)param_2[1] == '\0') {
    FUN_140097500(param_2);
  }
  if (*param_1 == 0) {
    if (*param_2 == 0) goto LAB_1402b2d3c;
  }
  else if (*param_2 != 0) goto LAB_1402b2d3c;
  uVar8 = 0;
LAB_1402b2d3c:
  if ((((local_70 == local_60) || (local_78 != 0)) || (iVar4 < local_74)) || (param_4 < iVar4)) {
    uVar8 = uVar8 | 2;
  }
  else {
    *local_68 = iVar4;
  }
  return uVar8;
}

