// Function: FUN_140323800
// Addr: 140323800
// Size: 1053 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

int FUN_140323800(ulonglong *param_1,ulonglong param_2,undefined8 param_3,longlong param_4)

{
  ulonglong *puVar1;
  ulonglong uVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  char *pcVar12;
  undefined1 auStack_1b8 [32];
  int local_198;
  char *local_190;
  ulonglong local_188;
  int *local_180;
  undefined8 local_178;
  char local_168 [9];
  char local_15f [263];
  ulonglong local_58;
  
  local_58 = DAT_1404dc040 ^ (ulonglong)auStack_1b8;
  FUN_1404217a0(param_1,0,0xc0);
  (*(code *)**(undefined8 **)(param_4 + 8))(param_1,0,0,param_3);
  param_1[0x12] = param_2;
  iVar4 = FUN_1402f54a0(param_2);
  local_198 = iVar4;
  iVar5 = FUN_1402f4fe0(param_2,0x1f);
  if (iVar5 != 0) {
    return 2;
  }
  iVar5 = strncmp(*(char **)(param_2 + 0x38),"%!PS-Adobe-3.0 Resource-CIDFont",0x1f);
  if (iVar5 != 0) {
    FUN_1402f5100(param_2);
    return 2;
  }
  FUN_1402f5100(param_2);
  if (*(longlong *)(param_2 + 0x20) != 0) {
    uVar11 = 0;
    pcVar12 = local_168;
    iVar5 = 0;
    uVar9 = 0x109;
    do {
      iVar4 = *(int *)(param_2 + 8);
      iVar6 = FUN_1402f54a0(param_2);
      uVar8 = iVar4 - iVar6;
      if (uVar9 < uVar8) {
        uVar8 = uVar9;
      }
      if ((uVar8 != 0) && (iVar4 = FUN_1402f54b0(param_2,pcVar12,uVar8), iVar4 != 0)) {
        return iVar4;
      }
      pcVar12[uVar8] = '\0';
      iVar4 = local_198;
      for (pcVar7 = local_168; local_198 = iVar4, pcVar7 < pcVar12 + ((ulonglong)uVar8 - 6);
          pcVar7 = pcVar7 + 1) {
        if ((*pcVar7 == 'S') && (iVar4 = strncmp(pcVar7,"StartData",9), iVar4 == 0)) {
          iVar5 = FUN_1402f54a0(param_2);
          iVar5 = iVar5 + 10;
LAB_140323985:
          iVar5 = ((((int)pcVar7 - uVar11) - uVar8) - (int)local_168) + iVar5;
        }
        else if ((pcVar7[1] == 's') && (iVar4 = strncmp(pcVar7,"/sfnts",6), iVar4 == 0)) {
          iVar5 = FUN_1402f54a0(param_2);
          iVar5 = iVar5 + 7;
          goto LAB_140323985;
        }
        iVar4 = local_198;
      }
      if (uVar11 + uVar8 < 10) goto LAB_1403239d6;
      FUN_1404210f0(local_168,(longlong)&local_178 + (ulonglong)uVar11 + (ulonglong)uVar8 + 7,9);
      uVar9 = 0x100;
      pcVar12 = local_15f;
      uVar11 = 9;
    } while( true );
  }
  iVar5 = *(int *)(param_2 + 8);
LAB_1403239e3:
  iVar6 = FUN_1402f5c50(param_2,iVar4);
  if (iVar6 != 0) {
    return iVar6;
  }
  puVar1 = param_1 + 0x13;
  uVar9 = iVar5 - iVar4;
  iVar4 = FUN_1402f5150(param_2,uVar9,puVar1);
  if (iVar4 != 0) {
    return iVar4;
  }
  pcVar12 = (char *)*puVar1;
  *(int *)((longlong)param_1 + 0xa4) = iVar5;
  param_1[2] = (ulonglong)(pcVar12 + uVar9);
  *(uint *)(param_1 + 0x14) = uVar9;
  param_1[1] = (ulonglong)pcVar12;
  *param_1 = (ulonglong)pcVar12;
  *(undefined4 *)(param_1 + 0x17) = 0xffffffff;
  (*(code *)param_1[8])(param_1);
  (*(code *)param_1[7])(param_1);
  pcVar7 = (char *)*param_1;
  (*(code *)param_1[8])(param_1);
  (*(code *)param_1[7])(param_1);
  local_188 = param_1[2];
  local_190 = (char *)(local_188 - 6);
  pcVar3 = (char *)*param_1;
  if ((char *)*param_1 <= local_190) {
    do {
      pcVar10 = pcVar7;
      pcVar7 = pcVar3;
      if ((int)param_1[3] != 0) {
        return (int)param_1[3];
      }
      if (((*pcVar7 == 'S') && (pcVar7 <= (char *)(local_188 - 9))) &&
         (iVar4 = strncmp(pcVar7,"StartData",9), iVar4 == 0)) {
        *param_1 = (ulonglong)pcVar12;
        (*(code *)param_1[0xe])(param_1,&local_180);
        iVar4 = 0;
        if (((local_178 - (longlong)local_180 == 5) && (*local_180 == 0x78654828)) &&
           ((char)local_180[1] == ')')) {
          *param_1 = (ulonglong)pcVar10;
          iVar6 = (*(code *)param_1[9])(param_1);
          if (iVar6 < 0) {
            iVar4 = 3;
          }
          else {
            *(int *)(param_1 + 0x15) = iVar6;
          }
        }
        iVar6 = ((int)pcVar7 - (int)*puVar1) + 10;
        if (iVar6 == iVar5) {
          return iVar4;
        }
        FUN_1402f5c00(param_2,puVar1);
        iVar4 = local_198;
        iVar5 = FUN_1402f5c50(param_2,local_198);
        if (iVar5 != 0) {
          return iVar5;
        }
        uVar9 = iVar6 - iVar4;
        iVar4 = FUN_1402f5150(param_2,uVar9,puVar1);
        if (iVar4 == 0) {
          uVar2 = *puVar1;
          *(int *)((longlong)param_1 + 0xa4) = iVar6;
          param_1[2] = uVar9 + uVar2;
          *(uint *)(param_1 + 0x14) = uVar9;
          param_1[1] = uVar2;
          *param_1 = uVar2;
          return 0;
        }
        return iVar4;
      }
      if ((pcVar7[1] == 's') && (iVar4 = strncmp(pcVar7,"/sfnts",6), iVar4 == 0)) {
        return 2;
      }
      (*(code *)param_1[8])(param_1);
      (*(code *)param_1[7])(param_1);
      pcVar3 = (char *)*param_1;
      pcVar12 = pcVar10;
    } while ((char *)*param_1 <= local_190);
  }
  return 3;
LAB_1403239d6:
  if (iVar5 == 0) {
    return 3;
  }
  goto LAB_1403239e3;
}

