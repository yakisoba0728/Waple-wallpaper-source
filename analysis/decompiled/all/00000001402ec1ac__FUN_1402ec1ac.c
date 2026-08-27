// Function: FUN_1402ec1ac
// Addr: 1402ec1ac
// Size: 911 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */

undefined4
FUN_1402ec1ac(longlong *param_1,undefined8 param_2,undefined4 param_3,byte *param_4,int param_5,
             byte *param_6,int param_7,UINT param_8)

{
  int *piVar1;
  longlong lVar2;
  byte *pbVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  BOOL BVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  size_t sVar11;
  BYTE *pBVar12;
  ulonglong uVar13;
  undefined4 *puVar14;
  ulonglong uVar15;
  undefined4 *puVar16;
  undefined1 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined4 *puVar20;
  undefined1 auStack_d8 [32];
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_88 [2];
  byte *local_80;
  undefined8 local_78;
  _cpinfo local_70;
  ulonglong local_58;
  
  puVar17 = auStack_d8;
  puVar18 = auStack_d8;
  puVar19 = auStack_d8;
  local_58 = DAT_1404dc040 ^ (ulonglong)local_88;
  local_80 = param_6;
  local_88[0] = param_3;
  local_78 = param_2;
  if (param_5 < 1) {
    puVar5 = auStack_d8;
    if (-2 < param_5) goto LAB_1402ec213;
    goto LAB_1402ec515;
  }
  sVar11 = __strncnt((char *)param_4,(longlong)param_5);
  param_5 = (int)sVar11;
LAB_1402ec213:
  if (param_7 < 1) {
    puVar5 = auStack_d8;
    if (param_7 < -1) goto LAB_1402ec515;
  }
  else {
    sVar11 = __strncnt((char *)param_6,(longlong)param_7);
    param_7 = (int)sVar11;
  }
  if (param_8 == 0) {
    param_8 = *(UINT *)(*param_1 + 0xc);
  }
  if ((param_5 == 0) || (param_7 == 0)) {
    local_70.LeadByte[10] = '\0';
    local_70.LeadByte[0xb] = '\0';
    local_70._18_2_ = 0;
    local_70.MaxCharSize = 0;
    local_70.DefaultChar[0] = '\0';
    local_70.DefaultChar[1] = '\0';
    local_70.LeadByte[0] = '\0';
    local_70.LeadByte[1] = '\0';
    local_70.LeadByte[2] = '\0';
    local_70.LeadByte[3] = '\0';
    local_70.LeadByte[4] = '\0';
    local_70.LeadByte[5] = '\0';
    local_70.LeadByte[6] = '\0';
    local_70.LeadByte[7] = '\0';
    local_70.LeadByte[8] = '\0';
    local_70.LeadByte[9] = '\0';
    if (param_5 == param_7) {
LAB_1402ec534:
      uVar10 = 2;
      puVar19 = auStack_d8;
      goto LAB_1402ec517;
    }
    if (param_7 < 2) {
      if (param_5 < 2) {
        BVar6 = GetCPInfo(param_8,&local_70);
        puVar5 = auStack_d8;
        if (BVar6 == 0) goto LAB_1402ec515;
        if (param_5 < 1) {
          if (param_7 < 1) goto LAB_1402ec308;
          if (1 < local_70.MaxCharSize) {
            pBVar12 = local_70.LeadByte;
            while ((local_70.LeadByte[0] != 0 && (pBVar12[1] != 0))) {
              if ((*pBVar12 <= *param_6) && (*param_6 <= pBVar12[1])) goto LAB_1402ec534;
              pBVar12 = pBVar12 + 2;
              local_70.LeadByte[0] = *pBVar12;
            }
          }
          goto LAB_1402ec2fe;
        }
        if (1 < local_70.MaxCharSize) {
          pBVar12 = local_70.LeadByte;
          while ((local_70.LeadByte[0] != 0 && (pBVar12[1] != 0))) {
            if ((*pBVar12 <= *param_4) && (*param_4 <= pBVar12[1])) goto LAB_1402ec534;
            pBVar12 = pBVar12 + 2;
            local_70.LeadByte[0] = *pBVar12;
          }
        }
      }
      uVar10 = 3;
      puVar19 = auStack_d8;
    }
    else {
LAB_1402ec2fe:
      uVar10 = 1;
    }
    goto LAB_1402ec517;
  }
LAB_1402ec308:
  local_b0 = 0;
  local_b8 = 0;
  iVar7 = FUN_1402dcb78(param_8,9,param_4,param_5);
  puVar5 = auStack_d8;
  if ((iVar7 != 0) &&
     (uVar15 = (longlong)iVar7 * 2 + 0x10,
     uVar15 = -(ulonglong)((ulonglong)((longlong)iVar7 * 2) < uVar15) & uVar15, puVar5 = auStack_d8,
     uVar15 != 0)) {
    if (uVar15 < 0x401) {
      uVar13 = uVar15 + 0xf;
      if (uVar13 <= uVar15) {
        uVar13 = 0xffffffffffffff0;
      }
      lVar2 = -(uVar13 & 0xfffffffffffffff0);
      puVar17 = auStack_d8 + lVar2;
      puVar14 = (undefined4 *)((longlong)local_88 + lVar2);
      puVar5 = auStack_d8 + lVar2;
      if (puVar14 == (undefined4 *)0x0) goto LAB_1402ec515;
      *puVar14 = 0xcccc;
LAB_1402ec3a0:
      puVar16 = puVar14 + 4;
      puVar18 = puVar17;
    }
    else {
      puVar14 = (undefined4 *)_malloc_base(uVar15);
      puVar16 = (undefined4 *)0x0;
      if (puVar14 != (undefined4 *)0x0) {
        *puVar14 = 0xdddd;
        goto LAB_1402ec3a0;
      }
    }
    puVar5 = puVar18;
    if (puVar16 != (undefined4 *)0x0) {
      *(int *)(puVar18 + 0x28) = iVar7;
      *(undefined4 **)(puVar18 + 0x20) = puVar16;
      *(undefined8 *)(puVar18 + -8) = 0x1402ec3ca;
      iVar8 = FUN_1402dcb78(param_8,1,param_4,param_5);
      puVar19 = puVar18;
      if (iVar8 == 0) {
LAB_1402ec504:
        iVar7 = puVar16[-4];
      }
      else {
        *(undefined4 *)(puVar18 + 0x28) = 0;
        *(undefined8 *)(puVar18 + 0x20) = 0;
        *(undefined8 *)(puVar18 + -8) = 0x1402ec3f0;
        iVar8 = FUN_1402dcb78(param_8,9,param_6,param_7);
        if ((iVar8 == 0) ||
           (uVar15 = (longlong)iVar8 * 2 + 0x10,
           uVar15 = -(ulonglong)((ulonglong)((longlong)iVar8 * 2) < uVar15) & uVar15, uVar15 == 0))
        goto LAB_1402ec504;
        if (uVar15 < 0x401) {
          uVar13 = uVar15 + 0xf;
          if (uVar13 <= uVar15) {
            uVar13 = 0xffffffffffffff0;
          }
          *(undefined8 *)(puVar18 + -8) = 0x1402ec439;
          lVar2 = -(uVar13 & 0xfffffffffffffff0);
          puVar19 = puVar18 + lVar2;
          puVar14 = (undefined4 *)(puVar18 + lVar2 + 0x50);
          if (puVar14 == (undefined4 *)0x0) goto LAB_1402ec504;
          *puVar14 = 0xcccc;
          puVar18 = puVar18 + lVar2;
LAB_1402ec465:
          puVar20 = puVar14 + 4;
          puVar19 = puVar18;
        }
        else {
          *(undefined8 *)(puVar18 + -8) = 0x1402ec457;
          puVar14 = (undefined4 *)_malloc_base();
          puVar20 = (undefined4 *)0x0;
          if (puVar14 != (undefined4 *)0x0) {
            *puVar14 = 0xdddd;
            goto LAB_1402ec465;
          }
        }
        pbVar3 = local_80;
        if (puVar20 == (undefined4 *)0x0) goto LAB_1402ec504;
        piVar1 = puVar20 + -4;
        *(int *)(puVar19 + 0x28) = iVar8;
        *(undefined4 **)(puVar19 + 0x20) = puVar20;
        *(undefined8 *)(puVar19 + -8) = 0x1402ec494;
        iVar9 = FUN_1402dcb78(param_8,1,pbVar3,param_7);
        uVar10 = local_88[0];
        if (iVar9 != 0) {
          *(undefined8 *)(puVar19 + 0x40) = 0;
          *(undefined8 *)(puVar19 + 0x38) = 0;
          *(undefined8 *)(puVar19 + 0x30) = 0;
          uVar4 = local_78;
          *(int *)(puVar19 + 0x28) = iVar8;
          *(undefined4 **)(puVar19 + 0x20) = puVar20;
          *(undefined8 *)(puVar19 + -8) = 0x1402ec4df;
          uVar10 = FUN_1402dbf80(uVar4,uVar10,puVar16,iVar7);
          if (*piVar1 == 0xdddd) {
            *(undefined8 *)(puVar19 + -8) = 0x1402ec4f3;
            FUN_1402d9040(piVar1);
          }
          if (puVar16[-4] == 0xdddd) {
            *(undefined8 *)(puVar19 + -8) = 0x1402ec500;
            FUN_1402d9040();
          }
          goto LAB_1402ec517;
        }
        if (*piVar1 == 0xdddd) {
          *(undefined8 *)(puVar19 + -8) = 0x1402ec4ac;
          FUN_1402d9040(piVar1);
        }
        iVar7 = puVar16[-4];
      }
      puVar5 = puVar19;
      if (iVar7 == 0xdddd) {
        *(undefined8 *)(puVar19 + -8) = 0x1402ec515;
        FUN_1402d9040();
      }
    }
  }
LAB_1402ec515:
  puVar19 = puVar5;
  uVar10 = 0;
LAB_1402ec517:
  *(undefined8 *)(puVar19 + -8) = 0x1402ec523;
  return uVar10;
}

