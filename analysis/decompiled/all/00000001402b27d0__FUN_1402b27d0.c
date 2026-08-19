// Function: FUN_1402b27d0
// Addr: 1402b27d0
// Size: 946 bytes


void FUN_1402b27d0(longlong *param_1,longlong *param_2,int param_3,int param_4,int *param_5,
                  int *param_6,longlong param_7)

{
  int iVar1;
  byte *pbVar2;
  char cVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  longlong lVar7;
  char *pcVar8;
  undefined1 auStack_98 [32];
  int iStack_78;
  int local_74;
  char *pcStack_70;
  int *local_68;
  char local_60 [32];
  ulonglong local_40;
  
  local_40 = DAT_1404dc110 ^ (ulonglong)auStack_98;
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
  pcVar8 = local_60;
  *param_6 = 0;
  local_74 = param_3;
LAB_1402b2866:
  if ((char)param_1[1] == '\0') {
    FUN_1400975d0(param_1);
  }
  if ((char)param_2[1] == '\0') {
    FUN_1400975d0(param_2);
  }
  lVar7 = *param_1;
  if (lVar7 == 0) {
    if (*param_2 == 0) goto LAB_1402b2892;
  }
  else if (*param_2 != 0) goto LAB_1402b2892;
  if (iVar4 <= *param_6) goto LAB_1402b2892;
  if ((char)param_1[1] == '\0') {
    FUN_1400975d0(param_1);
    lVar7 = *param_1;
  }
  if ((*(byte *)(*(longlong *)(param_7 + 0x18) + (ulonglong)*(byte *)((longlong)param_1 + 9) * 2) &
      0x48) == 0) goto LAB_1402b2892;
  if (lVar7 == 0) {
LAB_1402b2946:
    *param_1 = 0;
    *(undefined1 *)(param_1 + 1) = 1;
    *param_6 = *param_6 + 1;
  }
  else {
    if (**(longlong **)(lVar7 + 0x38) == 0) {
LAB_1402b2925:
      uVar5 = (*(code *)PTR_FUN_140426bb8)(lVar7);
    }
    else {
      iVar1 = **(int **)(lVar7 + 0x50);
      if (iVar1 < 1) goto LAB_1402b2925;
      **(int **)(lVar7 + 0x50) = iVar1 + -1;
      pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
      **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
      uVar5 = (uint)*pbVar2;
    }
    if (uVar5 == 0xffffffff) goto LAB_1402b2946;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_6 = *param_6 + 1;
  }
  goto LAB_1402b2866;
LAB_1402b2892:
  if ((char)param_1[1] == '\0') {
    if (lVar7 == 0) {
LAB_1402b2975:
      *param_1 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR_FUN_140426bb8)(lVar7);
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_1402b2975;
      *(char *)((longlong)param_1 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((char)param_2[1] == '\0') {
    lVar7 = *param_2;
    if (lVar7 == 0) {
LAB_1402b29bf:
      *param_2 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_1402b29bf;
      *(char *)((longlong)param_2 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar7 = *param_1;
  if (lVar7 == 0) {
    if (*param_2 == 0) goto LAB_1402b2b20;
  }
  else if (*param_2 != 0) goto LAB_1402b2b20;
  if (iVar4 <= *param_6) goto LAB_1402b2b20;
  if ((char)param_1[1] == '\0') {
    if (lVar7 == 0) {
LAB_1402b2a2d:
      *param_1 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_1402b2a2d;
      *(char *)((longlong)param_1 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  cVar3 = (*(code *)PTR_FUN_140426bb8)(param_7,*(undefined1 *)((longlong)param_1 + 9),0);
  if (cVar3 != '+') {
    if (cVar3 == '-') {
      lVar7 = *param_1;
      pcVar8 = local_60 + 1;
      local_60[0] = cVar3;
      if (lVar7 == 0) goto LAB_1402b2b10;
      if (**(longlong **)(lVar7 + 0x38) == 0) goto LAB_1402b2af8;
      iVar1 = **(int **)(lVar7 + 0x50);
      if (iVar1 < 1) goto LAB_1402b2af8;
      **(int **)(lVar7 + 0x50) = iVar1 + -1;
      pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
      **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
      uVar5 = (uint)*pbVar2;
      goto LAB_1402b2b05;
    }
    goto LAB_1402b2b20;
  }
  lVar7 = *param_1;
  pcVar8 = local_60 + 1;
  local_60[0] = cVar3;
  if (lVar7 != 0) {
    if (**(longlong **)(lVar7 + 0x38) == 0) {
LAB_1402b2a8f:
      uVar5 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar1 = **(int **)(lVar7 + 0x50);
      if (iVar1 < 1) goto LAB_1402b2a8f;
      **(int **)(lVar7 + 0x50) = iVar1 + -1;
      pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
      **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
      uVar5 = (uint)*pbVar2;
    }
    if (uVar5 != 0xffffffff) {
      *(undefined1 *)(param_1 + 1) = 0;
      goto LAB_1402b2b20;
    }
  }
  *param_1 = 0;
  *(undefined1 *)(param_1 + 1) = 1;
LAB_1402b2b20:
  if ((char)param_1[1] == '\0') {
    lVar7 = *param_1;
    if (lVar7 == 0) {
LAB_1402b2b5f:
      *param_1 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto LAB_1402b2b5f;
      *(char *)((longlong)param_1 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  if ((char)param_2[1] == '\0') {
    lVar7 = *param_2;
    if (lVar7 == 0) {
UNWIND_INFO_1402b2b82_UnwindCodes_17__UnwindOpCode:
      *param_2 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto UNWIND_INFO_1402b2b82_UnwindCodes_17__UnwindOpCode;
      *(char *)((longlong)param_2 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_2 + 1) = 1;
  }
  lVar7 = *param_1;
  if (lVar7 == 0) {
    if (*param_2 == 0) goto code_r0x0001402b2bcc;
  }
  else if (*param_2 != 0) goto code_r0x0001402b2bcc;
  if (iVar4 <= *param_6) goto code_r0x0001402b2bcc;
  if ((char)param_1[1] == '\0') {
    if (lVar7 == 0) {
code_r0x0001402b2cdd:
      *param_1 = 0;
    }
    else {
      if (((byte *)**(undefined8 **)(lVar7 + 0x38) == (byte *)0x0) || (**(int **)(lVar7 + 0x50) < 1)
         ) {
        uVar5 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        uVar5 = (uint)*(byte *)**(undefined8 **)(lVar7 + 0x38);
      }
      if (uVar5 == 0xffffffff) goto code_r0x0001402b2cdd;
      *(char *)((longlong)param_1 + 9) = (char)uVar5;
    }
    *(undefined1 *)(param_1 + 1) = 1;
  }
  cVar3 = (*(code *)PTR_FUN_140426bb8)(param_7,*(undefined1 *)((longlong)param_1 + 9),0);
  if (cVar3 != '0') goto code_r0x0001402b2bcc;
  *param_6 = *param_6 + 1;
  lVar7 = *param_1;
  if (lVar7 == 0) {
LAB_1402b2b10:
    *(undefined1 *)(param_1 + 1) = 1;
    *param_1 = 0;
  }
  else {
    if (**(longlong **)(lVar7 + 0x38) == 0) {
LAB_1402b2af8:
      uVar5 = (*(code *)PTR_FUN_140426bb8)();
    }
    else {
      iVar1 = **(int **)(lVar7 + 0x50);
      if (iVar1 < 1) goto LAB_1402b2af8;
      **(int **)(lVar7 + 0x50) = iVar1 + -1;
      pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
      **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
      uVar5 = (uint)*pbVar2;
    }
LAB_1402b2b05:
    if (uVar5 == 0xffffffff) goto LAB_1402b2b10;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  goto LAB_1402b2b20;
code_r0x0001402b2bcc:
  if (0 < *param_6) {
    *pcVar8 = '0';
    pcVar8 = pcVar8 + 1;
  }
  do {
    if ((char)param_1[1] == '\0') {
      FUN_1400975d0(param_1);
    }
    if ((char)param_2[1] == '\0') {
      FUN_1400975d0(param_2);
    }
    if (*param_1 == 0) {
      if (*param_2 == 0) goto code_r0x0001402b2c0a;
    }
    else if (*param_2 != 0) {
code_r0x0001402b2c0a:
      iStack_78 = 0;
      pcVar6 = local_60;
      if (*param_6 != 0) {
        pcVar6 = pcVar8;
      }
      *pcVar6 = '\0';
      iVar4 = FUN_140292840(local_60,&pcStack_70,10,&iStack_78);
      if ((char)param_1[1] == '\0') {
        FUN_1400975d0(param_1);
      }
      if ((char)param_2[1] == '\0') {
        FUN_1400975d0(param_2);
      }
      if ((((pcStack_70 != local_60) && (iStack_78 == 0)) && (local_74 <= iVar4)) &&
         (iVar4 <= param_4)) {
        *local_68 = iVar4;
      }
      func_0x0001402ed2f0(local_40 ^ (ulonglong)auStack_98);
      return;
    }
    if ((char)param_1[1] == '\0') {
      FUN_1400975d0(param_1);
    }
    cVar3 = (*(code *)PTR_FUN_140426bb8)(param_7,*(undefined1 *)((longlong)param_1 + 9),0);
    if ((9 < (byte)(cVar3 - 0x30U)) || (iVar1 = *param_6, iVar4 <= iVar1))
    goto code_r0x0001402b2c0a;
    *pcVar8 = cVar3;
    if (pcVar8 < local_60 + 0x1f) {
      pcVar8 = pcVar8 + 1;
    }
    *param_6 = iVar1 + 1;
    lVar7 = *param_1;
    if (lVar7 == 0) {
code_r0x0001402b2df4:
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 1;
    }
    else {
      if (**(longlong **)(lVar7 + 0x38) == 0) {
code_r0x0001402b2dd9:
        uVar5 = (*(code *)PTR_FUN_140426bb8)();
      }
      else {
        iVar1 = **(int **)(lVar7 + 0x50);
        if (iVar1 < 1) goto code_r0x0001402b2dd9;
        **(int **)(lVar7 + 0x50) = iVar1 + -1;
        pbVar2 = (byte *)**(longlong **)(lVar7 + 0x38);
        **(longlong **)(lVar7 + 0x38) = (longlong)(pbVar2 + 1);
        uVar5 = (uint)*pbVar2;
      }
      if (uVar5 == 0xffffffff) goto code_r0x0001402b2df4;
      *(undefined1 *)(param_1 + 1) = 0;
    }
  } while( true );
}

