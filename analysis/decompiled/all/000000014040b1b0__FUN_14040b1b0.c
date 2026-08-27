// Function: FUN_14040b1b0
// Addr: 14040b1b0
// Size: 549 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_14040b1b0(LPCRITICAL_SECTION param_1,longlong param_2,longlong param_3,longlong param_4,
                  int param_5)

{
  undefined4 *puVar1;
  uint uVar2;
  int iVar3;
  longlong lVar4;
  undefined8 uVar5;
  code *pcVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  char cVar10;
  uint uVar11;
  ulonglong uVar12;
  longlong *plVar13;
  undefined8 *puVar14;
  longlong *plVar15;
  longlong *plVar16;
  bool bVar17;
  
  if (param_2 == 0) {
    return false;
  }
  if (((param_5 == 0) || (param_3 != 0)) || (param_4 != 0)) {
    EnterCriticalSection(param_1);
    uVar2 = *(uint *)((longlong)&param_1[1].DebugInfo + 4);
    plVar13 = (longlong *)0x0;
    plVar15 = plVar13;
    if (uVar2 != 0) {
      do {
        plVar16 = (longlong *)(*(longlong *)&param_1[1].LockCount + (longlong)plVar15 * 0x18);
        if (param_2 == *(longlong *)(*(longlong *)&param_1[1].LockCount + (longlong)plVar15 * 0x18))
        {
          plVar15 = plVar13;
          if (param_5 == 0) goto LAB_14040b3a3;
          lVar4 = plVar16[1];
          pcVar6 = (code *)plVar16[2];
          plVar16[1] = param_3;
          *plVar16 = param_2;
          plVar16[2] = param_4;
          LeaveCriticalSection(param_1);
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(lVar4);
          }
          goto LAB_14040b3a9;
        }
        uVar11 = (int)plVar15 + 1;
        plVar15 = (longlong *)(ulonglong)uVar11;
      } while (uVar11 < uVar2);
    }
    if (((int)uVar2 < *(int *)&param_1[1].DebugInfo) ||
       (cVar10 = FUN_1403a4a30(param_1 + 1,uVar2 + 1,0), cVar10 != '\0')) {
      uVar2 = *(uint *)((longlong)&param_1[1].DebugInfo + 4);
      plVar15 = (longlong *)(*(longlong *)&param_1[1].LockCount + (ulonglong)uVar2 * 0x18);
      *(uint *)((longlong)&param_1[1].DebugInfo + 4) = uVar2 + 1;
      *plVar15 = param_2;
      plVar15[1] = param_3;
      plVar15[2] = param_4;
    }
    else {
      plVar15 = &DAT_1404e4f20;
      DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
      _DAT_1404e4f28 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
      _DAT_1404e4f30 = DAT_14045dd20;
    }
LAB_14040b3a3:
    LeaveCriticalSection(param_1);
    plVar16 = plVar15;
LAB_14040b3a9:
    if (*(int *)&param_1[1].DebugInfo < 0) {
      plVar16 = plVar13;
    }
    bVar17 = plVar16 != (longlong *)0x0;
  }
  else {
    EnterCriticalSection(param_1);
    uVar2 = *(uint *)((longlong)&param_1[1].DebugInfo + 4);
    uVar12 = 0;
    lVar4 = *(longlong *)&param_1[1].LockCount;
    if (uVar2 != 0) {
      do {
        puVar1 = (undefined4 *)(lVar4 + uVar12 * 0x18);
        if (*(longlong *)(lVar4 + uVar12 * 0x18) == param_2) {
          uVar5 = *(undefined8 *)(puVar1 + 2);
          pcVar6 = *(code **)(puVar1 + 4);
          if (uVar2 - 1 < uVar2) {
            puVar14 = (undefined8 *)(lVar4 + (ulonglong)(uVar2 - 1) * 0x18);
          }
          else {
            DAT_1404e4f20 = CONCAT44(DAT_14045dd10._4_4_,(undefined4)DAT_14045dd10);
            _DAT_1404e4f28 = CONCAT44(DAT_14045dd18._4_4_,(undefined4)DAT_14045dd18);
            puVar14 = &DAT_1404e4f20;
            _DAT_1404e4f30 = DAT_14045dd20;
          }
          uVar7 = *(undefined4 *)((longlong)puVar14 + 4);
          uVar8 = *(undefined4 *)(puVar14 + 1);
          uVar9 = *(undefined4 *)((longlong)puVar14 + 0xc);
          *puVar1 = *(undefined4 *)puVar14;
          puVar1[1] = uVar7;
          puVar1[2] = uVar8;
          puVar1[3] = uVar9;
          *(undefined8 *)(puVar1 + 4) = puVar14[2];
          iVar3 = *(int *)((longlong)&param_1[1].DebugInfo + 4);
          if (iVar3 != 0) {
            *(int *)((longlong)&param_1[1].DebugInfo + 4) = iVar3 + -1;
          }
          LeaveCriticalSection(param_1);
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(uVar5);
            return true;
          }
          goto LAB_14040b250;
        }
        uVar11 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar11;
      } while (uVar11 < uVar2);
    }
    LeaveCriticalSection(param_1);
LAB_14040b250:
    bVar17 = true;
  }
  return bVar17;
}

