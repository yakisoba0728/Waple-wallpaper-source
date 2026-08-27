// Function: FUN_1401fac50
// Addr: 1401fac50
// Size: 2085 bytes


undefined8 * FUN_1401fac50(undefined8 *param_1,longlong param_2,undefined8 param_3)

{
  int *piVar1;
  float fVar2;
  double dVar3;
  code *pcVar4;
  bool bVar5;
  char cVar6;
  char cVar7;
  undefined4 uVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined8 uVar11;
  undefined8 *puVar12;
  double *pdVar13;
  undefined8 ****ppppuVar14;
  ulonglong uVar15;
  uint uVar16;
  char *pcVar17;
  undefined1 *puVar18;
  undefined1 *puVar19;
  undefined4 uVar20;
  undefined1 auStack_148 [8];
  undefined1 auStack_140 [24];
  longlong *local_128;
  uint local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 ***local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  ulonglong local_e8;
  double local_e0;
  uint local_d8;
  double local_d0;
  double local_c8;
  double local_c0;
  undefined **local_b8;
  code *local_b0;
  longlong local_a0;
  undefined ***local_80;
  undefined **local_78;
  code *local_70;
  undefined8 *local_60;
  undefined ***local_40;
  undefined1 local_38 [32];
  
  puVar18 = auStack_148;
  FUN_1401e6980();
  *param_1 = &PTR_FUN_1404911a8;
  FUN_140153760(param_1 + 0x7a);
  local_120 = CONCAT31(local_120._1_3_,7);
  local_120 = local_120 & 0xfffffeff;
  param_1[0x92] = 0;
  local_118 = 0;
  uStack_110 = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  *(undefined2 *)(param_1 + 0x96) = 0;
  uVar8 = 0;
  *(undefined4 *)((longlong)param_1 + 0x4b4) = 0;
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  local_108 = 0;
  plVar9 = (longlong *)FUN_14028af20(0x10);
  *plVar9 = 0;
  plVar9[1] = 0;
  lVar10 = FUN_14028af20(0x58);
  *(longlong *)lVar10 = lVar10;
  *(longlong *)(lVar10 + 8) = lVar10;
  *(longlong *)(lVar10 + 0x10) = lVar10;
  *(undefined2 *)(lVar10 + 0x18) = 0x101;
  *plVar9 = lVar10;
  local_128 = plVar9;
  FUN_1401fd330(param_1,&local_128);
  lVar10 = FUN_140086de0(&local_128,"material","");
  if (*(char *)(lVar10 + 8) == '\x04') {
    FUN_140085cc0(lVar10,&local_100);
  }
  else {
    local_f0 = 0;
    uStack_f8 = 0;
    local_100 = (undefined8 ****)0x0;
    local_e8 = 0xf;
  }
  lVar10 = FUN_140086de0(&local_128,"width","");
  if (*(byte *)(lVar10 + 8) - 1 < 3) {
    uVar20 = FUN_140086220(lVar10);
  }
  else {
    uVar20 = *(undefined4 *)(param_1 + 0x5e);
  }
  *(undefined4 *)(param_1 + 0x5e) = uVar20;
  lVar10 = FUN_140086de0(&local_128,"height","");
  if (*(byte *)(lVar10 + 8) - 1 < 3) {
    uVar20 = FUN_140086220(lVar10);
  }
  else {
    uVar20 = *(undefined4 *)((longlong)param_1 + 0x2f4);
  }
  *(undefined4 *)((longlong)param_1 + 0x2f4) = uVar20;
  lVar10 = FUN_140086de0(&local_128,"fullscreen","");
  if ((*(char *)(lVar10 + 8) == '\x05') && (cVar6 = FUN_140086300(lVar10), cVar6 != '\0')) {
    *(uint *)((longlong)param_1 + 0x304) = *(uint *)((longlong)param_1 + 0x304) | 2;
    *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) | 0x200;
  }
  lVar10 = FUN_140086de0(&local_128,"nopadding","");
  if ((*(char *)(lVar10 + 8) == '\x05') && (cVar6 = FUN_140086300(lVar10), cVar6 != '\0')) {
    *(uint *)((longlong)param_1 + 0x304) = *(uint *)((longlong)param_1 + 0x304) | 4;
  }
  lVar10 = FUN_140086de0(&local_128,"autosize","");
  if ((*(char *)(lVar10 + 8) == '\x05') && (cVar6 = FUN_140086300(lVar10), cVar6 != '\0')) {
    *(uint *)((longlong)param_1 + 0x304) = *(uint *)((longlong)param_1 + 0x304) | 8;
  }
  lVar10 = FUN_140086de0(&local_128,"passthrough","");
  if ((*(char *)(lVar10 + 8) == '\x05') && (cVar6 = FUN_140086300(lVar10), cVar6 != '\0')) {
    *(uint *)((longlong)param_1 + 0x304) = *(uint *)((longlong)param_1 + 0x304) | 0x20;
  }
  lVar10 = FUN_140086de0(&local_128,"solidlayer","");
  if ((*(char *)(lVar10 + 8) == '\x05') && (cVar6 = FUN_140086300(lVar10), cVar6 != '\0')) {
    *(uint *)((longlong)param_1 + 0x304) = *(uint *)((longlong)param_1 + 0x304) | 0x200;
  }
  lVar10 = FUN_140086de0(&local_128,"projectlayer","");
  if ((*(char *)(lVar10 + 8) == '\x05') && (cVar6 = FUN_140086300(lVar10), cVar6 != '\0')) {
    *(uint *)((longlong)param_1 + 0x304) = *(uint *)((longlong)param_1 + 0x304) | 0x400;
    *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) | 0x200;
  }
  lVar10 = FUN_140086de0(&local_128,"instanced","");
  if ((*(char *)(lVar10 + 8) == '\x05') && (cVar6 = FUN_140086300(lVar10), cVar6 != '\0')) {
    *(uint *)((longlong)param_1 + 0x304) = *(uint *)((longlong)param_1 + 0x304) | 0x800;
  }
  if ((*(uint *)((longlong)param_1 + 0x304) & 0x800) == 0) {
    ppppuVar14 = &local_100;
    if (0xf < local_e8) {
      ppppuVar14 = (undefined8 ****)local_100;
    }
    uVar11 = FUN_14014ff70(param_2 + 0x1630,ppppuVar14);
    param_1[0x93] = uVar11;
  }
  else {
    puVar12 = (undefined8 *)FUN_140086de0(param_3,&DAT_14048fb5c,&DAT_14048fb60);
    if ((char)*(uint *)(puVar12 + 1) == '\x04') {
      pcVar17 = (char *)*puVar12;
      if (pcVar17 == (char *)0x0) {
        param_1[0x5e] = 0;
      }
      else {
        if ((*(uint *)(puVar12 + 1) >> 8 & 1) != 0) {
          pcVar17 = pcVar17 + 4;
        }
        param_1[0x5e] = 0;
        if ((pcVar17 != (char *)0x0) && (*pcVar17 != '\0')) {
          dVar3 = (double)FUN_1402d06ac();
          *(float *)(param_1 + 0x5e) = (float)dVar3;
          cVar6 = *pcVar17;
          for (; (cVar7 = '\0', cVar6 != '\0' && (cVar7 = *pcVar17, cVar7 != ' '));
              pcVar17 = pcVar17 + 1) {
            cVar6 = pcVar17[1];
          }
          bVar5 = false;
          if (cVar7 != '\0') {
            do {
              if (*pcVar17 != ' ') {
                if (!bVar5) goto LAB_1401fb054;
                break;
              }
              pcVar17 = pcVar17 + 1;
              bVar5 = true;
            } while (*pcVar17 != '\0');
            dVar3 = (double)FUN_1402d06ac(pcVar17);
            *(float *)((longlong)param_1 + 0x2f4) = (float)dVar3;
          }
        }
      }
    }
LAB_1401fb054:
    uVar11 = FUN_140086de0(param_3,"instance","");
    FUN_140085090(&local_b8,uVar11);
    uVar11 = FUN_140086de0(&local_b8,"usertexturereference","");
    fVar2 = *(float *)(param_1 + 0x5e);
    local_d8 = CONCAT31(local_d8._1_3_,3);
    uVar16 = local_d8 & 0xfffffeff;
    pdVar13 = (double *)FUN_140086de0(uVar11,"width","");
    local_d8 = *(uint *)(pdVar13 + 1);
    *(uint *)(pdVar13 + 1) = uVar16;
    local_e0 = *pdVar13;
    *pdVar13 = (double)fVar2;
    dVar3 = pdVar13[2];
    pdVar13[2] = 0.0;
    local_c8 = pdVar13[3];
    pdVar13[3] = 0.0;
    local_c0 = pdVar13[4];
    pdVar13[4] = 0.0;
    local_d0 = dVar3;
    FUN_140086d30(&local_e0);
    if (dVar3 != 0.0) {
      FUN_140017240((longlong)dVar3 + 0x40);
      FUN_140017240((longlong)dVar3 + 0x20);
      FUN_140017240(dVar3);
      thunk_FUN_14028af80(dVar3,0x60);
    }
    fVar2 = *(float *)((longlong)param_1 + 0x2f4);
    local_d8 = CONCAT31(local_d8._1_3_,3);
    uVar16 = local_d8 & 0xfffffeff;
    pdVar13 = (double *)FUN_140086de0(uVar11,"height","");
    local_d8 = *(uint *)(pdVar13 + 1);
    *(uint *)(pdVar13 + 1) = uVar16;
    local_e0 = *pdVar13;
    *pdVar13 = (double)fVar2;
    dVar3 = pdVar13[2];
    pdVar13[2] = 0.0;
    local_c8 = pdVar13[3];
    pdVar13[3] = 0.0;
    local_c0 = pdVar13[4];
    pdVar13[4] = 0.0;
    local_d0 = dVar3;
    FUN_140086d30(&local_e0);
    if (dVar3 != 0.0) {
      FUN_140017240((longlong)dVar3 + 0x40);
      FUN_140017240((longlong)dVar3 + 0x20);
      FUN_140017240(dVar3);
      thunk_FUN_14028af80(dVar3,0x60);
    }
    ppppuVar14 = &local_100;
    if (0xf < local_e8) {
      ppppuVar14 = (undefined8 ****)local_100;
    }
    uVar11 = FUN_140150770(param_2 + 0x1630,ppppuVar14,&local_b8);
    param_1[0x93] = uVar11;
    FUN_140085440(&local_b8);
  }
  lVar10 = param_1[0x93];
  local_78 = &PTR_LAB_1404910f8;
  local_70 = FUN_140209360;
  local_40 = &local_78;
  local_60 = param_1;
  if (*(longlong *)(lVar10 + 0x2c8) == 0) {
    if (*(longlong *)(lVar10 + 0xd0) != 0) {
      local_b8 = &PTR_LAB_14048b6d0;
      local_b0 = FUN_140157780;
      local_80 = &local_b8;
      local_a0 = lVar10;
      uVar8 = FUN_14015f330(*(longlong *)(lVar10 + 0xd0),&local_b8);
      *(undefined4 *)(lVar10 + 0x2f8) = uVar8;
      goto LAB_1401fb2ad;
    }
    FUN_1400d2440(&local_78,0);
  }
  else {
LAB_1401fb2ad:
    piVar1 = (int *)(*(longlong *)(lVar10 + 200) + 0x1458);
    *piVar1 = *piVar1 + 1;
    plVar9 = (longlong *)FUN_1400d21b0(lVar10 + 0x2b8,local_38,*(longlong *)(lVar10 + 200) + 0x1458)
    ;
    FUN_1400cb010(*plVar9 + 0x18,&local_78);
    uVar8 = *(undefined4 *)(*(longlong *)(lVar10 + 200) + 0x1458);
    if (local_40 != (undefined ***)0x0) {
      (*(code *)(*local_40)[4])
                (local_40,CONCAT71((int7)((ulonglong)&local_78 >> 8),local_40 != &local_78));
    }
  }
  *(undefined4 *)((longlong)param_1 + 0x4b4) = uVar8;
  if ((*(char *)(param_1[0x93] + 0x1f0) == '\0') || (*(char *)(param_1[0x93] + 0x1f0) == '\x03')) {
    uVar16 = *(uint *)((longlong)param_1 + 0x304);
    if ((uVar16 >> 5 & 1) == 0) goto LAB_1401fb357;
    if ((uVar16 >> 6 & 1) == 0) goto LAB_1401fb34b;
LAB_1401fb35f:
    *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) | 4;
  }
  else {
    uVar16 = *(uint *)((longlong)param_1 + 0x304);
LAB_1401fb34b:
    *(ushort *)(param_1 + 0x24) = *(ushort *)(param_1 + 0x24) | 0x100;
LAB_1401fb357:
    if ((uVar16 >> 5 & 1) != 0) goto LAB_1401fb35f;
  }
  if (local_e8 < 0x10) {
LAB_1401fb3a0:
    plVar9 = local_128;
    local_f0 = 0;
    local_e8 = 0xf;
    local_100 = (undefined8 ***)((ulonglong)local_100 & 0xffffffffffffff00);
    puVar19 = auStack_148;
    switch((undefined1)local_120) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 5:
      break;
    case 4:
      goto switchD_1401fb3ce_caseD_4;
    case 6:
    case 7:
      puVar19 = auStack_148;
      if (local_128 != (longlong *)0x0) {
        FUN_140088e40(local_128);
        thunk_FUN_14028af80(plVar9,0x10);
        puVar19 = auStack_148;
      }
      break;
    default:
      FID_conflict__assert(L"false",L"D:\\dev\\we\\windows\\src\\json\\src\\json_value.cpp",0x434);
      puVar19 = auStack_148;
    }
  }
  else {
    uVar15 = local_e8 + 1;
    ppppuVar14 = (undefined8 ****)local_100;
    if (uVar15 < 0x1000) {
LAB_1401fb39b:
      thunk_FUN_14028af80(ppppuVar14,uVar15);
      goto LAB_1401fb3a0;
    }
    ppppuVar14 = (undefined8 ****)local_100[-1];
    if ((ulonglong)((longlong)local_100 + (-8 - (longlong)ppppuVar14)) < 0x20) {
      uVar15 = local_e8 + 0x28;
      goto LAB_1401fb39b;
    }
    pcVar4 = (code *)swi(0x29);
    (*pcVar4)(5);
    puVar18 = auStack_140;
switchD_1401fb3ce_caseD_4:
    puVar19 = puVar18;
    if ((*(uint *)(puVar18 + 0x28) >> 8 & 1) != 0) {
      *(undefined8 *)(puVar18 + -8) = 0x1401fb3ec;
      thunk_FUN_1402d9040(*(undefined8 *)(puVar18 + 0x20));
    }
  }
  lVar10 = *(longlong *)(puVar19 + 0x30);
  *(undefined8 *)(puVar19 + 0x20) = 0;
  if (lVar10 != 0) {
    *(undefined8 *)(puVar19 + -8) = 0x1401fb440;
    FUN_140017240(lVar10 + 0x40);
    *(undefined8 *)(puVar19 + -8) = 0x1401fb449;
    FUN_140017240(lVar10 + 0x20);
    *(undefined8 *)(puVar19 + -8) = 0x1401fb451;
    FUN_140017240(lVar10);
    *(undefined8 *)(puVar19 + -8) = 0x1401fb45e;
    thunk_FUN_14028af80(lVar10,0x60);
  }
  return param_1;
}

