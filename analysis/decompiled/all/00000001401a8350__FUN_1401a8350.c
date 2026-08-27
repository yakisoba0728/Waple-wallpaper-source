// Function: FUN_1401a8350
// Addr: 1401a8350
// Size: 667 bytes


void FUN_1401a8350(longlong param_1,ulonglong param_2)

{
  byte *pbVar1;
  longlong *plVar2;
  longlong *plVar3;
  ulonglong _Size;
  undefined8 *puVar4;
  undefined8 *puVar5;
  longlong *plVar6;
  int iVar7;
  ulonglong uVar8;
  ulonglong uVar9;
  longlong *plVar10;
  byte bVar11;
  longlong *_Buf1;
  longlong *plVar12;
  ulonglong uVar13;
  longlong lVar14;
  longlong *plVar15;
  undefined8 local_res10;
  
  for (lVar14 = 0x3f; 0xfffffffffffffffU >> lVar14 == 0; lVar14 = lVar14 + -1) {
  }
  if ((ulonglong)(1L << ((byte)lVar14 & 0x3f)) < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_14028c2e0("invalid hash bucket count");
  }
  plVar2 = *(longlong **)(param_1 + 8);
  uVar8 = param_2 - 1 | 1;
  lVar14 = 0x3f;
  if (uVar8 != 0) {
    for (; uVar8 >> lVar14 == 0; lVar14 = lVar14 + -1) {
    }
  }
  bVar11 = (char)lVar14 + 1;
  lVar14 = 1L << (bVar11 & 0x3f);
  FUN_14004f190(param_1 + 0x18,2L << (bVar11 & 0x3f),plVar2);
  *(longlong *)(param_1 + 0x38) = lVar14;
  *(longlong *)(param_1 + 0x30) = lVar14 + -1;
  plVar6 = (longlong *)**(undefined8 **)(param_1 + 8);
joined_r0x0001401a83d2:
  do {
    while( true ) {
      if (plVar6 == plVar2) {
        local_res10 = 0;
        FUN_1401a85f0(&local_res10);
        return;
      }
      uVar9 = 0xcbf29ce484222325;
      uVar8 = plVar6[5];
      plVar10 = plVar6 + 2;
      plVar3 = (longlong *)*plVar6;
      if (0xf < uVar8) {
        plVar10 = (longlong *)plVar6[2];
      }
      _Size = plVar6[4];
      uVar13 = 0;
      if (_Size != 0) {
        do {
          pbVar1 = (byte *)((longlong)plVar10 + uVar13);
          uVar13 = uVar13 + 1;
          uVar9 = (uVar9 ^ *pbVar1) * 0x100000001b3;
        } while (uVar13 < _Size);
      }
      lVar14 = *(longlong *)(param_1 + 0x18);
      uVar9 = *(ulonglong *)(param_1 + 0x30) & uVar9;
      plVar10 = *(longlong **)(lVar14 + uVar9 * 0x10);
      if (plVar10 != plVar2) break;
      *(longlong **)(lVar14 + uVar9 * 0x10) = plVar6;
      *(longlong **)(lVar14 + 8 + uVar9 * 0x10) = plVar6;
      plVar6 = plVar3;
    }
    plVar15 = *(longlong **)(lVar14 + 8 + uVar9 * 0x10);
    plVar12 = plVar15 + 2;
    if (0xf < (ulonglong)plVar15[5]) {
      plVar12 = (longlong *)*plVar12;
    }
    _Buf1 = plVar6 + 2;
    if (0xf < uVar8) {
      _Buf1 = (longlong *)plVar6[2];
    }
    if (_Size != plVar15[4]) {
LAB_1401a84cf:
      if (plVar10 != plVar15) {
        do {
          plVar15 = (longlong *)plVar15[1];
          plVar10 = plVar15 + 2;
          if (0xf < (ulonglong)plVar15[5]) {
            plVar10 = (longlong *)*plVar10;
          }
          if (uVar8 < 0x10) {
            plVar12 = plVar6 + 2;
          }
          else {
            plVar12 = (longlong *)plVar6[2];
          }
          if (_Size == plVar15[4]) {
            if ((_Size == 0) || (iVar7 = memcmp(plVar12,plVar10,_Size), iVar7 == 0)) {
              lVar14 = *plVar15;
              plVar10 = (longlong *)plVar6[1];
              *plVar10 = (longlong)plVar3;
              plVar12 = (longlong *)plVar3[1];
              *plVar12 = lVar14;
              puVar4 = *(undefined8 **)(lVar14 + 8);
              *puVar4 = plVar6;
              *(longlong **)(lVar14 + 8) = plVar12;
              plVar3[1] = (longlong)plVar10;
              plVar6[1] = (longlong)puVar4;
              plVar6 = plVar3;
              goto joined_r0x0001401a83d2;
            }
            uVar8 = plVar6[5];
          }
        } while (*(longlong **)(lVar14 + uVar9 * 0x10) != plVar15);
      }
      plVar10 = (longlong *)plVar6[1];
      *plVar10 = (longlong)plVar3;
      puVar4 = (undefined8 *)plVar3[1];
      *puVar4 = plVar15;
      puVar5 = (undefined8 *)plVar15[1];
      *puVar5 = plVar6;
      plVar15[1] = (longlong)puVar4;
      plVar3[1] = (longlong)plVar10;
      plVar6[1] = (longlong)puVar5;
      *(longlong **)(lVar14 + uVar9 * 0x10) = plVar6;
      plVar6 = plVar3;
      goto joined_r0x0001401a83d2;
    }
    if ((_Size != 0) && (iVar7 = memcmp(_Buf1,plVar12,_Size), iVar7 != 0)) {
      plVar10 = *(longlong **)(lVar14 + uVar9 * 0x10);
      uVar8 = plVar6[5];
      goto LAB_1401a84cf;
    }
    plVar15 = (longlong *)*plVar15;
    if (plVar15 != plVar6) {
      plVar10 = (longlong *)plVar6[1];
      *plVar10 = (longlong)plVar3;
      puVar4 = (undefined8 *)plVar3[1];
      *puVar4 = plVar15;
      puVar5 = (undefined8 *)plVar15[1];
      *puVar5 = plVar6;
      plVar15[1] = (longlong)puVar4;
      plVar3[1] = (longlong)plVar10;
      plVar6[1] = (longlong)puVar5;
    }
    *(longlong **)(lVar14 + 8 + uVar9 * 0x10) = plVar6;
    plVar6 = plVar3;
  } while( true );
}

