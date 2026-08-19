// Function: FUN_1400c2d00
// Addr: 1400c2d00
// Size: 810 bytes


void FUN_1400c2d00(undefined8 param_1,int param_2,longlong param_3)

{
  int *piVar1;
  longlong *plVar2;
  longlong *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  code *pcVar6;
  bool bVar7;
  char cVar8;
  int iVar9;
  longlong lVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  ulonglong uVar14;
  longlong *plVar15;
  int iVar16;
  longlong local_40;
  
  plVar15 = (longlong *)(*(longlong *)ThreadLocalStoragePointer + 0x2a0);
  if (*plVar15 != 0) {
    do {
      if (param_3 != 0) {
        if (*(longlong **)(param_3 + 0x38) == (longlong *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_14028c390();
        }
        (**(code **)(**(longlong **)(param_3 + 0x38) + 0x10))();
      }
      lVar13 = *plVar15;
      if (*(longlong *)(lVar13 + 0x10) - *(longlong *)(lVar13 + 8) >> 3 == 0) {
        return;
      }
      bVar7 = false;
      iVar16 = 0;
      do {
        plVar2 = *(longlong **)(*(longlong *)(lVar13 + 8) + (longlong)iVar16 * 8);
        if (param_2 <= (int)plVar2[4]) {
          if (param_3 != 0) {
            plVar3 = (longlong *)*plVar2;
            if ((plVar3 == (longlong *)0x0) ||
               (((char)plVar2[1] != '\0' && ((char)plVar3[0x17] != '\0')))) goto LAB_1400c3041;
            iVar9 = func_0x000140290e50(plVar3 + 4);
            if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
              FUN_140290e00(5);
            }
            if (*(int *)((longlong)plVar3 + 0x6c) == 0x7fffffff) {
              *(undefined4 *)((longlong)plVar3 + 0x6c) = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
              FUN_140290e00(6);
            }
            cVar8 = (**(code **)(*plVar3 + 0x18))(plVar3);
            if (cVar8 != '\0') {
LAB_1400c2f7e:
              FUN_140290f70(plVar3 + 4);
              (*DAT_140426240)(0);
              bVar7 = true;
              goto code_r0x0001400c2fe9;
            }
            FUN_140014ec0(&local_40);
            lVar13 = local_40;
            if (*(int *)((longlong)plVar3 + 0xbc) == 0) {
              while( true ) {
                lVar10 = FUN_1402914c0();
                lVar11 = func_0x0001402914a0();
                if (lVar10 == 10000000) {
                  lVar11 = lVar11 * 100;
                }
                else {
                  if (lVar10 == 24000000) {
                    lVar12 = (lVar11 * 2) / 3;
                    lVar11 = lVar11 * 0x29;
                  }
                  else {
                    lVar12 = ((lVar11 % lVar10) * 1000000000) / lVar10;
                    lVar11 = (lVar11 / lVar10) * 1000000000;
                  }
                  lVar11 = lVar12 + lVar11;
                }
                if ((lVar13 == lVar11) || (lVar13 < lVar11)) break;
                lVar11 = lVar13 - lVar11;
                if (lVar11 < 0x4e94914f0001) {
                  uVar14 = lVar11 / 1000000;
                  if ((longlong)(uVar14 * 1000000) < lVar11) {
                    uVar14 = uVar14 + 1;
                  }
                }
                else {
                  uVar14 = 86400000;
                }
                iVar9 = func_0x0001402920b0(plVar3 + 0xe,plVar3 + 4,uVar14 & 0xffffffff);
                if ((iVar9 == 0) && (*(int *)((longlong)plVar3 + 0xbc) != 0)) goto LAB_1400c2f1a;
              }
              if (*(int *)((longlong)plVar3 + 0xbc) == 0) goto LAB_1400c2f7e;
            }
LAB_1400c2f1a:
            FUN_140290f70(plVar3 + 4);
          }
          plVar15 = (longlong *)*plVar2;
          if ((plVar15 != (longlong *)0x0) &&
             (((char)plVar2[1] == '\0' || ((char)plVar15[0x17] == '\0')))) {
            (**(code **)(*plVar15 + 8))();
            puVar4 = (undefined8 *)*plVar2;
            if (puVar4 != (undefined8 *)0x0) {
              LOCK();
              piVar1 = (int *)(puVar4 + 1);
              iVar16 = *piVar1;
              *piVar1 = *piVar1 + -1;
              UNLOCK();
              if (iVar16 == 1) {
                puVar5 = (undefined8 *)puVar4[0x19];
                if (puVar5 == (undefined8 *)0x0) {
                  (**(code **)*puVar4)(puVar4,1);
                }
                else {
                  (**(code **)*puVar5)(puVar5,puVar4);
                }
              }
            }
            func_0x00014028b040(plVar2,0x28);
            return;
          }
LAB_1400c3041:
          func_0x00014009c0d0(4);
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
code_r0x0001400c2fe9:
        lVar13 = *plVar15;
        iVar16 = iVar16 + 1;
      } while ((ulonglong)(longlong)iVar16 <
               (ulonglong)(*(longlong *)(lVar13 + 0x10) - *(longlong *)(lVar13 + 8) >> 3));
    } while (bVar7);
  }
  return;
}

