// Function: FUN_1403da1c0
// Addr: 1403da1c0
// Size: 10106 bytes


undefined8 FUN_1403da1c0(char *param_1,ulonglong param_2,uint *param_3,undefined4 *param_4)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined *puVar9;
  longlong lVar10;
  longlong lVar11;
  uint uVar12;
  char *local_res8;
  
  if ((((6 < (longlong)(param_2 - (longlong)param_1)) &&
       (uVar4 = FUN_1402bbee0(param_1,0x2d), uVar4 != 0)) && (uVar4 < param_2)) &&
     (4 < (longlong)(param_2 - uVar4))) {
    cVar2 = FUN_14040c8f0(uVar4,param_2,"-fonnapa",8);
    if (cVar2 != '\0') {
      *param_4 = 0x41505048;
      *param_3 = 1;
      return 1;
    }
    cVar2 = FUN_14040c8f0(uVar4,param_2,"-polyton",8);
    if (cVar2 != '\0') {
      *param_4 = 0x50475220;
      *param_3 = 1;
      return 1;
    }
    cVar2 = FUN_14040c8f0(uVar4,param_2,"-arevmda",8);
    if (cVar2 != '\0') {
      *param_4 = 0x48594520;
      *param_3 = 1;
      return 1;
    }
    cVar2 = FUN_14040c8f0(uVar4,param_2,"-provenc",8);
    if (cVar2 != '\0') {
      *param_4 = 0x50524f20;
      *param_3 = 1;
      return 1;
    }
    cVar2 = FUN_14040c8f0(uVar4,param_2,"-fonipa",7);
    if (cVar2 != '\0') {
      *param_4 = 0x49505048;
      *param_3 = 1;
      return 1;
    }
    cVar2 = FUN_14040c8f0(uVar4,param_2,"-geok",5);
    if (cVar2 != '\0') {
      *param_4 = 0x4b474520;
      *param_3 = 1;
      return 1;
    }
    cVar2 = FUN_14040c8f0(uVar4,param_2,"-syre",5);
    if (cVar2 != '\0') {
      *param_4 = 0x53595245;
      *param_3 = 1;
      return 1;
    }
    cVar2 = FUN_14040c8f0(uVar4,param_2,"-syrj",5);
    if (cVar2 != '\0') {
      *param_4 = 0x5359524a;
      *param_3 = 1;
      return 1;
    }
    cVar2 = FUN_14040c8f0(uVar4,param_2,"-syrn",5);
    if (cVar2 != '\0') {
      *param_4 = 0x5359524e;
      *param_3 = 1;
      return 1;
    }
  }
  iVar3 = (int)param_2;
  switch(*param_1 + -0x61) {
  case 0:
    iVar3 = FUN_140421e50(param_1 + 1,"rt-lojban");
    if (iVar3 != 0) {
      return 0;
    }
    *param_4 = 0x4a424f20;
    *param_3 = 1;
    return 1;
  default:
    goto LAB_1403dc6b5;
  case 2:
    pcVar1 = param_1 + 1;
    uVar12 = iVar3 - (int)pcVar1;
    if (uVar12 < 10) {
      if (6 < uVar12) goto LAB_1403da4a7;
    }
    else {
      iVar3 = func_0x000140421dc0(pcVar1,"do-hant-hk",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc8ac;
      iVar3 = func_0x000140421dc0(pcVar1,"do-hant-mo",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar4 = 0;
        while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
          uVar12 = uVar12 + 1;
          param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
          uVar4 = (ulonglong)uVar12;
          if (1 < uVar12) {
            *param_3 = uVar12;
            return 1;
          }
        }
        goto LAB_1403dc91e;
      }
      iVar3 = func_0x000140421dc0(pcVar1,"jy-hant-hk",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc8ac;
      iVar3 = func_0x000140421dc0(pcVar1,"jy-hant-mo",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar4 = 0;
        while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
          uVar12 = uVar12 + 1;
          param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
          uVar4 = (ulonglong)uVar12;
          if (1 < uVar12) {
            *param_3 = uVar12;
            return 1;
          }
        }
        goto LAB_1403dc91e;
      }
      iVar3 = func_0x000140421dc0(pcVar1,"mn-hant-hk",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc8ac;
      iVar3 = func_0x000140421dc0(pcVar1,"mn-hant-mo",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar4 = 0;
        while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
          uVar12 = uVar12 + 1;
          param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
          uVar4 = (ulonglong)uVar12;
          if (1 < uVar12) {
            *param_3 = uVar12;
            return 1;
          }
        }
        goto LAB_1403dc91e;
      }
      iVar3 = func_0x000140421dc0(pcVar1,"np-hant-hk",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc8ac;
      iVar3 = func_0x000140421dc0(param_1 + 1,"np-hant-mo",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar4 = 0;
        while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
          uVar12 = uVar12 + 1;
          param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
          uVar4 = (ulonglong)uVar12;
          if (1 < uVar12) {
            *param_3 = uVar12;
            return 1;
          }
        }
        goto LAB_1403dc91e;
      }
      iVar3 = func_0x000140421dc0(param_1 + 1,"px-hant-hk",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc8ac;
      iVar3 = func_0x000140421dc0(param_1 + 1,"px-hant-mo",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar4 = 0;
        while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
          uVar12 = uVar12 + 1;
          param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
          uVar4 = (ulonglong)uVar12;
          if (1 < uVar12) {
            *param_3 = uVar12;
            return 1;
          }
        }
        goto LAB_1403dc91e;
      }
      iVar3 = func_0x000140421dc0(param_1 + 1,"sp-hant-hk",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc8ac;
      iVar3 = func_0x000140421dc0(param_1 + 1,"sp-hant-mo",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar4 = 0;
        while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
          uVar12 = uVar12 + 1;
          param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
          uVar4 = (ulonglong)uVar12;
          if (1 < uVar12) {
            *param_3 = uVar12;
            return 1;
          }
        }
        goto LAB_1403dc91e;
      }
      iVar3 = func_0x000140421dc0(param_1 + 1,"zh-hant-hk",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc8ac;
      iVar3 = func_0x000140421dc0(param_1 + 1,"zh-hant-mo",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar4 = 0;
        while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
          uVar12 = uVar12 + 1;
          param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
          uVar4 = (ulonglong)uVar12;
          if (1 < uVar12) {
            *param_3 = uVar12;
            return 1;
          }
        }
        goto LAB_1403dc91e;
      }
      iVar3 = func_0x000140421dc0(param_1 + 1,"zo-hant-hk",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc8ac;
      iVar3 = func_0x000140421dc0(param_1 + 1,"zo-hant-mo",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar4 = 0;
        while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
          uVar12 = uVar12 + 1;
          param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
          uVar4 = (ulonglong)uVar12;
          if (1 < uVar12) {
            *param_3 = uVar12;
            return 1;
          }
        }
        goto LAB_1403dc91e;
      }
LAB_1403da4a7:
      iVar3 = func_0x000140421dc0(param_1 + 1,"do-hans",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) {
LAB_1403db7aa:
        *param_4 = 0x5a485320;
        *param_3 = 1;
        return 1;
      }
      iVar3 = func_0x000140421dc0(param_1 + 1,"do-hant",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc964;
      iVar3 = func_0x000140421dc0(param_1 + 1,"jy-hans",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db7aa;
      iVar3 = func_0x000140421dc0(param_1 + 1,"jy-hant",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc964;
      iVar3 = func_0x000140421dc0(param_1 + 1,"mn-hans",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db7aa;
      iVar3 = func_0x000140421dc0(param_1 + 1,"mn-hant",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc964;
      iVar3 = func_0x000140421dc0(param_1 + 1,"np-hans",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db7aa;
      iVar3 = func_0x000140421dc0(param_1 + 1,"np-hant",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc964;
      iVar3 = func_0x000140421dc0(param_1 + 1,"px-hans",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db7aa;
      iVar3 = func_0x000140421dc0(param_1 + 1,"px-hant",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc964;
      iVar3 = func_0x000140421dc0(param_1 + 1,"sp-hans",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db7aa;
      iVar3 = func_0x000140421dc0(param_1 + 1,"sp-hant",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc964;
      iVar3 = func_0x000140421dc0(param_1 + 1,"zh-hans",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db7aa;
      iVar3 = func_0x000140421dc0(param_1 + 1,"zh-hant",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc964;
      iVar3 = func_0x000140421dc0(param_1 + 1,"zo-hans",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db7aa;
      iVar3 = func_0x000140421dc0(param_1 + 1,"zo-hant",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc964;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471450,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471454,3), cVar2 != '\0')) {
LAB_1403dc8ac:
      *param_4 = 0x5a484820;
      *param_3 = 1;
      return 1;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471450,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471458,3), cVar2 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar4 = 0;
      while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
        uVar12 = uVar12 + 1;
        param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
        uVar4 = (ulonglong)uVar12;
        if (1 < uVar12) {
          *param_3 = uVar12;
          return 1;
        }
      }
      goto LAB_1403dc91e;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471450,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_14047145c,3), cVar2 != '\0'))
    goto LAB_1403dc964;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471460,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471454,3), cVar2 != '\0'))
    goto LAB_1403dc8ac;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471460,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471458,3), cVar2 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar4 = 0;
      while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
        uVar12 = uVar12 + 1;
        param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
        uVar4 = (ulonglong)uVar12;
        if (1 < uVar12) {
          *param_3 = uVar12;
          return 1;
        }
      }
      goto LAB_1403dc91e;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471460,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_14047145c,3), cVar2 != '\0'))
    goto LAB_1403dc964;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471464,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471454,3), cVar2 != '\0'))
    goto LAB_1403dc8ac;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471464,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471458,3), cVar2 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar4 = 0;
      while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
        uVar12 = uVar12 + 1;
        param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
        uVar4 = (ulonglong)uVar12;
        if (1 < uVar12) {
          *param_3 = uVar12;
          return 1;
        }
      }
      goto LAB_1403dc91e;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471464,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_14047145c,3), cVar2 != '\0'))
    goto LAB_1403dc964;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471468,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471454,3), cVar2 != '\0'))
    goto LAB_1403dc8ac;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471468,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471458,3), cVar2 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar4 = 0;
      while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
        uVar12 = uVar12 + 1;
        param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
        uVar4 = (ulonglong)uVar12;
        if (1 < uVar12) {
          *param_3 = uVar12;
          return 1;
        }
      }
      goto LAB_1403dc91e;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471468,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_14047145c,3), cVar2 != '\0'))
    goto LAB_1403dc964;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_14047146c,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471454,3), cVar2 != '\0'))
    goto LAB_1403dc8ac;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_14047146c,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471458,3), cVar2 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar4 = 0;
      while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
        uVar12 = uVar12 + 1;
        param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
        uVar4 = (ulonglong)uVar12;
        if (1 < uVar12) {
          *param_3 = uVar12;
          return 1;
        }
      }
      goto LAB_1403dc91e;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_14047146c,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_14047145c,3), cVar2 != '\0'))
    goto LAB_1403dc964;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471470,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471454,3), cVar2 != '\0'))
    goto LAB_1403dc8ac;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471470,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471458,3), cVar2 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar4 = 0;
      while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
        uVar12 = uVar12 + 1;
        param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
        uVar4 = (ulonglong)uVar12;
        if (1 < uVar12) {
          *param_3 = uVar12;
          return 1;
        }
      }
      goto LAB_1403dc91e;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471470,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_14047145c,3), cVar2 != '\0'))
    goto LAB_1403dc964;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471474,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471454,3), cVar2 != '\0'))
    goto LAB_1403dc8ac;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471474,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471458,3), cVar2 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar4 = 0;
      while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
        uVar12 = uVar12 + 1;
        param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
        uVar4 = (ulonglong)uVar12;
        if (1 < uVar12) {
          *param_3 = uVar12;
          return 1;
        }
      }
      goto LAB_1403dc91e;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471474,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_14047145c,3), cVar2 != '\0'))
    goto LAB_1403dc964;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471478,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471454,3), cVar2 != '\0'))
    goto LAB_1403dc8ac;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471478,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471458,3), cVar2 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar4 = 0;
      while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
        uVar12 = uVar12 + 1;
        param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
        uVar4 = (ulonglong)uVar12;
        if (1 < uVar12) {
          *param_3 = uVar12;
          return 1;
        }
      }
      goto LAB_1403dc91e;
    }
    puVar9 = &DAT_140471478;
    break;
  case 6:
    pcVar1 = param_1 + 1;
    uVar12 = iVar3 - (int)pcVar1;
    if (uVar12 < 10) {
      if (6 < uVar12) goto LAB_1403db3d0;
      if (5 < uVar12) goto LAB_1403db433;
    }
    else {
      iVar3 = func_0x000140421dc0(pcVar1,"an-hant-hk",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc8ac;
      iVar3 = func_0x000140421dc0(pcVar1,"an-hant-mo",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar4 = 0;
        while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
          uVar12 = uVar12 + 1;
          param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
          uVar4 = (ulonglong)uVar12;
          if (1 < uVar12) {
            *param_3 = uVar12;
            return 1;
          }
        }
        goto LAB_1403dc91e;
      }
LAB_1403db3d0:
      local_res8 = param_1 + 1;
      iVar3 = func_0x000140421dc0(local_res8,"an-hans",7);
      if ((iVar3 == 0) && ((cVar2 = param_1[8], cVar2 == '\0' || (cVar2 == '-'))))
      goto LAB_1403db7aa;
      iVar3 = func_0x000140421dc0(local_res8,"an-hant",7);
      if ((iVar3 == 0) && ((cVar2 = param_1[8], cVar2 == '\0' || (cVar2 == '-'))))
      goto LAB_1403dc964;
LAB_1403db433:
      iVar3 = func_0x000140421dc0(param_1 + 1,"a-latg",6);
      if ((iVar3 == 0) && ((param_1[7] == '\0' || (param_1[7] == '-')))) {
        *param_4 = 0x49525420;
        *param_3 = 1;
        return 1;
      }
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_1404714b8,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471454,3), cVar2 != '\0'))
    goto LAB_1403dc8ac;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_1404714b8,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471458,3), cVar2 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar4 = 0;
      while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
        uVar12 = uVar12 + 1;
        param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
        uVar4 = (ulonglong)uVar12;
        if (1 < uVar12) {
          *param_3 = uVar12;
          return 1;
        }
      }
      goto LAB_1403dc91e;
    }
    puVar9 = &DAT_1404714b8;
    break;
  case 7:
    pcVar1 = param_1 + 1;
    uVar12 = iVar3 - (int)pcVar1;
    if (uVar12 < 10) {
      if (6 < uVar12) goto LAB_1403db725;
    }
    else {
      iVar3 = func_0x000140421dc0(pcVar1,"ak-hant-hk",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc8ac;
      iVar3 = func_0x000140421dc0(pcVar1,"ak-hant-mo",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar4 = 0;
        while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
          uVar12 = uVar12 + 1;
          param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
          uVar4 = (ulonglong)uVar12;
          if (1 < uVar12) {
            *param_3 = uVar12;
            return 1;
          }
        }
        goto LAB_1403dc91e;
      }
      iVar3 = func_0x000140421dc0(param_1 + 1,"nm-hant-hk",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc8ac;
      iVar3 = func_0x000140421dc0(param_1 + 1,"nm-hant-mo",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar4 = 0;
        while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
          uVar12 = uVar12 + 1;
          param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
          uVar4 = (ulonglong)uVar12;
          if (1 < uVar12) {
            *param_3 = uVar12;
            return 1;
          }
        }
        goto LAB_1403dc91e;
      }
      iVar3 = func_0x000140421dc0(param_1 + 1,"sn-hant-hk",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc8ac;
      iVar3 = func_0x000140421dc0(param_1 + 1,"sn-hant-mo",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar4 = 0;
        while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
          uVar12 = uVar12 + 1;
          param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
          uVar4 = (ulonglong)uVar12;
          if (1 < uVar12) {
            *param_3 = uVar12;
            return 1;
          }
        }
        goto LAB_1403dc91e;
      }
LAB_1403db725:
      local_res8 = param_1 + 1;
      iVar3 = func_0x000140421dc0(local_res8,"ak-hans",7);
      if ((iVar3 == 0) && ((cVar2 = param_1[8], cVar2 == '\0' || (cVar2 == '-'))))
      goto LAB_1403db7aa;
      iVar3 = func_0x000140421dc0(local_res8,"ak-hant",7);
      if ((iVar3 == 0) && ((cVar2 = param_1[8], cVar2 == '\0' || (cVar2 == '-'))))
      goto LAB_1403dc964;
      iVar3 = func_0x000140421dc0(param_1 + 1,"nm-hans",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db7aa;
      iVar3 = func_0x000140421dc0(param_1 + 1,"nm-hant",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc964;
      iVar3 = func_0x000140421dc0(param_1 + 1,"sn-hans",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db7aa;
      iVar3 = func_0x000140421dc0(param_1 + 1,"sn-hant",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc964;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471550,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471454,3), cVar2 != '\0'))
    goto LAB_1403dc8ac;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471550,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471458,3), cVar2 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar4 = 0;
      while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
        uVar12 = uVar12 + 1;
        param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
        uVar4 = (ulonglong)uVar12;
        if (1 < uVar12) {
          *param_3 = uVar12;
          return 1;
        }
      }
      goto LAB_1403dc91e;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471550,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_14047145c,3), cVar2 != '\0'))
    goto LAB_1403dc964;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471554,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471454,3), cVar2 != '\0'))
    goto LAB_1403dc8ac;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471554,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471458,3), cVar2 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar4 = 0;
      while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
        uVar12 = uVar12 + 1;
        param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
        uVar4 = (ulonglong)uVar12;
        if (1 < uVar12) {
          *param_3 = uVar12;
          return 1;
        }
      }
      goto LAB_1403dc91e;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471554,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_14047145c,3), cVar2 != '\0'))
    goto LAB_1403dc964;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471558,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471454,3), cVar2 != '\0'))
    goto LAB_1403dc8ac;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471558,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471458,3), cVar2 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar4 = 0;
      while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
        uVar12 = uVar12 + 1;
        param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
        uVar4 = (ulonglong)uVar12;
        if (1 < uVar12) {
          *param_3 = uVar12;
          return 1;
        }
      }
      goto LAB_1403dc91e;
    }
    puVar9 = &DAT_140471558;
    break;
  case 8:
    uVar8 = 0;
    uVar4 = uVar8;
    do {
      uVar5 = uVar4 + 1;
      uVar6 = uVar8;
      if (param_1[uVar4 + 1] != (&DAT_140471560)[uVar4]) {
        while (uVar4 = uVar6 + 1, param_1[uVar6 + 1] == (&DAT_140471568)[uVar6]) {
          uVar6 = uVar4;
          if (uVar4 == 5) {
            *param_4 = 0x5a485320;
            *param_3 = 1;
            return 1;
          }
        }
        do {
          uVar4 = uVar8 + 1;
          if (param_1[uVar8 + 1] != (&DAT_140471570)[uVar8]) {
            return 0;
          }
          uVar8 = uVar4;
        } while (uVar4 != 5);
        *param_4 = 0x4c545a20;
        *param_3 = 1;
        return 1;
      }
      uVar4 = uVar5;
    } while (uVar5 != 8);
    local_res8 = (char *)0x415448204e415620;
    while (uVar12 = (uint)uVar8, uVar12 < *param_3) {
      uVar12 = uVar12 + 1;
      param_4[uVar8] = *(undefined4 *)((longlong)&local_res8 + uVar8 * 4);
      uVar8 = (ulonglong)uVar12;
      if (1 < uVar12) {
        *param_3 = uVar12;
        return 1;
      }
    }
    goto LAB_1403dc91e;
  case 0xb:
    pcVar1 = param_1 + 1;
    uVar12 = iVar3 - (int)pcVar1;
    if (uVar12 < 10) {
      if (6 < uVar12) goto LAB_1403dbc50;
    }
    else {
      iVar3 = func_0x000140421dc0(pcVar1,"uh-hant-hk",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc8ac;
      iVar3 = func_0x000140421dc0(pcVar1,"uh-hant-mo",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar4 = 0;
        while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
          uVar12 = uVar12 + 1;
          param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
          uVar4 = (ulonglong)uVar12;
          if (1 < uVar12) {
            *param_3 = uVar12;
            return 1;
          }
        }
        goto LAB_1403dc91e;
      }
LAB_1403dbc50:
      local_res8 = param_1 + 1;
      iVar3 = func_0x000140421dc0(local_res8,"uh-hans",7);
      if ((iVar3 == 0) && ((cVar2 = param_1[8], cVar2 == '\0' || (cVar2 == '-'))))
      goto LAB_1403db7aa;
      iVar3 = func_0x000140421dc0(local_res8,"uh-hant",7);
      if ((iVar3 == 0) && ((cVar2 = param_1[8], cVar2 == '\0' || (cVar2 == '-'))))
      goto LAB_1403dc964;
      iVar3 = func_0x000140421dc0(param_1 + 1,"zh-hans",7);
      if ((iVar3 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db7aa;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_1404715a8,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471454,3), cVar2 != '\0'))
    goto LAB_1403dc8ac;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_1404715a8,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471458,3), cVar2 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar4 = 0;
      while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
        uVar12 = uVar12 + 1;
        param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
        uVar4 = (ulonglong)uVar12;
        if (1 < uVar12) {
          *param_3 = uVar12;
          return 1;
        }
      }
      goto LAB_1403dc91e;
    }
    puVar9 = &DAT_1404715a8;
    break;
  case 0xc:
    pcVar1 = param_1 + 1;
    uVar12 = iVar3 - (int)pcVar1;
    if (uVar12 < 10) {
      if (6 < uVar12) goto LAB_1403dbe57;
    }
    else {
      iVar3 = func_0x000140421dc0(pcVar1,"np-hant-hk",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc8ac;
      iVar3 = func_0x000140421dc0(pcVar1,"np-hant-mo",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar4 = 0;
        while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
          uVar12 = uVar12 + 1;
          param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
          uVar4 = (ulonglong)uVar12;
          if (1 < uVar12) {
            *param_3 = uVar12;
            return 1;
          }
        }
        goto LAB_1403dc91e;
      }
LAB_1403dbe57:
      local_res8 = param_1 + 1;
      iVar3 = func_0x000140421dc0(local_res8,"np-hans",7);
      if ((iVar3 == 0) && ((cVar2 = param_1[8], cVar2 == '\0' || (cVar2 == '-'))))
      goto LAB_1403db7aa;
      iVar3 = func_0x000140421dc0(local_res8,"np-hant",7);
      if ((iVar3 == 0) && ((cVar2 = param_1[8], cVar2 == '\0' || (cVar2 == '-'))))
      goto LAB_1403dc964;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471468,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471454,3), cVar2 != '\0'))
    goto LAB_1403dc8ac;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471468,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471458,3), cVar2 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar4 = 0;
      while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
        uVar12 = uVar12 + 1;
        param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
        uVar4 = (ulonglong)uVar12;
        if (1 < uVar12) {
          *param_3 = uVar12;
          return 1;
        }
      }
      goto LAB_1403dc91e;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471468,3);
    if ((iVar3 != 0) || (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_14047145c,3), cVar2 == '\0')) {
      iVar3 = func_0x000140421dc0(pcVar1,&DAT_1404715ac,3);
      if (iVar3 != 0) {
        return 0;
      }
      cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_1404715b0,3);
      if (cVar2 == '\0') {
        return 0;
      }
      *param_4 = 0x4d4f4e54;
      *param_3 = 1;
      return 1;
    }
    goto LAB_1403dc964;
  case 0xd:
    pcVar1 = param_1 + 1;
    uVar12 = iVar3 - (int)pcVar1;
    if (uVar12 < 10) {
      if (6 < uVar12) goto LAB_1403dc0b0;
    }
    else {
      iVar3 = func_0x000140421dc0(pcVar1,"an-hant-hk",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc8ac;
      iVar3 = func_0x000140421dc0(pcVar1,"an-hant-mo",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar4 = 0;
        while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
          uVar12 = uVar12 + 1;
          param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
          uVar4 = (ulonglong)uVar12;
          if (1 < uVar12) {
            *param_3 = uVar12;
            return 1;
          }
        }
        goto LAB_1403dc91e;
      }
LAB_1403dc0b0:
      local_res8 = param_1 + 1;
      iVar3 = func_0x000140421dc0(local_res8,"an-hans",7);
      if ((iVar3 == 0) && ((cVar2 = param_1[8], cVar2 == '\0' || (cVar2 == '-'))))
      goto LAB_1403db7aa;
      iVar3 = func_0x000140421dc0(local_res8,"an-hant",7);
      if ((iVar3 == 0) && ((cVar2 = param_1[8], cVar2 == '\0' || (cVar2 == '-'))))
      goto LAB_1403dc964;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_1404714b8,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471454,3), cVar2 != '\0'))
    goto LAB_1403dc8ac;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_1404714b8,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471458,3), cVar2 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar4 = 0;
      while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
        uVar12 = uVar12 + 1;
        param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
        uVar4 = (ulonglong)uVar12;
        if (1 < uVar12) {
          *param_3 = uVar12;
          return 1;
        }
      }
      goto LAB_1403dc91e;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_1404714b8,3);
    if ((iVar3 != 0) || (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_14047145c,3), cVar2 == '\0')) {
      lVar10 = 0;
      lVar11 = lVar10;
      while (lVar7 = lVar11 + 1, pcVar1[lVar11] == (&DAT_1404715b4)[lVar11]) {
        lVar11 = lVar7;
        if (lVar7 == 6) {
          *param_4 = 0x4e4f5220;
          *param_3 = 1;
          return 1;
        }
      }
      do {
        lVar11 = lVar10 + 1;
        if (pcVar1[lVar10] != (&DAT_1404715bc)[lVar10]) {
          return 0;
        }
        lVar10 = lVar11;
      } while (lVar11 != 6);
      *param_4 = 0x4e594e20;
      *param_3 = 1;
      return 1;
    }
    goto LAB_1403dc964;
  case 0x11:
    iVar3 = func_0x000140421dc0(param_1 + 1,&DAT_1404715c4,2);
    if (iVar3 != 0) {
      return 0;
    }
    cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_1404715c8,3);
    if (cVar2 == '\0') {
      return 0;
    }
    local_res8 = (char *)0x524f4d204d4f4c20;
    uVar4 = 0;
    while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
      uVar12 = uVar12 + 1;
      param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
      uVar4 = (ulonglong)uVar12;
      if (1 < uVar12) {
        *param_3 = uVar12;
        return 1;
      }
    }
