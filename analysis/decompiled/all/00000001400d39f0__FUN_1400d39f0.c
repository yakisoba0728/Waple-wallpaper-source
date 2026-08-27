// Function: FUN_1400d39f0
// Addr: 1400d39f0
// Size: 1148 bytes


longlong * FUN_1400d39f0(longlong *param_1,longlong *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  ulonglong uVar2;
  undefined8 ****ppppuVar3;
  ulonglong uVar4;
  longlong *plVar5;
  char cVar6;
  int iVar7;
  longlong *plVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 *puVar11;
  undefined8 *puVar12;
  undefined8 *****pppppuVar13;
  undefined4 uVar14;
  ulonglong _Size;
  ulonglong uVar15;
  undefined8 *local_res10;
  undefined8 ****local_e8 [2];
  ulonglong local_d8;
  ulonglong local_d0;
  undefined4 local_c8;
  undefined1 local_c4;
  undefined1 local_c3;
  undefined8 ****local_c0 [2];
  undefined8 local_b0;
  ulonglong local_a8;
  undefined8 ****local_a0 [2];
  undefined8 local_90;
  ulonglong local_88;
  undefined8 ****local_80 [2];
  undefined8 local_70;
  ulonglong local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined8 *local_58;
  undefined4 local_50;
  
  *param_1 = 0;
  param_1[1] = 0;
  plVar8 = (longlong *)FUN_14028af20(0xb0);
  *plVar8 = (longlong)plVar8;
  plVar8[1] = (longlong)plVar8;
  plVar8[2] = (longlong)plVar8;
  *(undefined2 *)(plVar8 + 3) = 0x101;
  *param_1 = (longlong)plVar8;
  puVar1 = *(undefined8 **)(*param_2 + 8);
  if (*(char *)((longlong)puVar1 + 0x19) == '\0') {
    plVar9 = (longlong *)FUN_14028af20(0xb0);
    FUN_1400d3e70(plVar9 + 4,puVar1 + 4);
    *plVar9 = (longlong)plVar8;
    plVar9[2] = (longlong)plVar8;
    *(undefined2 *)(plVar9 + 3) = 0;
    plVar9[1] = (longlong)plVar8;
    *(undefined1 *)(plVar9 + 3) = *(undefined1 *)(puVar1 + 3);
    lVar10 = FUN_1400e1280(param_1,*puVar1,plVar9);
    *plVar9 = lVar10;
    lVar10 = FUN_1400e1280(param_1,puVar1[2],plVar9);
    plVar9[2] = lVar10;
    plVar8 = plVar9;
  }
  *(longlong **)(*param_1 + 8) = plVar8;
  plVar8 = (longlong *)*param_1;
  param_1[1] = param_2[1];
  plVar9 = (longlong *)plVar8[1];
  if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
    cVar6 = *(char *)(*plVar9 + 0x19);
    while (cVar6 == '\0') {
      plVar9 = (longlong *)*plVar9;
      cVar6 = *(char *)(*plVar9 + 0x19);
    }
    *plVar8 = (longlong)plVar9;
    lVar10 = *(longlong *)(*param_1 + 8);
    cVar6 = *(char *)(*(longlong *)(lVar10 + 0x10) + 0x19);
    while (cVar6 == '\0') {
      lVar10 = *(longlong *)(lVar10 + 0x10);
      cVar6 = *(char *)(*(longlong *)(lVar10 + 0x10) + 0x19);
    }
    *(longlong *)(*param_1 + 0x10) = lVar10;
  }
  else {
    *plVar8 = (longlong)plVar8;
    *(longlong *)(*param_1 + 0x10) = *param_1;
  }
  cVar6 = *(char *)((longlong)*(longlong **)*param_3 + 0x19);
  plVar8 = *(longlong **)*param_3;
  do {
    if (cVar6 != '\0') {
      return param_1;
    }
    FUN_140016fc0(local_e8,plVar8 + 4);
    local_c8 = (undefined4)plVar8[8];
    local_c4 = *(undefined1 *)((longlong)plVar8 + 0x44);
    local_c3 = *(undefined1 *)((longlong)plVar8 + 0x45);
    FUN_140016fc0(local_c0,plVar8 + 9);
    FUN_140016fc0(local_a0,plVar8 + 0xd);
    FUN_140016fc0(local_80,plVar8 + 0x11);
    uVar15 = local_d0;
    uVar4 = local_d8;
    ppppuVar3 = local_e8[0];
    local_60 = (undefined4)plVar8[0x15];
    local_5c = *(undefined4 *)((longlong)plVar8 + 0xac);
    puVar1 = (undefined8 *)*param_1;
    local_res10 = (undefined8 *)puVar1[1];
    puVar12 = local_res10;
    puVar11 = puVar1;
    if (*(char *)((longlong)local_res10 + 0x19) == '\0') {
      do {
        local_res10 = puVar12;
        uVar2 = local_res10[6];
        puVar12 = local_res10 + 4;
        pppppuVar13 = local_e8;
        if (0xf < uVar15) {
          pppppuVar13 = (undefined8 *****)ppppuVar3;
        }
        if (0xf < (ulonglong)local_res10[7]) {
          puVar12 = (undefined8 *)*puVar12;
        }
        _Size = uVar2;
        if (uVar4 < uVar2) {
          _Size = uVar4;
        }
        iVar7 = memcmp(puVar12,pppppuVar13,_Size);
        if (iVar7 == 0) {
          if (uVar2 < uVar4) {
            cVar6 = -1;
            goto LAB_1400d3bf9;
          }
          if (uVar4 < uVar2) goto LAB_1400d3bf7;
LAB_1400d3c05:
          uVar14 = 1;
          puVar12 = (undefined8 *)*local_res10;
          puVar11 = local_res10;
        }
        else {
          if (iVar7 < 0) {
            cVar6 = -1;
          }
          else {
LAB_1400d3bf7:
            cVar6 = '\x01';
          }
LAB_1400d3bf9:
          if (-1 < cVar6) goto LAB_1400d3c05;
          puVar12 = (undefined8 *)local_res10[2];
          uVar14 = 0;
        }
      } while (*(char *)((longlong)puVar12 + 0x19) == '\0');
    }
    else {
      uVar14 = 0;
    }
    if (*(char *)((longlong)puVar11 + 0x19) == '\0') {
      puVar12 = puVar11 + 4;
      uVar2 = puVar11[6];
      if (0xf < (ulonglong)puVar11[7]) {
        puVar12 = (undefined8 *)*puVar12;
      }
      pppppuVar13 = local_e8;
      if (0xf < uVar15) {
        pppppuVar13 = (undefined8 *****)ppppuVar3;
      }
      uVar15 = uVar4;
      if (uVar2 < uVar4) {
        uVar15 = uVar2;
      }
      iVar7 = memcmp(pppppuVar13,puVar12,uVar15);
      if (iVar7 == 0) {
        if (uVar4 < uVar2) {
          cVar6 = -1;
          goto LAB_1400d3c6a;
        }
        if (uVar2 < uVar4) goto LAB_1400d3c68;
      }
      else {
        if (iVar7 < 0) {
          cVar6 = -1;
        }
        else {
LAB_1400d3c68:
          cVar6 = '\x01';
        }
LAB_1400d3c6a:
        if (cVar6 < '\0') goto LAB_1400d3c77;
      }
    }
    else {
LAB_1400d3c77:
      if (param_1[1] == 0x1745d1745d1745d) {
                    /* WARNING: Subroutine does not return */
        FUN_14003a750();
      }
      plVar9 = (longlong *)FUN_14028af20(0xb0);
      FUN_140016fc0(plVar9 + 4,local_e8);
      plVar9[8] = 0;
      plVar9[0x15] = 0;
      plVar9[9] = 0;
      plVar9[10] = 0;
      plVar9[0xb] = 0;
      plVar9[0xc] = 0xf;
      *(undefined1 *)(plVar9 + 9) = 0;
      plVar9[0xd] = 0;
      plVar9[0xe] = 0;
      plVar9[0xf] = 0;
      plVar9[0x10] = 0xf;
      *(undefined1 *)(plVar9 + 0xd) = 0;
      plVar9[0x11] = 0;
      plVar9[0x12] = 0;
      plVar9[0x13] = 0;
      plVar9[0x14] = 0xf;
      *(undefined1 *)(plVar9 + 0x11) = 0;
      *plVar9 = (longlong)puVar1;
      plVar9[1] = (longlong)puVar1;
      plVar9[2] = (longlong)puVar1;
      local_58 = local_res10;
      *(undefined2 *)(plVar9 + 3) = 0;
      local_50 = uVar14;
      puVar11 = (undefined8 *)FUN_1400371e0(param_1,&local_58,plVar9);
    }
    *(undefined4 *)(puVar11 + 8) = local_c8;
    *(undefined1 *)((longlong)puVar11 + 0x44) = local_c4;
    *(undefined1 *)((longlong)puVar11 + 0x45) = local_c3;
    if ((undefined8 *****)(puVar11 + 9) != local_c0) {
      pppppuVar13 = local_c0;
      if (0xf < local_a8) {
        pppppuVar13 = (undefined8 *****)local_c0[0];
      }
      FUN_14000f880(puVar11 + 9,pppppuVar13,local_b0);
    }
    if ((undefined8 *****)(puVar11 + 0xd) != local_a0) {
      pppppuVar13 = local_a0;
      if (0xf < local_88) {
        pppppuVar13 = (undefined8 *****)local_a0[0];
      }
      FUN_14000f880(puVar11 + 0xd,pppppuVar13,local_90);
    }
    if ((undefined8 *****)(puVar11 + 0x11) != local_80) {
      pppppuVar13 = local_80;
      if (0xf < local_68) {
        pppppuVar13 = (undefined8 *****)local_80[0];
      }
      FUN_14000f880(puVar11 + 0x11,pppppuVar13,local_70);
    }
    *(undefined4 *)(puVar11 + 0x15) = local_60;
    *(undefined4 *)((longlong)puVar11 + 0xac) = local_5c;
    FUN_140017240(local_80);
    FUN_140017240(local_a0);
    FUN_140017240(local_c0);
    FUN_140017240(local_e8);
    plVar9 = (longlong *)plVar8[2];
    if (*(char *)((longlong)plVar9 + 0x19) == '\0') {
      cVar6 = *(char *)(*plVar9 + 0x19);
      while (cVar6 == '\0') {
        plVar9 = (longlong *)*plVar9;
        cVar6 = *(char *)(*plVar9 + 0x19);
      }
    }
    else {
      cVar6 = *(char *)(plVar8[1] + 0x19);
      plVar5 = (longlong *)plVar8[1];
      while ((plVar9 = plVar5, cVar6 == '\0' && (plVar8 == (longlong *)plVar9[2]))) {
        cVar6 = *(char *)(plVar9[1] + 0x19);
        plVar5 = (longlong *)plVar9[1];
        plVar8 = plVar9;
      }
    }
    cVar6 = *(char *)((longlong)plVar9 + 0x19);
    plVar8 = plVar9;
  } while( true );
}

