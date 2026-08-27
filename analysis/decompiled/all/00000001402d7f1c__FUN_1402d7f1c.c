// Function: FUN_1402d7f1c
// Addr: 1402d7f1c
// Size: 1284 bytes


/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8
FUN_1402d7f1c(undefined8 param_1,int param_2,undefined2 *param_3,longlong *param_4,longlong *param_5
             ,longlong param_6)

{
  short sVar1;
  longlong lVar2;
  undefined2 *puVar3;
  undefined1 *puVar4;
  char cVar5;
  int iVar6;
  ulonglong uVar7;
  undefined8 uVar8;
  undefined4 *puVar9;
  ushort uVar10;
  uint uVar11;
  ulonglong uVar12;
  int iVar13;
  short *psVar14;
  undefined1 uVar15;
  undefined4 *puVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  ushort *puVar20;
  ushort *puVar21;
  undefined1 uVar22;
  undefined1 auStack_a8 [32];
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined2 *local_68;
  undefined8 local_60;
  short local_58;
  short sStack_56;
  undefined2 local_54;
  undefined2 local_52;
  undefined2 local_50;
  undefined2 local_4e;
  undefined2 local_4c;
  undefined2 local_4a;
  ulonglong local_48;
  undefined1 uVar16;
  
  puVar18 = auStack_a8;
  puVar19 = auStack_a8;
  local_48 = DAT_1404dc040 ^ (ulonglong)&local_68;
  if (param_2 == 0) {
    puVar21 = *(ushort **)(param_6 + 0x2a0);
  }
  else if (param_2 == 1) {
    puVar21 = *(ushort **)(param_6 + 0x2a8);
  }
  else {
    puVar21 = *(ushort **)(param_6 + 0x2b0);
  }
  puVar4 = auStack_a8;
  local_68 = param_3;
  local_60 = param_1;
  if (*(int *)(param_6 + 0x158) != 1) {
    local_58 = param_3[10] + 0x76c;
    sStack_56 = param_3[8] + 1;
    local_54 = 0;
    local_52 = param_3[6];
    local_50 = param_3[4];
    local_4e = param_3[2];
    local_4c = *param_3;
    local_4a = 0;
    if (param_2 == 2) {
      local_80 = 0;
      local_88 = 0;
      iVar6 = FUN_1402dc270();
    }
    else {
      local_78 = 0;
      local_80 = 0;
      local_88 = 0;
      iVar6 = FUN_1402dc114(*(undefined8 *)(param_6 + 0x2b8),0,&local_58,puVar21);
    }
    puVar4 = auStack_a8;
    if ((iVar6 != 0) &&
       (uVar12 = (longlong)iVar6 * 2 + 0x10,
       uVar12 = -(ulonglong)((ulonglong)((longlong)iVar6 * 2) < uVar12) & uVar12,
       puVar4 = auStack_a8, uVar12 != 0)) {
      if (uVar12 < 0x401) {
        uVar7 = uVar12 + 0xf;
        if (uVar7 <= uVar12) {
          uVar7 = 0xffffffffffffff0;
        }
        lVar2 = -(uVar7 & 0xfffffffffffffff0);
        puVar18 = auStack_a8 + lVar2;
        puVar9 = (undefined4 *)((longlong)&local_68 + lVar2);
        puVar4 = auStack_a8 + lVar2;
        if (puVar9 == (undefined4 *)0x0) goto LAB_1402d814a;
        *puVar9 = 0xcccc;
LAB_1402d809a:
        puVar17 = puVar9 + 4;
        puVar19 = puVar18;
      }
      else {
        puVar9 = (undefined4 *)_malloc_base();
        puVar17 = (undefined4 *)0x0;
        if (puVar9 != (undefined4 *)0x0) {
          *puVar9 = 0xdddd;
          goto LAB_1402d809a;
        }
      }
      puVar4 = puVar19;
      if (puVar17 != (undefined4 *)0x0) {
        uVar8 = *(undefined8 *)(param_6 + 0x2b8);
        puVar9 = puVar17;
        if (param_2 == 2) {
          *(int *)(puVar19 + 0x28) = iVar6;
          *(undefined4 **)(puVar19 + 0x20) = puVar17;
          *(undefined8 *)(puVar19 + -8) = 0x1402d80cb;
          iVar6 = FUN_1402dc270();
        }
        else {
          *(undefined8 *)(puVar19 + 0x30) = 0;
          *(int *)(puVar19 + 0x28) = iVar6;
          *(undefined4 **)(puVar19 + 0x20) = puVar17;
          *(undefined8 *)(puVar19 + -8) = 0x1402d80e0;
          iVar6 = FUN_1402dc114(uVar8,0,&local_58);
        }
        while ((iVar6 = iVar6 + -1, 0 < iVar6 && (*param_5 != 0))) {
          *(undefined2 *)*param_4 = *(undefined2 *)puVar9;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          puVar9 = (undefined4 *)((longlong)puVar9 + 2);
        }
        if (puVar17[-4] == 0xdddd) {
          *(undefined8 *)(puVar19 + -8) = 0x1402d811e;
          FUN_1402d9040();
        }
        goto LAB_1402d811e;
      }
    }
  }
LAB_1402d814a:
  puVar19 = puVar4;
  uVar8 = local_60;
  uVar10 = *puVar21;
  while ((uVar10 != 0 && (uVar12 = 0, *param_5 != 0))) {
    uVar16 = 0;
    uVar15 = 0;
    uVar7 = uVar12;
    puVar20 = puVar21;
    do {
      puVar20 = puVar20 + 1;
      iVar6 = (int)uVar7;
      uVar11 = iVar6 + 1;
      uVar7 = (ulonglong)uVar11;
      uVar12 = uVar12 + 1;
    } while (*puVar20 == *puVar21);
    uVar10 = *puVar21;
    iVar13 = 100;
    uVar22 = 1;
    if (uVar10 < 0x65) {
      if (uVar10 == 100) {
        if ((uVar11 != 1) && (uVar22 = uVar15, uVar11 != 2)) {
          if (uVar11 == 3) {
            iVar13 = 0x61;
          }
          else {
            if (uVar11 != 4) goto LAB_1402d83b2;
            iVar13 = iVar6 + 0x3e;
          }
        }
        goto LAB_1402d83d0;
      }
      if (uVar10 != 0x27) {
        if (uVar10 == 0x41) {
LAB_1402d81c1:
          *(undefined8 *)(puVar19 + -8) = 0x1402d81d0;
          iVar6 = FUN_1402c12c0(puVar21,L"am/pm");
          if (iVar6 == 0) {
            puVar20 = puVar21 + 5;
          }
          else {
            *(undefined8 *)(puVar19 + -8) = 0x1402d823b;
            iVar6 = FUN_1402c12c0(puVar21,&DAT_14042f218);
            if (iVar6 == 0) {
              puVar20 = puVar21 + 3;
            }
          }
          iVar13 = 0x70;
          uVar22 = uVar15;
        }
        else {
          iVar13 = 0x48;
          if (uVar10 == 0x48) {
            if ((uVar11 != 1) && (uVar22 = uVar15, uVar11 != 2)) goto LAB_1402d83b2;
          }
          else {
            if (uVar10 != 0x4d) {
              if (uVar10 != 0x61) goto LAB_1402d83b2;
              goto LAB_1402d81c1;
            }
            if ((uVar11 == 1) || (uVar22 = uVar16, uVar11 == 2)) {
              iVar13 = 0x6d;
            }
            else if (uVar11 == 3) {
              iVar13 = 0x62;
              uVar22 = uVar15;
            }
            else {
              if (uVar11 != 4) goto LAB_1402d83b2;
              iVar13 = iVar6 + 0x3f;
              uVar22 = uVar15;
            }
          }
        }
        goto LAB_1402d83d0;
      }
      if ((uVar11 & 1) == 0) {
        puVar20 = puVar21 + (int)uVar11;
      }
      else {
        puVar20 = puVar21 + uVar12;
        uVar10 = *puVar20;
        if (uVar10 == 0) break;
        do {
          if ((*param_5 == 0) || (puVar20 = puVar20 + 1, uVar10 == 0x27)) break;
          *(ushort *)*param_4 = uVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          uVar10 = *puVar20;
        } while (uVar10 != 0);
      }
    }
    else {
      if (uVar10 == 0x68) {
        if ((uVar11 != 1) && (uVar22 = uVar16, uVar11 != 2)) goto LAB_1402d83b2;
        iVar13 = 0x49;
      }
      else if (uVar10 == 0x6d) {
        if ((uVar11 != 1) && (uVar22 = uVar16, uVar11 != 2)) goto LAB_1402d83b2;
        iVar13 = 0x4d;
      }
      else if (uVar10 == 0x73) {
        if ((uVar11 != 1) && (uVar22 = uVar16, uVar11 != 2)) goto LAB_1402d83b2;
        iVar13 = 0x53;
      }
      else {
        if (uVar10 == 0x74) {
          if (*(int *)(local_68 + 4) < 0xc) {
            psVar14 = *(short **)(param_6 + 0x290);
          }
          else {
            psVar14 = *(short **)(param_6 + 0x298);
          }
          if ((uVar11 == 1) && (*param_5 != 0)) {
            *(short *)*param_4 = *psVar14;
            *param_4 = *param_4 + 2;
            *param_5 = *param_5 + -1;
          }
          else {
            while ((sVar1 = *psVar14, sVar1 != 0 && (*param_5 != 0))) {
              psVar14 = psVar14 + 1;
              *(short *)*param_4 = sVar1;
              *param_4 = *param_4 + 2;
              *param_5 = *param_5 + -1;
            }
          }
          goto LAB_1402d83fb;
        }
        if (uVar10 != 0x79) {
LAB_1402d83b2:
          puVar20 = puVar21 + 1;
          *(ushort *)*param_4 = uVar10;
          *param_4 = *param_4 + 2;
          *param_5 = *param_5 + -1;
          goto LAB_1402d83fb;
        }
        if (uVar11 == 2) {
          iVar13 = 0x79;
          uVar22 = uVar15;
        }
        else {
          if (uVar11 != 4) goto LAB_1402d83b2;
          iVar13 = iVar6 + 0x56;
          uVar22 = uVar15;
        }
      }
LAB_1402d83d0:
      puVar3 = local_68;
      puVar19[0x30] = uVar22;
      *(longlong *)(puVar19 + 0x28) = param_6;
      *(longlong **)(puVar19 + 0x20) = param_5;
      *(undefined8 *)(puVar19 + -8) = 0x1402d83ed;
      cVar5 = FUN_1402d6ef0(uVar8,iVar13,puVar3,param_4);
      if (cVar5 == '\0') {
        *(undefined8 *)(puVar19 + -8) = 0x1402d8413;
        puVar9 = (undefined4 *)FUN_1402caf34();
        *puVar9 = 0x16;
        uVar8 = 0;
        goto LAB_1402d8120;
      }
    }
LAB_1402d83fb:
    uVar10 = *puVar20;
    puVar21 = puVar20;
  }
LAB_1402d811e:
  uVar8 = 1;
LAB_1402d8120:
  *(undefined8 *)(puVar19 + -8) = 0x1402d812c;
  return uVar8;
}

