// Function: FUN_1403da0f0
// Addr: 1403da0f0
// Size: 10167 bytes


undefined8 FUN_1403da0f0(char *param_1,ulonglong param_2,uint *param_3,undefined4 *param_4)

{
  char cVar1;
  int iVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  ulonglong uVar5;
  longlong lVar6;
  ulonglong uVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  uint uVar11;
  char *local_res8;
  
  if ((((6 < (longlong)(param_2 - (longlong)param_1)) &&
       (uVar3 = FUN_1402bbe10(param_1,0x2d), uVar3 != 0)) && (uVar3 < param_2)) &&
     (4 < (longlong)(param_2 - uVar3))) {
    cVar1 = FUN_14040c820(uVar3,param_2,"-fonnapa",8);
    if (cVar1 != '\0') {
      *param_4 = 0x41505048;
      *param_3 = 1;
      return 1;
    }
    cVar1 = FUN_14040c820(uVar3,param_2,"-polyton",8);
    if (cVar1 != '\0') {
      *param_4 = 0x50475220;
      *param_3 = 1;
      return 1;
    }
    cVar1 = FUN_14040c820(uVar3,param_2,"-arevmda",8);
    if (cVar1 != '\0') {
      *param_4 = 0x48594520;
      *param_3 = 1;
      return 1;
    }
    cVar1 = FUN_14040c820(uVar3,param_2,"-provenc",8);
    if (cVar1 != '\0') {
      *param_4 = 0x50524f20;
      *param_3 = 1;
      return 1;
    }
    cVar1 = FUN_14040c820(uVar3,param_2,"-fonipa",7);
    if (cVar1 != '\0') {
      *param_4 = 0x49505048;
      *param_3 = 1;
      return 1;
    }
    cVar1 = FUN_14040c820(uVar3,param_2,"-geok",5);
    if (cVar1 != '\0') {
      *param_4 = 0x4b474520;
      *param_3 = 1;
      return 1;
    }
    cVar1 = FUN_14040c820(uVar3,param_2,"-syre",5);
    if (cVar1 != '\0') {
      *param_4 = 0x53595245;
      *param_3 = 1;
      return 1;
    }
    cVar1 = FUN_14040c820(uVar3,param_2,"-syrj",5);
    if (cVar1 != '\0') {
      *param_4 = 0x5359524a;
      *param_3 = 1;
      return 1;
    }
    cVar1 = FUN_14040c820(uVar3,param_2,"-syrn",5);
    if (cVar1 != '\0') {
      *param_4 = 0x5359524e;
      *param_3 = 1;
      return 1;
    }
  }
  iVar2 = (int)param_2;
  switch(*param_1 + -0x61) {
  case 0:
    iVar2 = strcmp(param_1 + 1,"rt-lojban");
    if (iVar2 != 0) {
      return 0;
    }
    *param_4 = 0x4a424f20;
    *param_3 = 1;
    return 1;
  default:
    goto LAB_1403dc5e5;
  case 2:
    pcVar8 = param_1 + 1;
    uVar11 = iVar2 - (int)pcVar8;
    if (uVar11 < 10) {
      if (6 < uVar11) goto LAB_1403da3d7;
    }
    else {
      iVar2 = strncmp(pcVar8,"do-hant-hk",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc7dc;
      iVar2 = strncmp(pcVar8,"do-hant-mo",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar3 = 0;
        while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
          uVar11 = uVar11 + 1;
          param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
          uVar3 = (ulonglong)uVar11;
          if (1 < uVar11) {
            *param_3 = uVar11;
            return 1;
          }
        }
        goto LAB_1403dc84e;
      }
      iVar2 = strncmp(pcVar8,"jy-hant-hk",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc7dc;
      iVar2 = strncmp(pcVar8,"jy-hant-mo",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar3 = 0;
        while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
          uVar11 = uVar11 + 1;
          param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
          uVar3 = (ulonglong)uVar11;
          if (1 < uVar11) {
            *param_3 = uVar11;
            return 1;
          }
        }
        goto LAB_1403dc84e;
      }
      iVar2 = strncmp(pcVar8,"mn-hant-hk",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc7dc;
      iVar2 = strncmp(pcVar8,"mn-hant-mo",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar3 = 0;
        while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
          uVar11 = uVar11 + 1;
          param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
          uVar3 = (ulonglong)uVar11;
          if (1 < uVar11) {
            *param_3 = uVar11;
            return 1;
          }
        }
        goto LAB_1403dc84e;
      }
      iVar2 = strncmp(pcVar8,"np-hant-hk",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc7dc;
      iVar2 = strncmp(param_1 + 1,"np-hant-mo",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar3 = 0;
        while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
          uVar11 = uVar11 + 1;
          param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
          uVar3 = (ulonglong)uVar11;
          if (1 < uVar11) {
            *param_3 = uVar11;
            return 1;
          }
        }
        goto LAB_1403dc84e;
      }
      iVar2 = strncmp(param_1 + 1,"px-hant-hk",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc7dc;
      iVar2 = strncmp(param_1 + 1,"px-hant-mo",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar3 = 0;
        while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
          uVar11 = uVar11 + 1;
          param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
          uVar3 = (ulonglong)uVar11;
          if (1 < uVar11) {
            *param_3 = uVar11;
            return 1;
          }
        }
        goto LAB_1403dc84e;
      }
      iVar2 = strncmp(param_1 + 1,"sp-hant-hk",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc7dc;
      iVar2 = strncmp(param_1 + 1,"sp-hant-mo",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar3 = 0;
        while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
          uVar11 = uVar11 + 1;
          param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
          uVar3 = (ulonglong)uVar11;
          if (1 < uVar11) {
            *param_3 = uVar11;
            return 1;
          }
        }
        goto LAB_1403dc84e;
      }
      iVar2 = strncmp(param_1 + 1,"zh-hant-hk",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc7dc;
      iVar2 = strncmp(param_1 + 1,"zh-hant-mo",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar3 = 0;
        while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
          uVar11 = uVar11 + 1;
          param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
          uVar3 = (ulonglong)uVar11;
          if (1 < uVar11) {
            *param_3 = uVar11;
            return 1;
          }
        }
        goto LAB_1403dc84e;
      }
      iVar2 = strncmp(param_1 + 1,"zo-hant-hk",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc7dc;
      iVar2 = strncmp(param_1 + 1,"zo-hant-mo",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar3 = 0;
        while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
          uVar11 = uVar11 + 1;
          param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
          uVar3 = (ulonglong)uVar11;
          if (1 < uVar11) {
            *param_3 = uVar11;
            return 1;
          }
        }
        goto LAB_1403dc84e;
      }
LAB_1403da3d7:
      iVar2 = strncmp(param_1 + 1,"do-hans",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) {
LAB_1403db6da:
        *param_4 = 0x5a485320;
        *param_3 = 1;
        return 1;
      }
      iVar2 = strncmp(param_1 + 1,"do-hant",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc894;
      iVar2 = strncmp(param_1 + 1,"jy-hans",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db6da;
      iVar2 = strncmp(param_1 + 1,"jy-hant",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc894;
      iVar2 = strncmp(param_1 + 1,"mn-hans",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db6da;
      iVar2 = strncmp(param_1 + 1,"mn-hant",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc894;
      iVar2 = strncmp(param_1 + 1,"np-hans",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db6da;
      iVar2 = strncmp(param_1 + 1,"np-hant",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc894;
      iVar2 = strncmp(param_1 + 1,"px-hans",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db6da;
      iVar2 = strncmp(param_1 + 1,"px-hant",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc894;
      iVar2 = strncmp(param_1 + 1,"sp-hans",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db6da;
      iVar2 = strncmp(param_1 + 1,"sp-hant",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc894;
      iVar2 = strncmp(param_1 + 1,"zh-hans",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db6da;
      iVar2 = strncmp(param_1 + 1,"zh-hant",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc894;
      iVar2 = strncmp(param_1 + 1,"zo-hans",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db6da;
      iVar2 = strncmp(param_1 + 1,"zo-hant",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc894;
    }
    iVar2 = strncmp(pcVar8,"do-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471384,3), cVar1 != '\0')) {
LAB_1403dc7dc:
      *param_4 = 0x5a484820;
      *param_3 = 1;
      return 1;
    }
    iVar2 = strncmp(pcVar8,"do-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471388,3), cVar1 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar3 = 0;
      while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
        uVar11 = uVar11 + 1;
        param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
        uVar3 = (ulonglong)uVar11;
        if (1 < uVar11) {
          *param_3 = uVar11;
          return 1;
        }
      }
      goto LAB_1403dc84e;
    }
    iVar2 = strncmp(pcVar8,"do-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_14047138c,3), cVar1 != '\0'))
    goto LAB_1403dc894;
    iVar2 = strncmp(pcVar8,"jy-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471384,3), cVar1 != '\0'))
    goto LAB_1403dc7dc;
    iVar2 = strncmp(pcVar8,"jy-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471388,3), cVar1 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar3 = 0;
      while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
        uVar11 = uVar11 + 1;
        param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
        uVar3 = (ulonglong)uVar11;
        if (1 < uVar11) {
          *param_3 = uVar11;
          return 1;
        }
      }
      goto LAB_1403dc84e;
    }
    iVar2 = strncmp(pcVar8,"jy-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_14047138c,3), cVar1 != '\0'))
    goto LAB_1403dc894;
    iVar2 = strncmp(pcVar8,"mn-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471384,3), cVar1 != '\0'))
    goto LAB_1403dc7dc;
    iVar2 = strncmp(pcVar8,"mn-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471388,3), cVar1 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar3 = 0;
      while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
        uVar11 = uVar11 + 1;
        param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
        uVar3 = (ulonglong)uVar11;
        if (1 < uVar11) {
          *param_3 = uVar11;
          return 1;
        }
      }
      goto LAB_1403dc84e;
    }
    iVar2 = strncmp(pcVar8,"mn-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_14047138c,3), cVar1 != '\0'))
    goto LAB_1403dc894;
    iVar2 = strncmp(pcVar8,"np-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471384,3), cVar1 != '\0'))
    goto LAB_1403dc7dc;
    iVar2 = strncmp(pcVar8,"np-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471388,3), cVar1 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar3 = 0;
      while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
        uVar11 = uVar11 + 1;
        param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
        uVar3 = (ulonglong)uVar11;
        if (1 < uVar11) {
          *param_3 = uVar11;
          return 1;
        }
      }
      goto LAB_1403dc84e;
    }
    iVar2 = strncmp(pcVar8,"np-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_14047138c,3), cVar1 != '\0'))
    goto LAB_1403dc894;
    iVar2 = strncmp(pcVar8,"px-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471384,3), cVar1 != '\0'))
    goto LAB_1403dc7dc;
    iVar2 = strncmp(pcVar8,"px-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471388,3), cVar1 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar3 = 0;
      while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
        uVar11 = uVar11 + 1;
        param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
        uVar3 = (ulonglong)uVar11;
        if (1 < uVar11) {
          *param_3 = uVar11;
          return 1;
        }
      }
      goto LAB_1403dc84e;
    }
    iVar2 = strncmp(pcVar8,"px-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_14047138c,3), cVar1 != '\0'))
    goto LAB_1403dc894;
    iVar2 = strncmp(pcVar8,"sp-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471384,3), cVar1 != '\0'))
    goto LAB_1403dc7dc;
    iVar2 = strncmp(pcVar8,"sp-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471388,3), cVar1 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar3 = 0;
      while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
        uVar11 = uVar11 + 1;
        param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
        uVar3 = (ulonglong)uVar11;
        if (1 < uVar11) {
          *param_3 = uVar11;
          return 1;
        }
      }
      goto LAB_1403dc84e;
    }
    iVar2 = strncmp(pcVar8,"sp-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_14047138c,3), cVar1 != '\0'))
    goto LAB_1403dc894;
    iVar2 = strncmp(pcVar8,"zh-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471384,3), cVar1 != '\0'))
    goto LAB_1403dc7dc;
    iVar2 = strncmp(pcVar8,"zh-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471388,3), cVar1 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar3 = 0;
      while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
        uVar11 = uVar11 + 1;
        param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
        uVar3 = (ulonglong)uVar11;
        if (1 < uVar11) {
          *param_3 = uVar11;
          return 1;
        }
      }
      goto LAB_1403dc84e;
    }
    iVar2 = strncmp(pcVar8,"zh-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_14047138c,3), cVar1 != '\0'))
    goto LAB_1403dc894;
    iVar2 = strncmp(pcVar8,"zo-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471384,3), cVar1 != '\0'))
    goto LAB_1403dc7dc;
    iVar2 = strncmp(pcVar8,"zo-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471388,3), cVar1 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar3 = 0;
      while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
        uVar11 = uVar11 + 1;
        param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
        uVar3 = (ulonglong)uVar11;
        if (1 < uVar11) {
          *param_3 = uVar11;
          return 1;
        }
      }
      goto LAB_1403dc84e;
    }
    pcVar8 = "zo-";
    break;
  case 6:
    pcVar8 = param_1 + 1;
    uVar11 = iVar2 - (int)pcVar8;
    if (uVar11 < 10) {
      if (6 < uVar11) goto LAB_1403db300;
      if (5 < uVar11) goto LAB_1403db363;
    }
    else {
      iVar2 = strncmp(pcVar8,"an-hant-hk",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc7dc;
      iVar2 = strncmp(pcVar8,"an-hant-mo",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar3 = 0;
        while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
          uVar11 = uVar11 + 1;
          param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
          uVar3 = (ulonglong)uVar11;
          if (1 < uVar11) {
            *param_3 = uVar11;
            return 1;
          }
        }
        goto LAB_1403dc84e;
      }
LAB_1403db300:
      local_res8 = param_1 + 1;
      iVar2 = strncmp(local_res8,"an-hans",7);
      if ((iVar2 == 0) && ((cVar1 = param_1[8], cVar1 == '\0' || (cVar1 == '-'))))
      goto LAB_1403db6da;
      iVar2 = strncmp(local_res8,"an-hant",7);
      if ((iVar2 == 0) && ((cVar1 = param_1[8], cVar1 == '\0' || (cVar1 == '-'))))
      goto LAB_1403dc894;
LAB_1403db363:
      iVar2 = strncmp(param_1 + 1,"a-latg",6);
      if ((iVar2 == 0) && ((param_1[7] == '\0' || (param_1[7] == '-')))) {
        *param_4 = 0x49525420;
        *param_3 = 1;
        return 1;
      }
    }
    iVar2 = strncmp(pcVar8,"an-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471384,3), cVar1 != '\0'))
    goto LAB_1403dc7dc;
    iVar2 = strncmp(pcVar8,"an-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471388,3), cVar1 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar3 = 0;
      while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
        uVar11 = uVar11 + 1;
        param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
        uVar3 = (ulonglong)uVar11;
        if (1 < uVar11) {
          *param_3 = uVar11;
          return 1;
        }
      }
      goto LAB_1403dc84e;
    }
    pcVar8 = "an-";
    break;
  case 7:
    pcVar8 = param_1 + 1;
    uVar11 = iVar2 - (int)pcVar8;
    if (uVar11 < 10) {
      if (6 < uVar11) goto LAB_1403db655;
    }
    else {
      iVar2 = strncmp(pcVar8,"ak-hant-hk",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc7dc;
      iVar2 = strncmp(pcVar8,"ak-hant-mo",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar3 = 0;
        while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
          uVar11 = uVar11 + 1;
          param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
          uVar3 = (ulonglong)uVar11;
          if (1 < uVar11) {
            *param_3 = uVar11;
            return 1;
          }
        }
        goto LAB_1403dc84e;
      }
      iVar2 = strncmp(param_1 + 1,"nm-hant-hk",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc7dc;
      iVar2 = strncmp(param_1 + 1,"nm-hant-mo",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar3 = 0;
        while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
          uVar11 = uVar11 + 1;
          param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
          uVar3 = (ulonglong)uVar11;
          if (1 < uVar11) {
            *param_3 = uVar11;
            return 1;
          }
        }
        goto LAB_1403dc84e;
      }
      iVar2 = strncmp(param_1 + 1,"sn-hant-hk",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc7dc;
      iVar2 = strncmp(param_1 + 1,"sn-hant-mo",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar3 = 0;
        while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
          uVar11 = uVar11 + 1;
          param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
          uVar3 = (ulonglong)uVar11;
          if (1 < uVar11) {
            *param_3 = uVar11;
            return 1;
          }
        }
        goto LAB_1403dc84e;
      }
LAB_1403db655:
      local_res8 = param_1 + 1;
      iVar2 = strncmp(local_res8,"ak-hans",7);
      if ((iVar2 == 0) && ((cVar1 = param_1[8], cVar1 == '\0' || (cVar1 == '-'))))
      goto LAB_1403db6da;
      iVar2 = strncmp(local_res8,"ak-hant",7);
      if ((iVar2 == 0) && ((cVar1 = param_1[8], cVar1 == '\0' || (cVar1 == '-'))))
      goto LAB_1403dc894;
      iVar2 = strncmp(param_1 + 1,"nm-hans",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db6da;
      iVar2 = strncmp(param_1 + 1,"nm-hant",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc894;
      iVar2 = strncmp(param_1 + 1,"sn-hans",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db6da;
      iVar2 = strncmp(param_1 + 1,"sn-hant",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403dc894;
    }
    iVar2 = strncmp(pcVar8,"ak-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471384,3), cVar1 != '\0'))
    goto LAB_1403dc7dc;
    iVar2 = strncmp(pcVar8,"ak-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471388,3), cVar1 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar3 = 0;
      while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
        uVar11 = uVar11 + 1;
        param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
        uVar3 = (ulonglong)uVar11;
        if (1 < uVar11) {
          *param_3 = uVar11;
          return 1;
        }
      }
      goto LAB_1403dc84e;
    }
    iVar2 = strncmp(pcVar8,"ak-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_14047138c,3), cVar1 != '\0'))
    goto LAB_1403dc894;
    iVar2 = strncmp(pcVar8,"nm-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471384,3), cVar1 != '\0'))
    goto LAB_1403dc7dc;
    iVar2 = strncmp(pcVar8,"nm-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471388,3), cVar1 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar3 = 0;
      while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
        uVar11 = uVar11 + 1;
        param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
        uVar3 = (ulonglong)uVar11;
        if (1 < uVar11) {
          *param_3 = uVar11;
          return 1;
        }
      }
      goto LAB_1403dc84e;
    }
    iVar2 = strncmp(pcVar8,"nm-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_14047138c,3), cVar1 != '\0'))
    goto LAB_1403dc894;
    iVar2 = strncmp(pcVar8,"sn-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471384,3), cVar1 != '\0'))
    goto LAB_1403dc7dc;
    iVar2 = strncmp(pcVar8,"sn-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471388,3), cVar1 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar3 = 0;
      while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
        uVar11 = uVar11 + 1;
        param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
        uVar3 = (ulonglong)uVar11;
        if (1 < uVar11) {
          *param_3 = uVar11;
          return 1;
        }
      }
      goto LAB_1403dc84e;
    }
    pcVar8 = "sn-";
    break;
  case 8:
    uVar7 = 0;
    uVar3 = uVar7;
    do {
      uVar4 = uVar3 + 1;
      uVar5 = uVar7;
      if (param_1[uVar3 + 1] != (&DAT_140471490)[uVar3]) {
        while (uVar3 = uVar5 + 1, param_1[uVar5 + 1] == (&DAT_140471498)[uVar5]) {
          uVar5 = uVar3;
          if (uVar3 == 5) {
            *param_4 = 0x5a485320;
            *param_3 = 1;
            return 1;
          }
        }
        do {
          uVar3 = uVar7 + 1;
          if (param_1[uVar7 + 1] != (&DAT_1404714a0)[uVar7]) {
            return 0;
          }
          uVar7 = uVar3;
        } while (uVar3 != 5);
        *param_4 = 0x4c545a20;
        *param_3 = 1;
        return 1;
      }
      uVar3 = uVar4;
    } while (uVar4 != 8);
    local_res8 = (char *)0x415448204e415620;
    while (uVar11 = (uint)uVar7, uVar11 < *param_3) {
      uVar11 = uVar11 + 1;
      param_4[uVar7] = *(undefined4 *)((longlong)&local_res8 + uVar7 * 4);
      uVar7 = (ulonglong)uVar11;
      if (1 < uVar11) {
        *param_3 = uVar11;
        return 1;
      }
    }
    goto LAB_1403dc84e;
  case 0xb:
    pcVar8 = param_1 + 1;
    uVar11 = iVar2 - (int)pcVar8;
    if (uVar11 < 10) {
      if (6 < uVar11) goto LAB_1403dbb80;
    }
    else {
      iVar2 = strncmp(pcVar8,"uh-hant-hk",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc7dc;
      iVar2 = strncmp(pcVar8,"uh-hant-mo",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar3 = 0;
        while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
          uVar11 = uVar11 + 1;
          param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
          uVar3 = (ulonglong)uVar11;
          if (1 < uVar11) {
            *param_3 = uVar11;
            return 1;
          }
        }
        goto LAB_1403dc84e;
      }
LAB_1403dbb80:
      local_res8 = param_1 + 1;
      iVar2 = strncmp(local_res8,"uh-hans",7);
      if ((iVar2 == 0) && ((cVar1 = param_1[8], cVar1 == '\0' || (cVar1 == '-'))))
      goto LAB_1403db6da;
      iVar2 = strncmp(local_res8,"uh-hant",7);
      if ((iVar2 == 0) && ((cVar1 = param_1[8], cVar1 == '\0' || (cVar1 == '-'))))
      goto LAB_1403dc894;
      iVar2 = strncmp(param_1 + 1,"zh-hans",7);
      if ((iVar2 == 0) && ((param_1[8] == '\0' || (param_1[8] == '-')))) goto LAB_1403db6da;
    }
    iVar2 = strncmp(pcVar8,"uh-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471384,3), cVar1 != '\0'))
    goto LAB_1403dc7dc;
    iVar2 = strncmp(pcVar8,"uh-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471388,3), cVar1 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar3 = 0;
      while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
        uVar11 = uVar11 + 1;
        param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
        uVar3 = (ulonglong)uVar11;
        if (1 < uVar11) {
          *param_3 = uVar11;
          return 1;
        }
      }
      goto LAB_1403dc84e;
    }
    pcVar8 = "uh-";
    break;
  case 0xc:
    pcVar8 = param_1 + 1;
    uVar11 = iVar2 - (int)pcVar8;
    if (uVar11 < 10) {
      if (6 < uVar11) goto LAB_1403dbd87;
    }
    else {
      iVar2 = strncmp(pcVar8,"np-hant-hk",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc7dc;
      iVar2 = strncmp(pcVar8,"np-hant-mo",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar3 = 0;
        while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
          uVar11 = uVar11 + 1;
          param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
          uVar3 = (ulonglong)uVar11;
          if (1 < uVar11) {
            *param_3 = uVar11;
            return 1;
          }
        }
        goto LAB_1403dc84e;
      }
LAB_1403dbd87:
      local_res8 = param_1 + 1;
      iVar2 = strncmp(local_res8,"np-hans",7);
      if ((iVar2 == 0) && ((cVar1 = param_1[8], cVar1 == '\0' || (cVar1 == '-'))))
      goto LAB_1403db6da;
      iVar2 = strncmp(local_res8,"np-hant",7);
      if ((iVar2 == 0) && ((cVar1 = param_1[8], cVar1 == '\0' || (cVar1 == '-'))))
      goto LAB_1403dc894;
    }
    iVar2 = strncmp(pcVar8,"np-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471384,3), cVar1 != '\0'))
    goto LAB_1403dc7dc;
    iVar2 = strncmp(pcVar8,"np-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471388,3), cVar1 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar3 = 0;
      while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
        uVar11 = uVar11 + 1;
        param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
        uVar3 = (ulonglong)uVar11;
        if (1 < uVar11) {
          *param_3 = uVar11;
          return 1;
        }
      }
      goto LAB_1403dc84e;
    }
    iVar2 = strncmp(pcVar8,"np-",3);
    if ((iVar2 != 0) || (cVar1 = FUN_14040c820(param_1,param_2,&DAT_14047138c,3), cVar1 == '\0')) {
      iVar2 = strncmp(pcVar8,"nw-",3);
      if (iVar2 != 0) {
        return 0;
      }
      cVar1 = FUN_14040c820(param_1,param_2,&DAT_1404714e0,3);
      if (cVar1 == '\0') {
        return 0;
      }
      *param_4 = 0x4d4f4e54;
      *param_3 = 1;
      return 1;
    }
    goto LAB_1403dc894;
  case 0xd:
    pcVar8 = param_1 + 1;
    uVar11 = iVar2 - (int)pcVar8;
    if (uVar11 < 10) {
      if (6 < uVar11) goto LAB_1403dbfe0;
    }
    else {
      iVar2 = strncmp(pcVar8,"an-hant-hk",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc7dc;
      iVar2 = strncmp(pcVar8,"an-hant-mo",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar3 = 0;
        while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
          uVar11 = uVar11 + 1;
          param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
          uVar3 = (ulonglong)uVar11;
          if (1 < uVar11) {
            *param_3 = uVar11;
            return 1;
          }
        }
        goto LAB_1403dc84e;
      }
LAB_1403dbfe0:
      local_res8 = param_1 + 1;
      iVar2 = strncmp(local_res8,"an-hans",7);
      if ((iVar2 == 0) && ((cVar1 = param_1[8], cVar1 == '\0' || (cVar1 == '-'))))
      goto LAB_1403db6da;
      iVar2 = strncmp(local_res8,"an-hant",7);
      if ((iVar2 == 0) && ((cVar1 = param_1[8], cVar1 == '\0' || (cVar1 == '-'))))
      goto LAB_1403dc894;
    }
    iVar2 = strncmp(pcVar8,"an-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471384,3), cVar1 != '\0'))
    goto LAB_1403dc7dc;
    iVar2 = strncmp(pcVar8,"an-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471388,3), cVar1 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar3 = 0;
      while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
        uVar11 = uVar11 + 1;
        param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
        uVar3 = (ulonglong)uVar11;
        if (1 < uVar11) {
          *param_3 = uVar11;
          return 1;
        }
      }
      goto LAB_1403dc84e;
    }
    iVar2 = strncmp(pcVar8,"an-",3);
    if ((iVar2 != 0) || (cVar1 = FUN_14040c820(param_1,param_2,&DAT_14047138c,3), cVar1 == '\0')) {
      lVar9 = 0;
      lVar10 = lVar9;
      while (lVar6 = lVar10 + 1, pcVar8[lVar10] == (&DAT_1404714e4)[lVar10]) {
        lVar10 = lVar6;
        if (lVar6 == 6) {
          *param_4 = 0x4e4f5220;
          *param_3 = 1;
          return 1;
        }
      }
      do {
        lVar10 = lVar9 + 1;
        if (pcVar8[lVar9] != (&DAT_1404714ec)[lVar9]) {
          return 0;
        }
        lVar9 = lVar10;
      } while (lVar10 != 6);
      *param_4 = 0x4e594e20;
      *param_3 = 1;
      return 1;
    }
    goto LAB_1403dc894;
  case 0x11:
    iVar2 = strncmp(param_1 + 1,"o-",2);
    if (iVar2 != 0) {
      return 0;
    }
    cVar1 = FUN_14040c820(param_1,param_2,&DAT_1404714f8,3);
    if (cVar1 == '\0') {
      return 0;
    }
    local_res8 = (char *)0x524f4d204d4f4c20;
    uVar3 = 0;
    while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
      uVar11 = uVar11 + 1;
      param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
      uVar3 = (ulonglong)uVar11;
      if (1 < uVar11) {
        *param_3 = uVar11;
        return 1;
      }
    }
LAB_1403dc84e:
    *param_3 = uVar11;
    return 1;
  case 0x12:
    pcVar8 = param_1 + 1;
    uVar11 = iVar2 - (int)pcVar8;
    if (uVar11 < 10) {
      if (6 < uVar11) goto LAB_1403dc2d0;
    }
    else {
      iVar2 = strncmp(pcVar8,"jc-hant-hk",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc7dc;
      iVar2 = strncmp(pcVar8,"jc-hant-mo",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar3 = 0;
        while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
          uVar11 = uVar11 + 1;
          param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
          uVar3 = (ulonglong)uVar11;
          if (1 < uVar11) {
            *param_3 = uVar11;
            return 1;
          }
        }
        goto LAB_1403dc84e;
      }
LAB_1403dc2d0:
      local_res8 = param_1 + 1;
      iVar2 = strncmp(local_res8,"jc-hans",7);
      if ((iVar2 == 0) && ((cVar1 = param_1[8], cVar1 == '\0' || (cVar1 == '-'))))
      goto LAB_1403db6da;
      iVar2 = strncmp(local_res8,"jc-hant",7);
      if ((iVar2 == 0) && ((cVar1 = param_1[8], cVar1 == '\0' || (cVar1 == '-'))))
      goto LAB_1403dc894;
    }
    iVar2 = strncmp(pcVar8,"jc-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471384,3), cVar1 != '\0'))
    goto LAB_1403dc7dc;
    iVar2 = strncmp(pcVar8,"jc-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471388,3), cVar1 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar3 = 0;
      while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
        uVar11 = uVar11 + 1;
        param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
        uVar3 = (ulonglong)uVar11;
        if (1 < uVar11) {
          *param_3 = uVar11;
          return 1;
        }
      }
      goto LAB_1403dc84e;
    }
    pcVar8 = "jc-";
    break;
  case 0x16:
    pcVar8 = param_1 + 1;
    uVar11 = iVar2 - (int)pcVar8;
    if (uVar11 < 10) {
      if (6 < uVar11) goto LAB_1403dc4a7;
    }
    else {
      iVar2 = strncmp(pcVar8,"uu-hant-hk",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) goto LAB_1403dc7dc;
      iVar2 = strncmp(pcVar8,"uu-hant-mo",10);
      if ((iVar2 == 0) && ((param_1[0xb] == '\0' || (param_1[0xb] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar3 = 0;
        while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
          uVar11 = uVar11 + 1;
          param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
          uVar3 = (ulonglong)uVar11;
          if (1 < uVar11) {
            *param_3 = uVar11;
            return 1;
          }
        }
        goto LAB_1403dc84e;
      }
LAB_1403dc4a7:
      local_res8 = param_1 + 1;
      iVar2 = strncmp(local_res8,"uu-hans",7);
      if ((iVar2 == 0) && ((cVar1 = param_1[8], cVar1 == '\0' || (cVar1 == '-'))))
      goto LAB_1403db6da;
      iVar2 = strncmp(local_res8,"uu-hant",7);
      if ((iVar2 == 0) && ((cVar1 = param_1[8], cVar1 == '\0' || (cVar1 == '-'))))
      goto LAB_1403dc894;
    }
    iVar2 = strncmp(pcVar8,"uu-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471384,3), cVar1 != '\0'))
    goto LAB_1403dc7dc;
    iVar2 = strncmp(pcVar8,"uu-",3);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471388,3), cVar1 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar3 = 0;
      while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
        uVar11 = uVar11 + 1;
        param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
        uVar3 = (ulonglong)uVar11;
        if (1 < uVar11) {
          *param_3 = uVar11;
          return 1;
        }
      }
      goto LAB_1403dc84e;
    }
    pcVar8 = "uu-";
    break;
  case 0x18:
    if ((uint)(iVar2 - (int)(param_1 + 1)) < 7) {
      return 0;
    }
    iVar2 = strncmp(param_1 + 1,"ue-hans",7);
    if (iVar2 != 0) {
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
    goto LAB_1403db6da;
  case 0x19:
    pcVar8 = param_1 + 1;
    uVar11 = iVar2 - (int)pcVar8;
    if (8 < uVar11) {
      iVar2 = strncmp(pcVar8,"h-hant-hk",9);
      if ((iVar2 == 0) && ((param_1[10] == '\0' || (param_1[10] == '-')))) goto LAB_1403dc7dc;
      iVar2 = strncmp(pcVar8,"h-hant-mo",9);
      if ((iVar2 == 0) && ((param_1[10] == '\0' || (param_1[10] == '-')))) {
        local_res8 = (char *)0x5a4848205a48544d;
        uVar3 = 0;
        while (uVar11 = (uint)uVar3, uVar11 < *param_3) {
          uVar11 = uVar11 + 1;
          param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
          uVar3 = (ulonglong)uVar11;
          if (1 < uVar11) {
            *param_3 = uVar11;
            return 1;
          }
        }
        goto LAB_1403dc84e;
      }
    }
    iVar2 = strcmp(pcVar8,"h-min-nan");
    if (iVar2 == 0) goto LAB_1403db6da;
    if (5 < uVar11) {
      iVar2 = strncmp(param_1 + 1,"h-hans",6);
      if ((iVar2 == 0) && ((param_1[7] == '\0' || (param_1[7] == '-')))) goto LAB_1403db6da;
      iVar2 = strncmp(param_1 + 1,"h-hant",6);
      if ((iVar2 == 0) && ((param_1[7] == '\0' || (param_1[7] == '-')))) goto LAB_1403dc894;
    }
    uVar3 = 0;
    while (uVar7 = uVar3 + 1, pcVar8[uVar3] == "h-min"[uVar3]) {
      uVar3 = uVar7;
      if (uVar7 == 6) {
        *param_4 = 0x5a485320;
        *param_3 = 1;
        return 1;
      }
    }
    iVar2 = strncmp(pcVar8,"h-",2);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471384,3), cVar1 != '\0'))
    goto LAB_1403dc7dc;
    iVar2 = strncmp(pcVar8,"h-",2);
    if ((iVar2 == 0) && (cVar1 = FUN_14040c820(param_1,param_2,&DAT_140471388,3), cVar1 != '\0')) {
      local_res8 = (char *)0x5a4848205a48544d;
      uVar3 = 0;
      do {
        uVar11 = (uint)uVar3;
        if (*param_3 <= uVar11) break;
        uVar11 = uVar11 + 1;
        param_4[uVar3] = *(undefined4 *)((longlong)&local_res8 + uVar3 * 4);
        uVar3 = (ulonglong)uVar11;
      } while (uVar11 < 2);
      goto LAB_1403dc84e;
    }
    iVar2 = strncmp(pcVar8,"h-",2);
    if (iVar2 != 0) {
      return 0;
    }
    cVar1 = FUN_14040c820(param_1,param_2,&DAT_14047138c,3);
    goto joined_r0x0001403dc88e;
  }
  iVar2 = strncmp(param_1 + 1,pcVar8,3);
  if (iVar2 == 0) {
    cVar1 = FUN_14040c820(param_1,param_2,&DAT_14047138c,3);
joined_r0x0001403dc88e:
    if (cVar1 != '\0') {
LAB_1403dc894:
      *param_4 = 0x5a485420;
      *param_3 = 1;
      return 1;
    }
  }
LAB_1403dc5e5:
  return 0;
}