LAB_1403dc91e:
    *param_3 = uVar12;
    return 1;
  case 0x12:
    pcVar1 = param_1 + 1;
    uVar12 = iVar3 - (int)pcVar1;
    if (uVar12 < 10) {
      if (6 < uVar12) goto LAB_1403dc3a0;
    }
    else {
      iVar3 = func_0x000140421dc0(pcVar1,"jc-hant-hk",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc8ac;
      iVar3 = func_0x000140421dc0(pcVar1,"jc-hant-mo",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar4 = 0;
        while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
          uVar12 = uVar12 + 1;
          param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
          uVar4 = (ulonglong)uVar12;
          if (1 < uVar12) {
            *param_3 = uVar12;
            return 1;
          }
        }
        goto LAB_1403dc91e;
      }
LAB_1403dc3a0:
      local_res8 = param_1 + 1;
      iVar3 = func_0x000140421dc0(local_res8,"jc-hans",7);
      if ((iVar3 == 0) && ((cVar2 = param_1[8], cVar2 == '\0' || (cVar2 == '-'))))
      goto LAB_1403db7aa;
      iVar3 = func_0x000140421dc0(local_res8,"jc-hant",7);
      if ((iVar3 == 0) && ((cVar2 = param_1[8], cVar2 == '\0' || (cVar2 == '-'))))
      goto LAB_1403dc964;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471600,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471454,3), cVar2 != '\0'))
    goto LAB_1403dc8ac;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471600,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471458,3), cVar2 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar4 = 0;
      while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
        uVar12 = uVar12 + 1;
        param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
        uVar4 = (ulonglong)uVar12;
        if (1 < uVar12) {
          *param_3 = uVar12;
          return 1;
        }
      }
      goto LAB_1403dc91e;
    }
    puVar9 = &DAT_140471600;
    break;
  case 0x16:
    pcVar1 = param_1 + 1;
    uVar12 = iVar3 - (int)pcVar1;
    if (uVar12 < 10) {
      if (6 < uVar12) goto LAB_1403dc577;
    }
    else {
      iVar3 = func_0x000140421dc0(pcVar1,"uu-hant-hk",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc8ac;
      iVar3 = func_0x000140421dc0(pcVar1,"uu-hant-mo",10);
      if ((iVar3 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar4 = 0;
        while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
          uVar12 = uVar12 + 1;
          param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
          uVar4 = (ulonglong)uVar12;
          if (1 < uVar12) {
            *param_3 = uVar12;
            return 1;
          }
        }
        goto LAB_1403dc91e;
      }
LAB_1403dc577:
      local_res8 = param_1 + 1;
      iVar3 = func_0x000140421dc0(local_res8,"uu-hans",7);
      if ((iVar3 == 0) && ((cVar2 = param_1[8], cVar2 == '\0' || (cVar2 == '-'))))
      goto LAB_1403db7aa;
      iVar3 = func_0x000140421dc0(local_res8,"uu-hant",7);
      if ((iVar3 == 0) && ((cVar2 = param_1[8], cVar2 == '\0' || (cVar2 == '-'))))
      goto LAB_1403dc964;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471638,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471454,3), cVar2 != '\0'))
    goto LAB_1403dc8ac;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_140471638,3);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471458,3), cVar2 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar4 = 0;
      while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
        uVar12 = uVar12 + 1;
        param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
        uVar4 = (ulonglong)uVar12;
        if (1 < uVar12) {
          *param_3 = uVar12;
          return 1;
        }
      }
      goto LAB_1403dc91e;
    }
    puVar9 = &DAT_140471638;
    break;
  case 0x18:
    if ((uint)(iVar3 - (int)(param_1 + 1)) < 7) {
      return 0;
    }
    iVar3 = func_0x000140421dc0(param_1 + 1,"ue-hans",7);
    if (iVar3 != 0) {
      return 0;
    }
    if (param_1[8] != '\0') {
      if (param_1[8] != '-') {
        return 0;
      }
      *param_4 = 0x5a485320;
      *param_3 = 1;
      return 1;
    }
    goto LAB_1403db7aa;
  case 0x19:
    pcVar1 = param_1 + 1;
    uVar12 = iVar3 - (int)pcVar1;
    if (8 < uVar12) {
      iVar3 = func_0x000140421dc0(pcVar1,"h-hant-hk",9);
      if ((iVar3 == 0) && ((param_1[10] == '\0' || (param_1[10] == '-')))) goto LAB_1403dc8ac;
      iVar3 = func_0x000140421dc0(pcVar1,"h-hant-mo",9);
      if ((iVar3 == 0) && ((param_1[10] == '\0' || (param_1[10] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar4 = 0;
        while (uVar12 = (uint)uVar4, uVar12 < *param_3) {
          uVar12 = uVar12 + 1;
          param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
          uVar4 = (ulonglong)uVar12;
          if (1 < uVar12) {
            *param_3 = uVar12;
            return 1;
          }
        }
        goto LAB_1403dc91e;
      }
    }
    iVar3 = FUN_140421e50(pcVar1,"h-min-nan");
    if (iVar3 == 0) goto LAB_1403db7aa;
    if (5 < uVar12) {
      iVar3 = func_0x000140421dc0(param_1 + 1,"h-hans",6);
      if ((iVar3 == 0) && ((param_1[7] == '\0' || (param_1[7] == '-')))) goto LAB_1403db7aa;
      iVar3 = func_0x000140421dc0(param_1 + 1,"h-hant",6);
      if ((iVar3 == 0) && ((param_1[7] == '\0' || (param_1[7] == '-')))) goto LAB_1403dc964;
    }
    uVar4 = 0;
    while (uVar8 = uVar4 + 1, pcVar1[uVar4] == "h-min"[uVar4]) {
      uVar4 = uVar8;
      if (uVar8 == 6) {
        *param_4 = 0x5a485320;
        *param_3 = 1;
        return 1;
      }
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_14047168c,2);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471454,3), cVar2 != '\0'))
    goto LAB_1403dc8ac;
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_14047168c,2);
    if ((iVar3 == 0) && (cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_140471458,3), cVar2 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar4 = 0;
      do {
        uVar12 = (uint)uVar4;
        if (*param_3 <= uVar12) break;
        uVar12 = uVar12 + 1;
        param_4[uVar4] = *(undefined4 *)((longlong)&local_res8 + uVar4 * 4);
        uVar4 = (ulonglong)uVar12;
      } while (uVar12 < 2);
      goto LAB_1403dc91e;
    }
    iVar3 = func_0x000140421dc0(pcVar1,&DAT_14047168c,2);
    if (iVar3 != 0) {
      return 0;
    }
    cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_14047145c,3);
    goto joined_r0x0001403dc95e;
  }
  iVar3 = func_0x000140421dc0(param_1 + 1,puVar9,3);
  if (iVar3 == 0) {
    cVar2 = FUN_14040c8f0(param_1,param_2,&DAT_14047145c,3);
joined_r0x0001403dc95e:
    if (cVar2 != '\0') {
LAB_1403dc964:
      *param_4 = 0x5a485420;
      *param_3 = 1;
      return 1;
    }
  }
LAB_1403dc6b5:
  return 0;
}

