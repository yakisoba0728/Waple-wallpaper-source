// Function: FUN_140075790
// Addr: 140075790
// Size: 768 bytes


/* WARNING: Removing unreachable block (ram,0x0001400758c5) */

void FUN_140075790(undefined8 param_1,longlong param_2,int *param_3)

{
  char cVar1;
  undefined8 *puVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  longlong *plVar7;
  byte bVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  undefined8 uVar12;
  longlong *plVar13;
  undefined8 ****ppppuVar14;
  ulonglong uVar15;
  longlong *plVar16;
  undefined8 ****ppppuVar17;
  ulonglong uVar18;
  undefined8 local_res8;
  undefined8 ***local_48 [2];
  longlong local_38;
  ulonglong local_30;
  
  *param_3 = -1;
  param_3[1] = 0;
  if (*(longlong *)(param_3 + 2) != *(longlong *)(param_3 + 4)) {
    *(longlong *)(param_3 + 4) = *(longlong *)(param_3 + 2);
  }
  if (*(char *)(param_2 + 8) == '\a') {
    local_res8 = param_1;
    lVar11 = FUN_140086de0(param_2,"transition","");
    if (*(char *)(lVar11 + 8) == '\x05') {
      uVar12 = FUN_140086de0(param_2,"transition","");
      bVar8 = FUN_140086300(uVar12);
      *param_3 = (uint)bVar8 * 2 + -2;
    }
    else {
      lVar11 = FUN_140086de0(param_2,"transition","");
      if (*(char *)(lVar11 + 8) == '\x04') {
        uVar12 = FUN_140086de0(param_2,"transition","");
        FUN_140085cc0(uVar12,local_48);
        uVar18 = local_30;
        ppppuVar17 = (undefined8 ****)local_48[0];
        ppppuVar14 = local_48;
        if (0xf < local_30) {
          ppppuVar14 = (undefined8 ****)local_48[0];
        }
        if ((local_38 == 6) && (iVar10 = memcmp(ppppuVar14,"random",6), iVar10 == 0)) {
          *param_3 = -3;
          plVar13 = (longlong *)FUN_140086de0(param_2,"transitionpool","");
          ppppuVar17 = (undefined8 ****)local_48[0];
          uVar18 = local_30;
          if ((*(uint *)(plVar13 + 1) & 0xff) == 6) {
            puVar2 = (undefined8 *)*plVar13;
            if (puVar2 == (undefined8 *)0x0) {
              plVar16 = (longlong *)0x0;
            }
            else {
              plVar16 = *(longlong **)*puVar2;
            }
            if ((undefined8 *)*plVar13 == (undefined8 *)0x0) {
              bVar6 = true;
              plVar13 = (longlong *)0x0;
            }
            else {
              plVar13 = *(longlong **)*plVar13;
              bVar6 = false;
            }
            while( true ) {
              bVar5 = bVar6;
              if (puVar2 != (undefined8 *)0x0) {
                bVar5 = plVar16 == plVar13;
              }
              ppppuVar17 = (undefined8 ****)local_48[0];
              uVar18 = local_30;
              if (bVar5) break;
              if ((char)*(uint *)(plVar16 + 7) == '\x04') {
                lVar11 = plVar16[6];
                if ((lVar11 != 0) && ((*(uint *)(plVar16 + 7) >> 8 & 1) != 0)) {
                  lVar11 = lVar11 + 4;
                }
                uVar9 = FUN_1402c82c0(lVar11);
                local_res8 = CONCAT44(local_res8._4_4_,uVar9);
                FUN_140077840(param_3 + 2,&local_res8);
              }
              plVar3 = (longlong *)plVar16[2];
              if (*(char *)((longlong)plVar3 + 0x19) == '\0') {
                cVar1 = *(char *)(*plVar3 + 0x19);
                plVar16 = plVar3;
                while (cVar1 == '\0') {
                  plVar16 = (longlong *)*plVar16;
                  cVar1 = *(char *)(*plVar16 + 0x19);
                }
              }
              else {
                cVar1 = *(char *)(plVar16[1] + 0x19);
                plVar7 = (longlong *)plVar16[1];
                plVar3 = plVar16;
                while ((plVar16 = plVar7, cVar1 == '\0' && (plVar3 == (longlong *)plVar16[2]))) {
                  cVar1 = *(char *)(plVar16[1] + 0x19);
                  plVar7 = (longlong *)plVar16[1];
                  plVar3 = plVar16;
                }
              }
            }
          }
        }
        else {
          ppppuVar14 = local_48;
          if (0xf < uVar18) {
            ppppuVar14 = ppppuVar17;
          }
          if ((local_38 != 4) || (iVar10 = memcmp(ppppuVar14,&DAT_14047709c,4), iVar10 != 0)) {
            ppppuVar14 = local_48;
            if (0xf < uVar18) {
              ppppuVar14 = ppppuVar17;
            }
            iVar10 = FUN_1402c82c0(ppppuVar14);
            *param_3 = iVar10;
            ppppuVar17 = (undefined8 ****)local_48[0];
            uVar18 = local_30;
          }
        }
        if (0xf < uVar18) {
          uVar15 = uVar18 + 1;
          ppppuVar14 = ppppuVar17;
          if (0xfff < uVar15) {
            ppppuVar14 = (undefined8 ****)ppppuVar17[-1];
            if (0x1f < (ulonglong)((longlong)ppppuVar17 + (-8 - (longlong)ppppuVar14))) {
              pcVar4 = (code *)swi(0x29);
              (*pcVar4)(5);
              pcVar4 = (code *)swi(3);
              (*pcVar4)();
              return;
            }
            uVar15 = uVar18 + 0x28;
          }
          thunk_FUN_14028af80(ppppuVar14,uVar15);
        }
      }
    }
    param_3[1] = 500;
    lVar11 = FUN_140086de0(param_2,"transitiontime","");
    if (*(byte *)(lVar11 + 8) - 1 < 3) {
      uVar12 = FUN_140086de0(param_2,"transitiontime","");
      iVar10 = FUN_140085ee0(uVar12);
      param_3[1] = iVar10;
    }
  }
  return;
}

